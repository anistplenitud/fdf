/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amampuru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 09:02:35 by amampuru          #+#    #+#             */
/*   Updated: 2018/06/05 11:09:52 by amampuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned long n)
{
	unsigned char *trvdst;
	unsigned char *trvsrc;

	trvdst = (unsigned char *)dest;
	trvsrc = (unsigned char *)src;
	while (trvsrc < (unsigned char *)src + n)
		*trvdst++ = *trvsrc++;
	return (dest);
}
