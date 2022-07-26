/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:41:56 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 14:50:03 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j] && str[i])
		{
			i++;
			j++;
		}
		if (!to_find[j])
			return ((char *)&str[i - j]);
		i = (i - j) + 1;
	}
	return ((void *)0);
}
/*
int main(void)
{
    char str1[15] = "loveme";
    char str2[15] = "love";
    
    printf("the substring is: %s\n", ft_strstr(str1, str2));
    return (0);
    
}*/
