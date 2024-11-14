/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:46:13 by stemarti          #+#    #+#             */
/*   Updated: 2024/11/14 11:35:55 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//function that reads BUFFER_SIZE bytes
/*23char	*read_excerpt(int fd)
{
	char *buf;
	ssize_t read_bytes;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1);
	if(!buf)
		return(ft_free(&(buf)));
	fd = open("test_text.txt", O_RDNLY);
	if (fd == -1)
	{
		perror("Not able to open file");
		return (1);
	}
	read_bytes = read(fd, buf, ft_strlen(buf));
	if (read_bytes == -1)
	{
		perror("Not able to read file");
		close (fd);
		return (1);
	}
	buf[read_bytes] = '\0';
	
}*/

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

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main() {
    int fd;
    char buffer[5];
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
    return 0;
}


