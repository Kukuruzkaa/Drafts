/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:06:59 by ddiakova          #+#    #+#             */
/*   Updated: 2021/02/13 16:14:37 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		find_n(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\n')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{//printf("s1 = %s\n", s1);
	char	*s2;
	int		length;
	int		i;

	length = 0;
	while (s1[length])
		length++;
	if (!(s2 = (char*)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	i = 0;
	while (i < length)
	{	
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		j;
	size_t		length;
	char		*s2new;

	if (!s)
		return (NULL);
	j = 0;
	length = ft_strlen(s);
	if (!(s2new = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start >= length)
	{
		s2new[0] = '\0';
		return (s2new);
	}
	while (j < len)
	{
		s2new[j] = s[j + start];
		j++;
	}
	s2new[j] = '\0';
	return (s2new);
}

int	ft_strlen(const char *s)
{
	int		l;

	l = 0;
	if (!s)
		return (l);
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	if (*s == c)
		return ((char*)s);
	return (NULL);
}

int 	ft_strchr_g(char *s, int c)
{//printf("====== tail dans chr = [%s]===========\n", s);
	int 		i;
	
	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;		
	}
	return 0;
}

char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *str;
    int        i;
    int        j;
    i = 0;
    j = 0;
    if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1)))
        return (NULL);
    while (s1[j] != '\0')
    {
        str[i] = s1[j];
        i++;
        j++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        str[i++] = s2[j++];
    }
    str[i] = '\0';
    return (str);
}
void    *ft_memset(void *b, int c, size_t len)
{
        unsigned int    index;
        char                    *str;

        str = (char*)b;
        index = 0;
        while (index < len)
        {
                str[index] = (unsigned char)c;
                index++;
        }
        return (b);
}
void    *ft_calloc(size_t count, size_t size)
{
        void    *str;

        if (!(str = (void*)malloc(count * size)))
                return (NULL);
        ft_memset(str, '\0', count * size);
        return (str);
}