/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:45:36 by stemarti          #+#    #+#             */
/*   Updated: 2024/11/29 12:55:12 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

/*function that reads BUFFER_SIZE bytes, and sets them in load until a '\n' is found. 
 So now load contains everyhting read, including the '\n' and everything after it*/
char	*read_excerpt(int fd, char *load)
{
	char	*buf;
	int	 read_bytes;

	read_bytes = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if(!buf)
		return(ft_free(&(load)));
	buf[0] = '\0';
	while ((read_bytes > 0) && (!ft_strchr(buf,'\n')))
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes > 0)
		{
			buf[read_bytes] = '\0';
			load = ft_strjoin(load, buf);
		}
		//printf("Buffer_Size bites read = %s\n", load);
	}
	free(buf);
	if (read_bytes == -1)
		return (ft_free(&load));
	return (load);
}
// Now we have to set everything before the '\n' in a variable so we can get the line

char	*before_break(char *load)
{
	char	*break_location;
	char	*line;
	int	len;
	char	*temp_load;

	if (load[0] == '\0')
		return (NULL);
	break_location = ft_strchr(load, '\n');
	len = (break_location - load) + 1;
	line = ft_substr(load, 0, (break_location - load));
	if (!line)
		return (ft_free(&load));
	//printf("bytes_bejore_break = %s\n", load);
//	temp = ft_substr(load, (break_location - load), ft_strlen(break_location + 1));
	temp_load = ft_substr(load,len, ft_strlen(load) - (len));
	//printf("temp_load = %s\n", temp_load);
	if (temp_load)
	{
		ft_free(&load);
		load = temp_load;
		//printf("bytes_after_break = %s\n", load);
	}
	return (line);
}

// We do have an ctual line. Now we need to store whats after the break in load. 
// In order to do so we'll first capture what's after the break, and then set it in load
// as an actual preload,

char	*get_next_line(int fd)
{
	static char	*load;
	char	*next_line;

	if (fd < 0)
		return (NULL);
	//if((load && !ft_strchr(load, '\n')) || !load)
	load = read_excerpt(fd, load);
	if (!load)
		return (NULL);
	next_line = before_break(load);
	//printf("next_line = %s\n", next_line);
	//printf("str = %s\n", load);
	if (!next_line)
		return (NULL);
	//printf("str = %s\n", load);
	return (next_line);
}
// So, the main will call the function that gets the next line.
// That function has to read a file, and get line by line all its content.
// It will have to read BUFFER_SIZE bytes of the text.
// I´ll create a variable were I can store BUFFER_SIZE bytes read
	// I will call the reading function until the number of bites read is smaller than the buffer length.

		// Everytime I call read, I'll decide what to do with that particular buffer, 
		// wether to create a new line joining it with whatever was already stored (and so empty that
		// storage, add everything after \n to the storage:
		// to the current line. 

// I will free everything after buffer[bytes_read +1] in order to control memory flow:w
/*
int main(void)
{
    int fd;
    char *line;
 //   char *line1;
   // char *line2;
    //char *line3;

    // Abrir el archivo en modo de solo lectura
    fd = open("test_text.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Leer las líneas una por una
    line = get_next_line(fd);
 //   line1 = get_next_line(fd);
 //   line2 = get_next_line(fd);
//    line3 = get_next_line(fd);

    // Mostrar las líneas en pantalla y liberar memoria
    if (line)
    {
        printf("%s", line);
        free(line);
	}
    }
    if (line1)
    {
        printf("%s", line1);
        free(line1);
    }
    if (line2)
    {
        printf("%s", line2);
        free(line2);
    }
    if (line3)
    {
        printf("%s", line3);
        free(line3);
    }

    // Cerrar el archivo
    close(fd);

    return 0;
}
*/
