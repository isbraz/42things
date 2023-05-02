/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:52:32 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/05/02 23:46:58 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adress(void *adress)
{
	char	*base;
	unsigned int	c;
	unsigned int 	ad;

	base = LOW_HEX;
	c = 0;
	ad = (unsigned long int)adress;
	if (!adress)
	{
		c = ft_putstr("(nil)");
		return (c);
	}
	write(1, "0x", 2);
	c = ft_hexdec(ad, 'x') + 2;
	return (c);
}
