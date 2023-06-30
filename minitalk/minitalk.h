/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:52:59 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/06/26 12:31:00 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);
int	ft_strlen(char *s);
char	*ft_itoa(int n);

#endif