# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emallah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/03 15:20:15 by emallah           #+#    #+#              #
#    Updated: 2021/04/03 15:20:17 by emallah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

$(NAME):
	@nasm -fmacho64 ft_read.s 
	@nasm -fmacho64 ft_strcmp.s
	@nasm -fmacho64 ft_strcpy.s
	@nasm -fmacho64 ft_strdup.s
	@nasm -fmacho64 ft_strlen.s
	@nasm -fmacho64 ft_write.s
	@ar -rc $(NAME) *.o

all : $(NAME)

clean:
	@rm -fr *.o a.out file_test a.out.dSYM

fclean: clean
	@rm -f $(NAME)

re: fclean all