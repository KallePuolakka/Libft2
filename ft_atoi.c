/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuolakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:42:25 by kpuolakk          #+#    #+#             */
/*   Updated: 2022/02/23 18:15:52 by kpuolakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	neg;
	int	n;

	neg = 1;
	n = 0;
	while (*str == '\f' || *str == '\t' || *str == ' '
		|| *str == '\n' || *str == '\r' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n * neg);
}
