/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 16:40:32 by jochang           #+#    #+#             */
/*   Updated: 2019/05/19 19:01:04 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TEST_H
# define UNIT_TEST_H

# include <limits.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/mman.h>

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
** Capture
*/
bool	capture_init(void);
void	capture_get(char *buf, size_t n);
void	capture_close(void);

/*
** Errors
*/
int		launcher_error(void);
int		test_error_01(void);
int		test_error_02(void);
int		test_error_03(void);
int		test_error_04(void);
int		test_error_05(void);

#endif
