/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:54:33 by abasante          #+#    #+#             */
/*   Updated: 2023/09/22 11:50:30 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (0);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == 0)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f (i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	mi_funcion(unsigned int i, char str)
{
	if (i % 2 == 0)
		return (str - 32);
	else
		return (str);
}
