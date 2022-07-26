/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 05:45:47 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 05:57:49 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	//test case
	printf("%d\n", ft_strcmp("abc", "abc"));
	printf("%d\n", ft_strcmp("aa", "bb"));
	printf("%d\n", ft_strcmp("bb", "aa"));
	printf("%d\n", ft_strcmp("aab", "aac"));
	return (0);
}*/
