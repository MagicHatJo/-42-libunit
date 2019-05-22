/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_unit_test.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 16:40:32 by jochang           #+#    #+#             */
/*   Updated: 2019/05/19 19:01:04 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_UNIT_TEST_H
# define PRINTF_UNIT_TEST_H

# include <limits.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# include "libft.h"
# include "libunit.h"

# define MANDATORY_ON		1
# define MANDATORY_COUNT	4
# define BONUS_ON			1
# define BONUS_COUNT		1
# define MAX_PASS			1
# define BUF_SIZE			1024

/*
** Color
*/

# define C_DEFAULT		"\033[0m"

# define C_RED			"\033[31m"
# define C_GREEN		"\033[32m"
# define C_BROWN		"\033[33m"
# define C_BLUE			"\033[34m"
# define C_PURPLE		"\033[35m"
# define C_CYAN			"\033[36m"
# define C_LIGHTGRAY	"\033[37m"

# define C_YELLOW		"\033[1;33m"
# define C_BOLDBLUE		"\033[1;36m"

/*
** Globals
*/
char	g_char;
char	*g_str;
int		g_stdout_fd_copy;
int		g_pipe_fds[2];

/*
** ft_printf
*/
int		ft_printf(char *s, ...);

/*
** Setup Functions
*/
void	main_header(void);
void	mandatory_header(void);
void	bonus_header(void);
void	leaks_header(void);
void	all_pass(void);

/*
** Capture
*/
bool	capture_init(void);
void	capture_get(char *buf, size_t n);
void	capture_close(void);

/*
** Mandatory
*/
int		launcher_c(void);
int		test_c_01(void);
int		test_c_02(void);
int		test_c_03(void);
int		test_c_04(void);
int		test_c_05(void);
int		test_c_06(void);
int		test_c_07(void);

int		launcher_s(void);
int		test_s_01(void);
int		test_s_02(void);
int		test_s_03(void);
int		test_s_04(void);
int		test_s_05(void);

int		launcher_p(void);
int		test_p_01(void);
int		test_p_02(void);
int		test_p_03(void);
int		test_p_04(void);
int		test_p_05(void);

int		launcher_d(void);
int		test_d_01(void);
int		test_d_02(void);
int		test_d_03(void);
int		test_d_04(void);
int		test_d_05(void);
int		test_d_06(void);
int		test_d_07(void);
int		test_d_08(void);
int		test_d_09(void);
int		test_d_10(void);
int		test_d_11(void);
int		test_d_12(void);

/*
** Bonus
*/
int		launcher_star(void);
int		test_star_01(void);
int		test_star_02(void);
int		test_star_03(void);

#endif
