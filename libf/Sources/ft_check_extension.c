/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoquocb <mdoquocb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:20:06 by mdoquocb          #+#    #+#             */
/*   Updated: 2023/08/23 11:26:22 by mdoquocb         ###   ########.ca       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_check_extension(char *str, char *extension)
{
	int	len_str;
	int	len_ext;
	//int	i;

	len_str = ft_strlen(str);
	len_ext = ft_strlen(extension);
//	i = 0;
	while (len_ext > 0)
	{
		if (extension[--len_ext] == str[--len_str])
//			i++;
//		else
			return (-1);
	}
	return (1);
}
