/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 18:02:09 by jochang           #+#    #+#             */
/*   Updated: 2019/05/18 18:02:10 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_unit_test.h"

int	launcher_s(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("%s: ");
	load_test(&testlist, "Basic    Test", &test_s_01);
	load_test(&testlist, "Basic    Test", &test_s_02);
	load_test(&testlist, "Basic    Test", &test_s_03);
	load_test(&testlist, "Basic    Test", &test_s_04);
	load_test(&testlist, "NULL     Test", &test_s_05);
	return (launch_tests(&testlist));
}
