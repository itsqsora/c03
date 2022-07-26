/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:16:57 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 14:17:00 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
		++i;
	}
	if (i == n)
	{
		--s1;
		--s2;
	}
	return (*s1 - *s2);
}

/*
int main(void)
{
    char str1[10] = "love";
    char str2[10] = "you";
    
    printf("%d\n", ft_strncmp(str1, "", 5));
    printf("%d\n", ft_strncmp("maybe", "", 2));
    printf("%d\n", ft_strncmp(str1, str2, 10));
    printf("%d\n", ft_strncmp(str1, "love", 2));
    return (0);
    
}

*/
