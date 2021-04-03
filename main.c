/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:57:51 by emallah           #+#    #+#             */
/*   Updated: 2021/03/03 15:08:00 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

// int ft_strlen(char *s);
// int ft_write(int fd, const void *str, size_t byte);
// char *ft_strcpy(char *s, const char* s2);
// int ft_strcmp(char *s, char* s2);
char *ft_strdup(const char *s);

int main()
{
	char *s1 = "mahdi";
	char *s2;
	char *s3;

	s2 = ft_strdup(s1);
	s3 = strdup(s1);
	printf("%s\n%s\n", s2, s3);
}
