/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:17:26 by dmangola          #+#    #+#             */
/*   Updated: 2021/05/05 12:17:27 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

int main(int ac, char **av)
{
	short	i;

	i = 0;
	if (ac == 1)
		exit(0);
	else
	{
		while (av[i])
		{
			ft_atoi(av[i]);
		}
	}
}