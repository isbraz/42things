/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:52:32 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/05/03 16:03:26 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adress(void *adress)
{
	char	*base;
	unsigned int	c;
	unsigned long int 	ad;

	base = LOW_HEX;
	c = 0;
	ad = (unsigned long int)adress;
	if (!adress)
	{
		c += ft_putstr("(nil)");
		return (c);
	}
	c += ft_putstr("0x");
	c += ft_hexdec(ad, 'x');
	return (c);
}
