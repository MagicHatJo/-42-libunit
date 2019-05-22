/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_test_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:36:52 by jochang           #+#    #+#             */
/*   Updated: 2019/05/19 19:14:19 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_unit_test.h"

int		test_c_04(void)
{
	char	libc_buf[BUF_SIZE];
	char	ft_buf[BUF_SIZE];
	int		libc_retval;
	int		ft_retval;
	int		result;

	result = 0;
	if (!capture_init())
		return (0);
	libc_retval = printf("%c", -0);
	capture_get(libc_buf, BUF_SIZE);
	ft_retval = ft_printf("%c", -0);
	capture_get(ft_buf, BUF_SIZE);
	capture_close();
	result = !ft_strcmp(libc_buf, ft_buf) ? 1 : 0;
	result &= libc_retval == ft_retval;
	return (result);
}
