/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:30 by lucifern          #+#    #+#             */
/*   Updated: 2023/03/25 19:58:23 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

/*
	El servidor debe lanzarse primero, tras lanzarse debe mostrar su PID.
	Una vez la string se haya recibido, el servidor debe mostrarla.
	Parámetros: string que mostrar.
*/
	//obtener pid
	//imprmirlo
	//while true
		//sleep
		//recibir señal
		//desbinariar mensaje??
		//imprimir mensaje
		//decir ok en binario
int	main(void)
{
	int	pid;

	pid = getpid();
	printf("%i", pid);
	return (0);
}

//http://www.lsi.us.es/cursos/seminario-1.html#11