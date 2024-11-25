/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:01:39 by stemarti          #+#    #+#             */
/*   Updated: 2024/11/25 09:58:23 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*function that reads BUFFER_SIZE bytes, and sets them in load until a '\n' is found. 
 So now load contains everyhting read, including the '\n' and everythingafter it*/
char	*read_excerpt(int fd, char *load)
{
	char	*buf;
	ssize_t read_bytes;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if(!buf)
		return(ft_free(&(load)));
	fd = open("test_text.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	if (read_bytes == -1)
	{
		perror("Not able to read file");
		close (fd);
		return (1);
	}
	while ((read_bytes > 0) && (!ft_strchr(buf,'\n')))
	{
		read_bytes = read(fd, buf, ft_strlen(buf));
		if (read_bytes > 0)
		{
			buf[read_bytes] = '\0';
			load = ft_strjoin(load, buf)
		}
	}
	free(buf);
	if (read_bytes == -1)
		return (ft_free(&load));
	return (load);
}
// Now we have to set everything before the '\n' in a variable so we can get the line

char	*before_break(char *load)
{
	if (ft_strchr(buf, '\n') == 0)
		line = ft_strjoin(line, buf);
	else
		{
			char	*end_of_line;
			int	i;

			i = 0;
			while(buf != '\n')
				i++;
			end_of_line = ft_substr(buf, 0, i);
			line = ft_strjoin(line, end_of_line);
			rest = ft_substr(buf, i, (ft_strlen(buf - i)));
		}
}

char	excerpt_split(char *excerpt)
{

		{
			char	*end_of_line;
			int	i;

			i = 0;
			while(buf != '\n')
				i++;
			end_of_line = ft_substr(buf, 0, i);
			line = ft_strjoin(line, end_of_line);
			rest = ft_substr(buf, i, (ft_strlen(buf - i)));
		}
}


char	get_nex_line(int fd)
{
	char	*excerpt;
	static char	load;
	
	excerpt = read_excerpt(fd);

	while (ft_strchr(excerpt, '\n') == 0) 
	{
		excerpt = read_excerpt(fd);
		int	i;

	if (ft_strchr(excerpt, '\n') == 1)
		while(excerpt[i] != '\n')
			i++;
	}

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

int main() {
    /*int fd;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_leidos;

    // Abrir el archivo
    fd = open("test_text.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Leer el archivo por partes hasta el final
    while ((bytes_leidos = read(fd, buffer, sizeof(buffer))) > 0) {
        buffer[bytes_leidos] = '\0'; // Agregar el carácter nulo al final de los datos válidos
        printf("\n%s\n", buffer);
    }

    if (bytes_leidos == -1) {
        perror("Error al leer del archivo");
    }

    close(fd);
    return 0;/*
}


