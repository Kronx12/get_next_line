/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line_utils.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gbaud <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/01 02:08:26 by gbaud        #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 01:03:45 by gbaud       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include "complete_lib.h"

char	*ft_strfjoin(char *s1, char *s2, int j)
{
	char	*r;
	char	*res;
	char	*sa;
	char	*sb;

	sa = (char *)s1;
	sb = (char *)s2;
	if (!(r = ft_calloc(ft_strslen(sa) + ft_strslen(sb) + 1, sizeof(char))))
		return (NULL);
	res = r;
	while (*sa != '\0')
		*res++ = *sa++;
	while (*sb != '\0')
		*res++ = *sb++;
	*res = '\0';
	if (j >= 1)
		free(s1);
	if (j > 1)
		free(s2);
	return (r);
}

char	*ft_strfdup(char *src, int n, int f)
{
	int		i;
	char	*src2;

	if (n < 0)
	{
		i = ft_strslen((char *)src) + 1;
		if (!(src2 = (char*)malloc((i <= BUFFER_SIZE) ? BUFFER_SIZE + 1 : i)))
			return (NULL);
		i = -1;
		while (src[++i])
			src2[i] = src[i];
	}
	else
	{
		if (!(src2 = (char*)malloc(n + 1)))
			return (NULL);
		i = -1;
		while (++i < n)
			src2[i] = src[i];
	}
	src2[i] = '\0';
	if (f == 1)
		free(src);
	return (src2);
}

int		ft_strslen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allowed;
	size_t	i;

	i = size * nmemb;
	if (!(allowed = malloc(i)))
		return (NULL);
	while (i--)
		((char *)allowed)[i] = '\0';
	return (allowed);
}