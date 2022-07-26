/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:57:32 by mac               #+#    #+#             */
/*   Updated: 2022/07/26 15:31:39 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	len;

	len = ft_strlen(dest) + ft_strlen(src);
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (*dest)
		dest++;
	i = 0;
	while ((i < size - (len - ft_strlen(src)) - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*
int	main(void)
{
	char	*c1;
	char	d2[100];
	char	d3[100];
	char	d4[100];
	char	d5[100];
	char	d6[100];
	char	d7[100];

    // char s1[50] = "This is s1.";
    // char s2[50] = "This is s2.";
    
    // printf("Final string : %u\n", ft_strlcat(s2, s1, 50));
    
    printf("\nTest ft_strlcat :\n");
    c1 = "source";
	d2[100] = "destination";
	d3[100] = "destination";
	d4[100] = "destination";
	d5[100] = "dest";
	d6[100] = "dest";
	d7[100] = "dest";
	printf("11, destination : %u, %s\n", ft_strlcat(d2, c1, 5), d2);
	printf("14, destination : %u, %s\n", ft_strlcat(d3, c1, 8), d3);
	printf("17, destinations : %u, %s\n", ft_strlcat(d4, c1, 13), d4);
	printf("10, dest : %u, %s\n", ft_strlcat(d5, c1, 5), d5);
	printf("10, destsou: %u, %s\n", ft_strlcat(d6, c1, 8), d6);
	printf("10, destsource : %u, %s\n", ft_strlcat(d7, c1, 13), d7);
    return(0);    
}
*/
