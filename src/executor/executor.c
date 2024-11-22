/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:18:48 by amouhand          #+#    #+#             */
/*   Updated: 2024/08/28 22:34:17 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/executor.h"

int	execute_commands(t_parser *parser)
{
	if (count_all_commands(parser->cmd) == 1)
	{
		update_last_cmd(get_parser());
		exec_one_command(parser->cmd[0], parser);
	}
	else
	{
		update_last_cmd(get_parser());
		create_pipe(parser->cmd, count_all_commands(parser->cmd));
	}
	return (0);
}
