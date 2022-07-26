/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:18:05 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 14:26:38 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
int main(void)
{
    char str1[10] = "love";
    char str2[10] = "you";
    
    printf("%s\n", ft_strncat(str1, "", 5));
    printf("%s\n", ft_strncat("maybe", "", 2));
    printf("%s\n", ft_strncat(str1, str2, 10));
    printf("%s\n", ft_strncat(str1, "love", 2));
    return (0);
    
}
*/
