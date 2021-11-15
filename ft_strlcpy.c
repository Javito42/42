/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagonzal <jagonzal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:35:09 by jagonzal          #+#    #+#             */
/*   Updated: 2021/11/15 15:36:02 by jagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[size] != '\0')
		++size;
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	return (size - 1);
}
