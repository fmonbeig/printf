/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:13:41 by fmonbeig          #+#    #+#             */
/*   Updated: 2021/07/05 20:03:27 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "include/ft_printf.h"


int main ()
{
int ret = 1;
int rot = 1;


printf("\n==========STRING TEST================\n\n");

ret = ft_printf("\nFT_PRINTF = bonjour %10.2s Florian\n","je m'appelle");
rot = printf("   PRINTF = bonjour %10.2s Florian \n","je m'appelle");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);
/*
ret = ft_printf("\nFT_PRINTF = bonjour %30s Florian\n","je m'appelle");
rot = printf("   PRINTF = bonjour %30s Florian \n","je m'appelle");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %5s Florian\n","je m'appelle");
rot = printf("   PRINTF = bonjour %5s Florian \n","je m'appelle");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-2s Florian\n","je m'appelle");
rot = printf("   PRINTF = bonjour %-2s Florian \n","je m'appelle");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-02s Florian\n","je m'appelle");
rot = printf("   PRINTF = bonjour %-02s Florian \n","je m'appelle");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-.2s Florian\n","je m'appelle");
rot = printf("   PRINTF = bonjour %-.2s Florian \n","je m'appelle");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %.s %.1s Florian\n","123", "4567");
rot = printf("   PRINTF = bonjour %.s %.1s Florian \n","123", "4567");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %.0s %.2s Florian\n","123", "4567");
rot = printf("   PRINTF = bonjour %.0s %.2s Florian \n","123", "4567");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-5.6s Florian\n","je m'appelle");
rot = printf("   PRINTF = bonjour %-5.6s Florian \n","je m'appelle");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %010.4s %.2s Florian\n","123", "4567");
rot = printf("   PRINTF = bonjour %010.4s %.2s Florian \n","123", "4567");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %10.4s %.2s Florian\n","123", "4567");
rot = printf("   PRINTF = bonjour %10.4s %.2s Florian \n","123", "4567");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %*.4s %.2s Florian\n",10,"123", "4567");
rot = printf("   PRINTF = bonjour %*.4s %.2s Florian \n",10,"123", "4567");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %1.s Florian\n","12356");
rot = printf("   PRINTF = bonjour %1.s Florian \n","12356");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-3.s Florian\n", NULL);
rot = printf("   PRINTF = bonjour %-3.s Florian \n", NULL);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);


ret = ft_printf("\nFT_PRINTF = bonjour %1.*s Florian\n",-2, "poil");
rot = printf("   PRINTF = bonjour %1.*s Florian \n",-2, "poil");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %-2.2s--\n","c");
rot = printf("   PRINTF = %-2.2s-- \n","c");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %-10.15s--\n","c");
rot = printf("   PRINTF = %-10.15s-- \n","c");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %3.15s--\n","c");
rot = printf("   PRINTF = %3.15s-- \n","c");
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

printf("\n==========UNSIGNED TEST================\n\n");

ret = ft_printf("\nFT_PRINTF = bonjour %u Florian\n",50);
rot = printf("   PRINTF = bonjour %u Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %5u Florian\n",50);
rot = printf("   PRINTF = bonjour %5u Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %05u Florian\n",50);
rot = printf("   PRINTF = bonjour %05u Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-010u Florian\n",-50);
rot = printf("   PRINTF = bonjour %-010u Florian \n",-50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-5u Florian\n",50);
rot = printf("   PRINTF = bonjour %-5u Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-*.*u Florian\n",7,9,50);
rot = printf("   PRINTF = bonjour %-*.*u Florian \n",7,9,50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %*u Florian\n",-7,50);
rot = printf("   PRINTF = bonjour %*u Florian \n",-7,50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %.8u Florian\n",50);
rot = printf("   PRINTF = bonjour %.8u Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %.8u Florian\n",-50);
rot = printf("   PRINTF = bonjour %.8u Florian \n",-50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %10.5u Florian\n",-5);
rot = printf("   PRINTF = bonjour %10.5u Florian \n",-5);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-12.32u Florian\n",-89);
rot = printf("   PRINTF = bonjour %-12.32u Florian \n",-89);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %010.20u Florian\n",-50);
rot = printf("   PRINTF = bonjour %010.20u Florian \n",-50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %037.8u Florian\n",-89);
rot = printf("   PRINTF = bonjour %037.8u Florian \n",-89);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %020.0u Florian\n",-89);
rot = printf("   PRINTF = bonjour %020.0u Florian \n",-89);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);


ret = ft_printf("\nFT_PRINTF = bonjour %02.*u Florian\n",-1, 8);
rot = printf("   PRINTF = bonjour %02.*u Florian \n",-1, 8);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %010.*u Florian\n",-1, 89);
rot = printf("   PRINTF = bonjour %010.*u Florian \n",-1, 89);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

printf("\n==========HEXA TEST================\n\n");

ret = ft_printf("\nFT_PRINTF = bonjour %x Florian\n",500);
rot = printf("   PRINTF = bonjour %x Florian \n",500);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %5x Florian\n",50);
rot = printf("   PRINTF = bonjour %5x Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %05x Florian\n",50);
rot = printf("   PRINTF = bonjour %05x Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %010X Florian\n",-50);
rot = printf("   PRINTF = bonjour %010X Florian \n",-50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-5x Florian\n",50);
rot = printf("   PRINTF = bonjour %-5x Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-*.*x Florian\n",7,9,50);
rot = printf("   PRINTF = bonjour %-*.*x Florian \n",7,9,50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %*X Florian\n",7,50);
rot = printf("   PRINTF = bonjour %*X Florian \n",7,50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %10.5X Florian\n",-50);
rot = printf("   PRINTF = bonjour %10.5X Florian \n",-50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %.8x Florian\n",50);
rot = printf("   PRINTF = bonjour %.8x Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-0.8x Florian\n",-50);
rot = printf("   PRINTF = bonjour %-0.8x Florian \n",-50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %10.5X Florian\n",-5);
rot = printf("   PRINTF = bonjour %10.5X Florian \n",-5);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-12.32X Florian\n",-5);
rot = printf("   PRINTF = bonjour %-12.32X Florian \n",-5);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF =%.d--\n", 0);
rot = printf("   PRINTF =%.d-- \n", 0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF =%.u--\n", 0);
rot = printf("   PRINTF =%.u-- \n", 0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF =%.x--\n", 0);
rot = printf("   PRINTF =%.x-- \n", 0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);
*/
printf("\n==========POINTER TEST================\n\n");

int a;


ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %50p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %50p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %-050p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %-050p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %-50p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %-50p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %-050.10p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %-050.10p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %050p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %050p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %050.25p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %050.25p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %50.25p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %50.25p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %25.10p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %25.10p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %025.1p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %025.1p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %p %p ohoh\n", -1, -1);
rot = printf("   PRINTF = j ai un gros pointeur %p %p ohoh \n", -1, -1);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %10p %-10p ohoh\n", 0, 0);
rot = printf("   PRINTF = j ai un gros pointeur %10p %-10p ohoh \n", 0, 0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %-10p %10p ohoh\n", 0, 0);
rot = printf("   PRINTF = j ai un gros pointeur %-10p %10p ohoh \n", 0, 0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %10p ohoh\n", 0, 0);
rot = printf("   PRINTF = j ai un gros pointeur %10p ohoh \n", 0, 0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %050p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %050p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %05p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %05p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %05.15p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %05.15p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %-7.21p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %-7.21p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %-35.21p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %-35.21p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %-1.1p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %-1.1p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %01.1p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %01.1p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %-2p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %-2p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %04.69p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %04.69p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = j ai un gros pointeur %010.2p ohoh\n", &a);
rot = printf("   PRINTF = j ai un gros pointeur %010.2p ohoh \n", &a);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);
/*
printf("\n==========MULTIPLE TEST================\n\n");

int b;

ret = ft_printf("\nFT_PRINTF = bonjour %-12.32X %5d %9c Florian\n",-5, 38, 'Z');
rot = printf("   PRINTF = bonjour %-12.32X %5d %9c Florian \n",-5, 38, 'Z');
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-12.32X %5d %9c Florian\n",-5, 38, 'Z');
rot = printf("   PRINTF = bonjour %-12.32X %5d %9c Florian \n",-5, 38, 'Z');
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %s Florian\n",NULL);
rot = printf("   PRINTF = bonjour %s Florian \n", NULL);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\n%p\n", NULL);
rot = printf("%p \n",  NULL);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\n--%10p %-10p-- \n", 0, 0);
rot = printf("--%10p %-10p--  \n",  0, 0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);


printf("\n==========CHARACTER TEST================\n\n");

ret = ft_printf("\nFT_PRINTF = bonjour %c Florian\n",0);
rot = printf("   PRINTF = bonjour %c Florian \n",0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %5c Florian\n",'Z');
rot = printf("   PRINTF = bonjour %5c Florian \n",'Z');
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-24c Florian\n",'Z');
rot = printf("   PRINTF = bonjour %-24c Florian \n",'Z');
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %024c Florian\n",'Z');
rot = printf("   PRINTF = bonjour %024c Florian \n",'Z');
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %24.2c Florian\n",'Z');
rot = printf("   PRINTF = bonjour %24.2c Florian \n",'Z');
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-*c Florian\n",15,'Z');
rot = printf("   PRINTF = bonjour %-*c Florian \n",15,'Z');
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %.*i Florian\n", -4, 8);
    rot = printf("   PRINTF = bonjour %.*i Florian \n", -4, 8);
    printf("valeur de retour %d\n",ret);
    printf("valeur de retour %d\n",rot);

printf("\n==========INTEGER TEST================\n\n");
ret = ft_printf("\nFT_PRINTF = bonjour %d Florian\n",0);
rot = printf("   PRINTF = bonjour %d Florian \n", 0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %1d Florian\n",7000);
rot = printf("   PRINTF = bonjour %1d Florian \n",7000);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %05d Florian\n",50);
rot = printf("   PRINTF = bonjour %05d Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %010d Florian\n",-50);
rot = printf("   PRINTF = bonjour %010d Florian \n",-50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-5d Florian\n",50);
rot = printf("   PRINTF = bonjour %-5d Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-*.*d Florian\n",7,9,50);
rot = printf("   PRINTF = bonjour %-*.*d Florian \n",7,9,50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %*d Florian\n",-7,50);
rot = printf("   PRINTF = bonjour %*d Florian \n",-7,50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %10.5d Florian\n",-50);
rot = printf("   PRINTF = bonjour %10.5d Florian \n",-50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %.8d Florian\n",50);
rot = printf("   PRINTF = bonjour %.8d Florian \n",50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %.8d Florian\n",-50);
rot = printf("   PRINTF = bonjour %.8d Florian \n",-50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %10.5d Florian\n",-5);
rot = printf("   PRINTF = bonjour %10.5d Florian \n",-5);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-12.32d Florian\n",-5);
rot = printf("   PRINTF = bonjour %-12.32d Florian \n",-5);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-*12d Florian\n",7,50);
rot = printf("   PRINTF = bonjour %-*12d Florian \n",7,50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %-*20*50d Florian\n",1,3,50);
rot = printf("   PRINTF = bonjour %-*20*50d Florian \n",1,3,50);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %3.d Florian\n",0);
rot = printf("   PRINTF = bonjour %3.d Florian \n",0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %.d Florian\n",0);
rot = printf("   PRINTF = bonjour %.d Florian \n",0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %d Florian\n",-2);
rot = printf("   PRINTF = bonjour %d Florian \n",-2);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %4d Florian\n",-2);
rot = printf("   PRINTF = bonjour %4d Florian \n",-2);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %04d Florian\n",-2);
rot = printf("   PRINTF = bonjour %04d Florian \n",-2);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %0-2.0d Florian\n", 0);
rot = printf("   PRINTF = bonjour %0-2.0d Florian \n", 0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = bonjour %0-2.0d Florian\n", 0);
rot = printf("   PRINTF = bonjour %0-2.0d Florian \n", 0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = --0*%0*.0d*0 0*%0*.10d*0--\n",-2, 0, 21, 1);
rot = printf("   PRINTF = --0*%0*.0d*0 0*%0*.10d*0-- \n",-2, 0, 21, 1);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = --0*%0*.0d*0 0*%0*.10d*0--\n",-21, INT_MAX, 21, INT_MIN);
rot = printf("   PRINTF = --0*%0*.0d*0 0*%0*.10d*0-- \n",-21, INT_MAX, 21, INT_MIN);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %5.10d\n", -20);
rot = printf("   PRINTF = %5.10d \n",-20 );
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %09.0d\n", -7);
rot = printf("   PRINTF = %09.0d \n",-7);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %09.d\n", -7);
rot = printf("   PRINTF = %09.d \n",-7);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %1.d--\n", 0);
rot = printf("   PRINTF = %1.d-- \n",0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %2.d--\n", 0);
rot = printf("   PRINTF = %2.d-- \n",0);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %0*.*d--\n",2,-2,8);
rot = printf("   PRINTF = %0*.*d-- \n",2,-2,8);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %0*.*d--\n",12,-2,-8);
rot = printf("   PRINTF = %0*.*d-- \n",12,-2,-8);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %0*.*d--\n",12,5,-899999);
rot = printf("   PRINTF = %0*.*d-- \n",12,5,-899999);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %0.d--\n",-12);
rot = printf("   PRINTF = %0.d-- \n",-12);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %08d--\n",-12);
rot = printf("   PRINTF = %08d-- \n",-12);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %0.*d--\n",-2,-12);
rot = printf("   PRINTF = %0.*d-- \n",-2,-12);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %01.*d--\n",-2,-12);
rot = printf("   PRINTF = %01.*d-- \n",-2,-12);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);

ret = ft_printf("\nFT_PRINTF = %05.*d--\n",-2,-12);
rot = printf("   PRINTF = %05.*d-- \n",-2,-12);
printf("valeur de retour %d\n",ret);
printf("valeur de retour %d\n",rot);
*/


return (0);
}
