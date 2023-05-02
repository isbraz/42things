/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:34:09 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/05/02 10:55:30 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_type(char type, va_list args)
{
	int	c;

	c = 0;
	if (type == '%')
		c += ft_putchar('%');
	else if (type == 'c')
		c += ft_putchar(va_arg(args, char));
	else if (type == 'd' || type == 'i')
		c += ft_putnbr(va_arg(args, int));
	else if (type == 's')
		c += ft_putstr(va_arg(args, char *));
	else if (type == 'u')
		c += ft_putunsnb(va_arg(args, unsigned int));
	
	
	return (c);
}

int	ft_printf(const char  *str, ...)
{
	va_list	args;
	int	c;
	int	i;

	i = 0;
	c = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			c += ft_type(str[++i], args);
	 	}
		i++;
	}
	va_end(args);
	return (c);
}


int	main(void)
{
	
}