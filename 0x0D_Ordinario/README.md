Ejercicio 1. Buscaminas
Descarga el código alojado aquí y termina de escribir el código del juego.

El tablero de juego será una matriz de tipo char

Cada casilla puede visualizarse de una de las siguientes formas:
Espacio sin descubrir
Espacio descubierto (aquí se dibuja la cantidad de minas que hay cerca)
Mina

Para que sea fácil para el usuario, la columna se pide como número, y la fila como letra. Luego, esa letra se convierte en un número en donde la A es un 0, la B es un 1, etcétera.

Al dibujar el escenario, se ocultan las minas al usuario. Es decir, no se dibuja el escenario original, sino uno dependiendo del estado del juego. Si se ha ganado o perdido, se muestran las minas.

El objetivo es terminar el código de manera que sea jugable para el usuario.

Reglas de buscaminas

El juego consiste en despejar todas las casillas de una pantalla que no oculten una mina.

Algunas casillas tienen un número, el cual indica la cantidad de minas que hay en las casillas circundantes. Así, si una casilla tiene el número 3, significa que de las ocho casillas que hay alrededor (si no es en una esquina o borde) hay 3 con minas y 5 sin minas. 
Si se descubre una casilla con el número 0, este indica que ninguna de las casillas vecinas tiene mina y éstas se descubren automáticamente.

Si se descubre una casilla con una mina se pierde la partida.
