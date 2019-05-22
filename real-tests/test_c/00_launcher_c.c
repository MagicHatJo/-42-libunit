/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:04:45 by jochang           #+#    #+#             */
/*   Updated: 2019/05/18 17:04:46 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_unit_test.h"

int	launcher_c(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("%c: ");
	load_test(&testlist, "42       Test", &test_c_01);
	load_test(&testlist, "1001     Test", &test_c_02);
	load_test(&testlist, "-8000    Test", &test_c_03);
	load_test(&testlist, "-0       Test", &test_c_04);
	load_test(&testlist, "0        Test", &test_c_05);
	load_test(&testlist, "INT_MAX  Test", &test_c_06);
	load_test(&testlist, "char     Test", &test_c_07);
	return (launch_tests(&testlist));
}
