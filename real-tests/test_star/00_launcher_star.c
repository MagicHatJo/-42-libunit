/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_star.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 15:23:02 by jochang           #+#    #+#             */
/*   Updated: 2019/05/19 15:23:04 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_unit_test.h"

int	launcher_star(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("%c: ");
	load_test(&testlist, "Star     Test", &test_star_01);
	load_test(&testlist, "Star     Test", &test_star_02);
	load_test(&testlist, "Star     Test", &test_star_03);
	return (launch_tests(&testlist));
}
