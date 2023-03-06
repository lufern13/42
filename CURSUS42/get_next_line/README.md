
GET_NEXT_LINE

Escribe una función que devuelva la línea leída de un file descriptor.

Llamar a tu función get_next_line de manera repetida te permitirá leer el contenido del archivo hacia el que apunta el file descriptor, línea a línea, hasta el final. Si no hay nada más que leer o si ha ocurrido un error, deberá devolver NULL.

Funciones autorizadas: read, malloc, free.
Nuevos conceptos: variables estáticas.

BONUS: 
	Desarrollar get_next_line() con una sola variable estática y que sea capaz de gestionar múltiples fd a la vez.

SCORE: 125/125
