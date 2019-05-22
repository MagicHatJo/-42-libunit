/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_star.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 15:25:43 by jochang           #+#    #+#             */
/*   Updated: 2019/05/19 15:25:43 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_unit_test.h"

int		test_star_01(void)
{
	char	libc_buf[BUF_SIZE];
	char	ft_buf[BUF_SIZE];
	int		libc_retval;
	int		ft_retval;
	int		result;

	result = 0;
	if (!capture_init())
		return (0);
	libc_retval = printf("%%-*.3s LYDI == |%-*.3s|\n", 5, "LYDI");
	capture_get(libc_buf, BUF_SIZE);
	ft_retval = ft_printf("%%-*.3s LYDI == |%-*.3s|\n", 5, "LYDI");
	capture_get(ft_buf, BUF_SIZE);
	capture_close();
	result = !ft_strcmp(libc_buf, ft_buf) ? 1 : 0;
	result &= libc_retval == ft_retval;
	return (result);
}
