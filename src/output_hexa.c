/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:55:26 by fmonbeig          #+#    #+#             */
/*   Updated: 2021/06/29 17:33:29 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

void	print_width_hexa(t_layout *lay, int space)
{
	if (lay->zero == 1)
		print_zero(space, lay);
	else
		print_space(space, lay);
}

void	print_precision_hexa_justif(t_layout *lay, int space, int i, char *base)
{
	int	len;

	lay->zero = 0;
	len = lay->prec - (ft_countnbr_base(i, base));
	space = calcul_space_hexa(lay, i, base);
	print_zero(len, lay);
	ft_putnbr_base_printf(i, base, lay);
	if (space > 0)
		print_width_hexa(lay, space);
}

void	print_precision_hexa(t_layout *lay, int space, int i, char *base)
{
	int	len;

	if (lay->prec_neg == 0)
		lay->zero = 0;
	len = lay->prec - (ft_countnbr_base(i, base));
	space = calcul_space_hexa(lay, i, base);
	if (space > 0)
		print_width_hexa(lay, space);
	print_zero(len, lay);
	ft_putnbr_base_printf(i, base, lay);
}

int	calcul_space_hexa(t_layout *lay, int i, char *base)
{
	int	len;

	len = ft_countnbr_base(i, base);
	if (i == 0 && lay->flag_prec == 1 && lay->prec == 0 && lay->prec_neg == 0)
		len = 0;
	if (lay->prec >= lay->width)
		return (0);
	else if (lay->prec < lay->width)
	{
		if (lay->width <= len)
			return (0);
		else if (lay->width >= len)
		{
			if (lay->prec >= len)
				return (lay->width - lay->prec);
			else
				return (lay->width - len);
		}
	}
	return (0);
}
