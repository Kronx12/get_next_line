/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gbaud <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 03:33:30 by gbaud        #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 11:48:55 by gbaud       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include "complete_lib.h"
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
# endif

int		get_next_line(int fd, char **line);
int		ft_strslen(char *s1);
char	*ft_strfjoin(char *s1, char *s2, int j);
char	*ft_strfdup(char *s1, int n, int f);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
