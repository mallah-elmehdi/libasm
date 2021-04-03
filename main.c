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
	char	*s0;
	char	s1[1000];
	char	*s2;
	size_t	a;
	size_t	b;

	s0 = ft_strdup("hello there!\n");
	s2 = ft_strdup("Test test test\n");
	a = ft_strlen(s0);
	b = ft_strlen(s2);
	ft_write(1, s0, a);
	ft_write(1, s2, b);
	ft_strcpy(s1, s2);
	b = ft_strlen(s1);
	ft_write(1, s1, b);
	b = ft_read(1, s1, b);
	ft_write(1, s1, b);
	a = ft_strcmp(s0, s1);
}
