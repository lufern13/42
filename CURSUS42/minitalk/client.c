/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucifern <lucifern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:27 by lucifern          #+#    #+#             */
/*   Updated: 2023/03/25 19:50:09 by lucifern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char *argv[])
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

	pid = (int)argv[1];
	if (pid < 1)
	message = argv[argc];
	return (0);
}
