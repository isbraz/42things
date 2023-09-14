/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:21:53 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/14 17:15:08 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_images(t_window *window)
{
	int	i;

	window->bg = mlx_xpm_file_to_image(window->mlx, "./i/bg.xpm", &i, &i);
	window->cimg = mlx_xpm_file_to_image(window->mlx, "./i/c.xpm", &i, &i);
	window->eimg = mlx_xpm_file_to_image(window->mlx, "./i/e.xpm", &i, &i);
	window->pf = mlx_xpm_file_to_image(window->mlx, "./i/n1.xpm", &i, &i);
	window->pd = mlx_xpm_file_to_image(window->mlx, "./i/n2.xpm", &i, &i);
	window->pd2 = mlx_xpm_file_to_image(window->mlx, "./i/n3.xpm", &i, &i);
	window->pl = mlx_xpm_file_to_image(window->mlx, "./i/n4.xpm", &i, &i);
	window->plw = mlx_xpm_file_to_image(window->mlx, "./i/n5.xpm", &i, &i);
	window->plw2 = mlx_xpm_file_to_image(window->mlx, "./i/n6.xpm", &i, &i);
	window->pr = mlx_xpm_file_to_image(window->mlx, "./i/n7.xpm", &i, &i);
	window->prw = mlx_xpm_file_to_image(window->mlx, "./i/n8.xpm", &i, &i);
	window->prw2 = mlx_xpm_file_to_image(window->mlx, "./i/n9.xpm", &i, &i);
	window->pu = mlx_xpm_file_to_image(window->mlx, "./i/n10.xpm", &i, &i);
	window->puw = mlx_xpm_file_to_image(window->mlx, "./i/n11.xpm", &i, &i);
	window->puw2 = mlx_xpm_file_to_image(window->mlx, "./i/n12.xpm", &i, &i);
	window->wimg = mlx_xpm_file_to_image(window->mlx, "./i/w.xpm", &i, &i);
}
void	put_image_colectble(t_window *window, int altura, int largura)
{
	mlx_put_image_to_window(window->mlx, window->mlx, window->cimg, altura * 32, largura * 32);
	
}
