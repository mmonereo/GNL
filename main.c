/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:19:44 by mmonereo          #+#    #+#             */
/*   Updated: 2020/11/28 19:00:45 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "get_next_line.h"

int main (void)
{
	int fd;
	char *line;
	int ret;
	// int conti = 0;

	ret = 1;
	fd = open("azteca.txt", O_RDONLY);
	printf("fd:%d\n", fd);
	
	while (ret > 0)
	{
		ret = get_next_line(fd, &line);
		printf("%s\n\n", line);
		// printf("retorno %d \n", ret);
		free(line);
	}
	
		// ret = get_next_line(fd, &line);
		// printf("%s\n", line);
		// ret = get_next_line(fd, &line);
		// printf("%s\n", line);

	
	
	if (close(fd) == 0)
	{
		printf("fue cerrado\n");
	}
	// system("leaks a.out");
	
}