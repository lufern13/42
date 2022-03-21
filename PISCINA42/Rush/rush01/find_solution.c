/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 08:01:12 by pedromar          #+#    #+#             */
/*   Updated: 2022/02/20 08:01:19 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
	// Inicio: Buscar permutacion, primera fila.
	// Si permutacion cumple condiciones contorno => Poner fila.
	// Si cumple condiciones up-down => Buscar solucion para siguiente fila.
	// Te quedas sin posibilidades, vuelta atras. 
	// Encuentas permutacion valida para ultima fila =>Solución=>print cuadrado
	// Te quedas sin posibilidades en primera fila => No hay solución => Error.

void	find_solution(int **input, int **state, int size)
{
}
