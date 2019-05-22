/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_test_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 21:21:27 by jochang           #+#    #+#             */
/*   Updated: 2019/05/18 21:21:28 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_unit_test.h"

int		test_d_08(void)
{
	char	libc_buf[BUF_SIZE];
	char	ft_buf[BUF_SIZE];
	int		libc_retval;
	int		ft_retval;
	int		result;

	result = 0;
	if (!capture_init())
		return (0);
	libc_retval = printf("%d", INT_MIN - 1);
	capture_get(libc_buf, BUF_SIZE);
	ft_retval = ft_printf("%d", INT_MIN - 1);
	capture_get(ft_buf, BUF_SIZE);
	capture_close();
	result = !ft_strcmp(libc_buf, ft_buf) ? 1 : 0;
	result &= libc_retval == ft_retval;
	return (result);
}
