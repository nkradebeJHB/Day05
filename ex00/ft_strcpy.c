/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkradebe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:40:15 by nkradebe          #+#    #+#             */
/*   Updated: 2020/07/17 08:40:20 by nkradebe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char*	dest,	char*	src)
{
	int		i;

	i	=	0;
	while(src[i]	!=	'\0')
	{
		dest[i]	=	src[i];
		i++;
	}
	dest[i]	=	'\0';
	return(dest);
}
