/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:04:45 by jochang           #+#    #+#             */
/*   Updated: 2019/05/19 21:52:19 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

int		launcher_error(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	puts("ERRORS: ");
	load_test(&testlist, "SEGV     Test", &test_error_01);
	load_test(&testlist, "ABRT     Test", &test_error_02);
	load_test(&testlist, "Time-Out Test", &test_error_03);
	load_test(&testlist, "BUSE     Test", &test_error_04);
	load_test(&testlist, "FPE      Test", &test_error_05);
	return (launch_tests(&testlist));
}
