/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:11:30 by dmangola          #+#    #+#             */
/*   Updated: 2021/03/17 12:11:31 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	ft_init_map_input(t_all *all)
{
	I_GNL_FD = -1;
	all->map_input.tex_fd = -1;
	I_MAP_LINES = 0;
	CP_GNL_LINE = 0;
	all->map_input.current_ide = 0;
	all->map_input.input = 0;
	all->map_input.real_ide[0] = "S";
	all->map_input.real_ide[1] = "NO";
	all->map_input.real_ide[2] = "SO";
	all->map_input.real_ide[3] = "WE";
	all->map_input.real_ide[4] = "EA";
	all->map_input.real_ide[5] = "R";
	all->map_input.real_ide[6] = "C";
	all->map_input.real_ide[7] = "F";
}

void	ft_init_input(t_all *all)
{
	VP_MLX = NULL;
	VP_WIN = NULL;
}