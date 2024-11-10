/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:28:28 by stemarti          #+#    #+#             */
/*   Updated: 2024/11/10 19:38:04 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char	buffer[50];
	ssize_t	read_bytes;

	fd = open("test_text.txt", O_RDONNLY);
	if (fd == -1)
	{
		perror("Error reading file");
		close(fd);
		return (1);
	}
	read_bytes= read(fd, buffer, 50);
	int	i;
	i = 0;
	char	*excerpt;
	if (ft_strchr(buffer, '\n') == 0)
	{	
		excerpt = ft_substr(buffer, 0, ft_strlen(buffer));

	while(buffer[i] != '\0')
	{
		if(buffer[i] != '\n')
			i++;
		char	*excerpt;
	}
}
/*char *line

- Leo 50
    - Creo contador y recorro el `buffer` aumentando el contador, si no hay `\n` , añad
	a excerpt todo el contenido del buffer.
		- Si buffer[i] = \n, creo una línea, con la longitud del contador.
		- Creo una variable pre-excerpt para almacenar el resto del buffer.

- Leo de nuevo:
	- Creo contador y recorro buffer, si no hay '\n' añado todo el buffer a pre_excerpt.
	- Si buffer[i] = \n, creo nueva línea con el contenido de pre-excerpt y el nuevo excerpt-
	- Sigo recorriendo y almacenando todo en un nuevo pre-excerpt.


		
        - De `excerpt`, voy almacenando el contenido hasta el primer `\n`
    - almaceno en la variable estática `char *line`  .
    - Si no hay `\n` , `line += excerpt`
- Lo que haya detrás de `\n` lo almaceno en `char *pre_excerpt`.
- Vuelvo a leer 50.
    - Del buffer, cojo el contenido hasta el primer `\n`
    - Creo una variable y almaceno pre_excerpt + excerpt*/





int main() {
    int fd;
    char buffer[100];
    ssize_t bytes_leidos;

    // Abrir un archivo en modo lectura
    fd = open("test_text.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Leer 50 bytes del archivo
    bytes_leidos = read(fd, buffer, 50);
    if (bytes_leidos == -1) {
        perror("Error al leer del archivo");
        close(fd);
        return 1;
    }

    // Imprimir los datos leídos
    write(1, buffer, bytes_leidos);

    // Cerrar el archivo
    close(fd);

    return 0;
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src || (n == 0))
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dest);
}
