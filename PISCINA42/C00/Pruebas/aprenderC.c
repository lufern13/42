/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aprenderC.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:28:26 by lucifern          #+#    #+#             */
/*   Updated: 2022/02/12 13:32:55 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("hola\n");
	return 0;
	/*
	int		a;
	char	c;
	float	f;
	double	d;

	a = 4;
	c = 'k';
	f = 12.3754564564151351435413541354354365515341352;
	d = 12.4554543172357324275168327153738517381237815;
	printf("INT %d\n", a);
	printf("CHAR %lu %d %c\n", sizeof(c), c, c);
	printf("INT %lu\n", sizeof(a));
	printf("FLOAT %lu %f\n", sizeof(f), f);
	printf("DOUBLEdhfljsdlkgjñaljalsñsk %lu %f\n", sizeof(d), d);*/
}

/* VARIABLES:
 - Debo definir el tipo de variable antes de darle un valor o usarla!
- Debo definir el tipo de var - Debo definir el tipo de var - Debo definir el t
 - a = 42; a lo de la izquierda le asigno el valor de la derecha

 TIPOS DE VARIABLES:
 Para nombrar variables debo empezar por min, may o _, después puedo poner lo 
 que quiera
 - int: integral %d
    - int a; int _; int A; i
	- ocupa 4bytes (numero, valor, signo, )
 - float: reales 
	- ocupa 4bytes
 - double: 
	- ocupa 8bytes

 - char: carácter %c
	- TABLA ASCII

 CÓDIGO BINARIO: 
 - sólo 8 bits ==> número máximo 127 ¡¡¡¡el primer bit es el signo 0=+!!!!!
 - números negativos: comienzan por 1 ==> número mínimo -128
 - 1 1 1 1 1 1 1 1 = -1

 COMANDOS:
 - printf: 
	- "texto"
	- "%lu" sizeof (devuelve el tamaño en bytes)



#include <unistd.h>

int a;

a = 2;
printf("hola que tal %d %d", a, a);

int suma(int a, int b)
{
	
}

*/
