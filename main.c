/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:20:58 by emallah           #+#    #+#             */
/*   Updated: 2021/04/03 18:21:00 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char *very_long_str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum";
	char *empty_str = "";
	char dest[1000];
	char *dup;
	int fd = open("./file_test", O_CREAT | O_RDWR | O_TRUNC, 0666);

	printf("\n\n\n\n=============== FT_STRLEN\n");
	printf("** ft_strlen with empty string\n** resultat => %zu\n\n", ft_strlen(empty_str));
	printf("** ft_strlen with a very long string\n** resultat => %zu\n", ft_strlen(very_long_str));
	printf("===============\n\n\n\n");

	printf("=============== FT_STRCPY\n");
	printf("** ft_strcpy with empty string\n** resultat => %s\n\n", ft_strcpy(dest, empty_str));
	printf("** ft_strcpy with a very long string\n** resultat => %s\n", ft_strcpy(dest, very_long_str));
	printf("===============\n\n\n\n");

	printf("=============== FT_STRCMP\n");
	printf("** ft_strcmp with 2 empty strings\n** resultat => %d\n\n", ft_strcmp(empty_str, empty_str));
	printf("** ft_strcmp with 1 empty string as 1st argument\n** resultat => %d\n\n", ft_strcmp(empty_str, very_long_str));
	printf("** ft_strcmp with 1 empty string as 2nd argument\n** resultat => %d\n\n", ft_strcmp(very_long_str, empty_str));
	printf("** ft_strcmp with equal strings\n** resultat => %d\n", ft_strcmp(very_long_str, very_long_str));
	printf("===============\n\n\n\n");

	printf("=============== FT_WRITE\n");
	printf("** ft_write in stdout with an empty string\n** resultat => %zu\n\n", ft_write(1, empty_str, 0));
	printf("** ft_write in stdout with a very long string\n** resultat => %zu\n\n", ft_write(1, very_long_str, 444));
	printf("** ft_write in an open file descriptor with an empty string\n** resultat => %zu\n\n", ft_write(fd, empty_str, 0));
	printf("** ft_write in an open file with a very long string\n** resultat => %zu\n\n", ft_write(fd, very_long_str, 444));
	printf("** ft_write to a wrong file descriptor with an empty string\n** resultat => %zu\n\n", ft_write(-1, empty_str, 0));
	printf("** ft_write to a wrong file descriptor with a very long string\n** resultat => %zu\n\n", ft_write(-1, very_long_str, 444));
	printf("===============\n\n\n\n");

	printf("=============== FT_READ\n");
	printf("** ft_read with stdout an empty string\n** resultat => %zu\n\n", ft_read(1, dest, 0));
	printf("** ft_read with stdout a very long string\n** resultat => %zu\n\n", ft_read(1, dest, 444));
	printf("** ft_read with an open file descriptor an empty string\n** resultat => %zu\n\n", ft_read(fd, dest, 0));
	printf("** ft_read with an open file a very long string\n** resultat => %zu\n\n", ft_read(fd, dest, 444));
	printf("** ft_read with a wrong file descriptor an empty string\n** resultat => %zu\n\n", ft_read(-1, dest, 0));
	printf("** ft_read with a wrong file descriptor a very long string\n** resultat => %zu\n\n", ft_read(-1, dest, 444));
	printf("===============\n\n\n\n");

	printf("=============== FT_STRDUP\n");
	printf("** ft_strdup with empty string\n** resultat => %s\n\n", ft_strdup(empty_str));
	printf("** ft_strdup with a very long string string\n** resultat => %s\n", ft_strdup(very_long_str));
	printf("===============\n\n\n\n");
}
