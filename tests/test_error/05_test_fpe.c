/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:11:23 by jochang           #+#    #+#             */
/*   Updated: 2019/05/19 21:42:18 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

int		test_error_05(void)
{
	int i;
	int	b;

	i = INT_MIN;
	b = -1;
	i = i / b;
	return (0);
}
