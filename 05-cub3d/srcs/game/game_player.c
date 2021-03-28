/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:31:21 by dmangola          #+#    #+#             */
/*   Updated: 2021/03/19 14:31:23 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	ft_get_player(t_all *all, int x, int y, int i, int j)
{
	if (CPP_MAP[i][j] == 'N' || CPP_MAP[i][j] == 'S' || CPP_MAP[i][j] == 'E'
		|| CPP_MAP[i][j] == 'W')
	{
		F_PPX = x;
		F_PPY = y;
		if (CPP_MAP[i][j] == 'N')
			all->player.dir = PI_2;
		else if (CPP_MAP[i][j] == 'S')
			all->player.dir = PI_3_4;
		else if (CPP_MAP[i][j] == 'E')
			all->player.dir = 2 * PI;
		else if (CPP_MAP[i][j] == 'W')
			all->player.dir = PI;
		return ;
	}
}
