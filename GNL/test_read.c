/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:28:28 by stemarti          #+#    #+#             */
/*   Updated: 2024/11/11 09:44:38 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_excerpt(char *read_bytes)
{
	int	i;
	i = 0;
	char	*excerpt;
	if (ft_strchr(read_bytes, '\n') == 0)
		excerpt = ft_substr(read_bytes, 0, ft_strlen(read_bytes));
	else
	{
		while (read_bytes[i] != '\n')
			i++;
		excerpt = ft_substr(read_bytes, 0, i);
	}
	char	*rest;
	rest = ft_substr(buffer, (i + 1), (ft_strlen(buffer - i)));
	return(excerpt);
}

int main() {
    int fd;
    char buffer[50];
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
	buffer[bytes_leidos] = '\0';

    // Imprimir los datos leídos
    //write(1, buffer, bytes_leidos);
	printf("This is your first excerpt:'\n'%s", get_excerpt(buffer));
    // Cerrar el archivo
    close(fd);

    return 0;
}

/*int	main()
{
	printf("Estas es la primera línea: %s", get_next_line("test_text.txt"));
}*/
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






/*void	*ft_memcpy(void *dest, const void *src, size_t n)
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
}*/
