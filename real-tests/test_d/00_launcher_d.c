/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 21:15:20 by jochang           #+#    #+#             */
/*   Updated: 2019/05/18 21:15:21 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_unit_test.h"

int	launcher_d(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("%d: ");
	load_test(&testlist, "42       Test", &test_d_01);
	load_test(&testlist, "Basic    Test", &test_d_02);
	load_test(&testlist, "Negative Test", &test_d_03);
	load_test(&testlist, "Negative Test", &test_d_04);
	load_test(&testlist, "Zero     Test", &test_d_05);
	load_test(&testlist, "INT_MAX  Test", &test_d_06);
	load_test(&testlist, "INT_MIN  Test", &test_d_07);
	load_test(&testlist, "Overflow Test", &test_d_08);
	load_test(&testlist, "Overflow Test", &test_d_09);
	load_test(&testlist, "Leading  Test", &test_d_10);
	load_test(&testlist, "ASCII    Test", &test_d_11);
	load_test(&testlist, "Add      Test", &test_d_12);
	return (launch_tests(&testlist));
}
