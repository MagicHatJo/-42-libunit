/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:11:23 by jochang           #+#    #+#             */
/*   Updated: 2019/05/19 20:31:28 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

int		test_error_02(void)
{
	char	buffer[120];
	int		i;

	i = -1;
	while (++i < 120)
		buffer[i] = i ^ 42;
	strcat("foo", buffer);
	return (0);
}
