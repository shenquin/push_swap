/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:24:14 by aglorios          #+#    #+#             */
/*   Updated: 2021/08/31 12:38:51 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/checker.h"

int	main(int ac, char **av)
{
	t_pile	*pile;

	pile = ft_calloc(1, sizeof(t_pile));
	pile->count_arg = 1;
	if (ac < 2)
		return (0);
	if (!arg_to_pile(ac, av, pile))
		return (0);
	while (pile->count_arg != 0)
		pile_doublons(pile->a[--pile->count_arg], pile);
	checker_algo(pile);
	free_struct(pile, 0);
	exit(0);
	return (0);
}
