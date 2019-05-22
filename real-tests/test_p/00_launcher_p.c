/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 18:22:14 by jochang           #+#    #+#             */
/*   Updated: 2019/05/18 18:22:15 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_unit_test.h"

int	launcher_p(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("%p: ");
	load_test(&testlist, "Basic    Test", &test_p_01);
	load_test(&testlist, "Basic    Test", &test_p_02);
	load_test(&testlist, "Address  Test", &test_p_03);
	load_test(&testlist, "NULL     Test", &test_p_04);
	return (launch_tests(&testlist));
}
