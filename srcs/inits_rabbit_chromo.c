/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inits_rabbit_chromo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah <srabah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 12:29:12 by srabah            #+#    #+#             */
/*   Updated: 2015/02/25 14:37:55 by srabah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	init_g_chromosom(t_fractal *p)
{
	p->which_fractal = CHROMOSOM;
	p->ft_pros = ft_pros_chromosom;
}

void	init_g_noun(t_fractal *p)
{
	p->which_fractal = NOUN;
	p->ft_pros = ft_pros_noun;
}

void	ft_pros_chromosom(t_fractal *p, int x, int y)
{
	p->c_r = 0.02;
	p->c_r = 1;
	p->z_r = (y + p->offset.y) / p->zoom;
	p->z_i = (x + p->offset.x) / p->zoom;
}

void	ft_pros_noun(t_fractal *p, int x, int y)
{
	p->c_r = -0.122565;
	p->c_i = -0.744864;
	p->z_r = (x + p->offset.x) / p->zoom;
	p->z_i = (y + p->offset.y) / p->zoom;
}
