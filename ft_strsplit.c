/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmencier <gmencier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 14:31:32 by gmencier          #+#    #+#             */
/*   Updated: 2015/05/08 21:18:18 by gmencier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_iword(const char *s, char c)
{
	size_t	nbword;
	size_t	flag;

	flag = 1;
	nbword = 0;
	while (*s)
	{
		if ((*s != c) && (flag == 1))
		{
			nbword++;
			flag = 0;
		}
		if (*s == c)
			flag = 1;
		s += 1;
	}
	return (nbword);
}

static char	*ft_insert_word(char const *s, char c)
{
	char	*new_str;
	size_t	i;

	i = 0;
	while (s[i] != c)
		i++;
	new_str = (char *)malloc((i + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	new_str = ft_strncpy(new_str, s, i);
	new_str[i] = '\0';
	return (new_str);
}

static void	ft_wordcut(char const *s, char c, size_t i, char **tab)
{
	size_t	flag;

	flag = 1;
	while ((*s) && (i > 0))
	{
		if (*s != c)
		{
			if (flag == 1)
			{
				*tab = ft_insert_word(s, c);
				flag = 0;
				tab++;
				i = i - 1;
			}
		}
		else if (flag == 0)
			flag = 1;
		s += 1;
	}
	*tab = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	wrd_cnt;

	if (s == NULL)
		return (NULL);
	wrd_cnt = ft_iword(s, c);
	tab = (char **)malloc((wrd_cnt + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	ft_wordcut(s, c, wrd_cnt, tab);
	return (tab);
}
