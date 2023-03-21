/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:30 by lucifern          #+#    #+#             */
/*   Updated: 2023/03/21 20:08:09 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>

void	main(void)
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
{
	int		pid;

	pid = getpid();
	ft_printf(pid);
}

void	client(int pid, char *message)
/*
	El cliente debe comunicar la string pasada como parámetro al servidor.
	Parámetros: PID del servidor y string a enviar.
*/
	//establecer conexion con pid
	//mensaje a binario
	//ponerse a escuchar
	//enviar mensaje
	//recibir ok
	//desbinariar ok
	//imprimir ok
	//fin
{
	int		pid;
	char	*message;

	pid = argv[1];
	if (pid < 1)
	message = argv[2];
}

//http://www.lsi.us.es/cursos/seminario-1.html#11