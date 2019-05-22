/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 16:39:59 by jochang           #+#    #+#             */
/*   Updated: 2019/05/19 18:35:45 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_unit_test.h"

int		main(void)
{
	int		num_pass;

	num_pass = 0;
	main_header();
	if (MANDATORY_ON)
	{
		mandatory_header();
		num_pass += launcher_c();
		printf("\n");
		num_pass += launcher_s();
		printf("\n");
		num_pass += launcher_p();
		printf("\n");
		num_pass += launcher_d();
		printf("\n");
	}
	if (BONUS_ON)
	{
		bonus_header();
		num_pass += launcher_star();
		printf("\n");
	}
	leaks_header();
	system("leaks ft_printf_unit_test");
	if (num_pass >= (MANDATORY_ON * MANDATORY_COUNT) + (BONUS_ON * BONUS_COUNT))
		all_pass();
	return (0);
}
