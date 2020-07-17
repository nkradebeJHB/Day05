/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:42:03 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/17 08:46:38 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char	*dest,	char	*src,	unsigned int n)
{
	unsigned int	i;

	i	=	0;
	while(i	< n && src[i] != '\0')
	{
		dest[i]	= src[i];
		i++;
	}

	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}
