Generala-1
PRIMER VERSION DE LA GENERALA USANDO C/C++.

En esta ocasión les presento mi primer proyecto codificado en C, y con algunos elementos minimos de C++. Se trata de una versión "libre" del juego de la Generala. ¿Por qué libre?...Debido a que no se implementa exactamente el juego tal y como es en la realidad, sino que es una variante del juego original. Se adjuntarán los requerimientos del proyecto, en los cuales me base para armar el juego.

CONSIDERACIONES:

En esta primer versión, se nota mucho mi inexperiencia en la realización de proyectos (es mi primer proyecto) y tambien en la codificación en general, cosas que se mejorarán para la segunda versión de este juego, en la que además usaré archivos para guardar puntajes,así como también me introduciré un poco en la programación orientada a objetos que brinda C++,entre otras novedades.

REQUERIMIENTOS DE CONSTRUCCION DEL PROYECTO:

GENERALA

Se deberá realizar una variante al juego de dados denominado Generala. El programa debe contar con un menú principal que permita iniciar un juego nuevo para un jugador y guardar la puntuación más alta.

JUEGO NUEVO PARA UN JUGADOR

Esta opción permite a un solo jugador realizar una partida completa de Generala. Antes de comenzar a jugar deberá solicitar el nombre del jugador. Una vez finalizada la partida, deberá mostrar el nombre del jugador y la cantidad de turnos o rondas que utilizó para obtener el puntaje.

NOTA: Cabe aclarar que el sistema no tendrá la capacidad de guardar la puntuación en un archivo. Por lo que al salir del juego, se borrarán todos los datos de puntuación.

REGLAMENTO DEL JUEGO

El objetivo del juego es sacar Generala Servida, u obtener la puntuación más alta de un conjunto de rondas establecidas.

Una ronda puede estar compuesta por hasta tres lanzamientos. Un lanzamiento consiste en tirar los cinco dados y evaluar sus valores para determinar el puntaje. En caso que el jugador lo considere puede volver a tirar todos a algunos de los dados en dos oportunidades más. El sistema preguntará si quiere volver a lanzar, y si la respuesta es sí, preguntará cuáles son los dados que quiere elegir para volver a tirar.

El puntaje de un lanzamiento está determinado por una serie de reglas que figuran en la sección Combinaciones ganadoras.

El puntaje obtenido se suma al puntaje anterior del jugador. Si un jugador saca Generala en el primer tiro gana la partida.

COMBINACIONES


---------------------------------------------------
1 ó más dados con valor 1

JUEGO DE 1

Puntos=Suma de la cantidad de dados con el valor 1
---------------------------------------------------


---------------------------------------------------
1 ó más dados con valor 2

JUEGO DE 2

Puntos=2*suma cantidad de dados con valor 2
---------------------------------------------------


---------------------------------------------------
1 ó más dados con valor 3

JUEGO DE 3

Puntos=3*suma cantidad de dados con valor 3
---------------------------------------------------


---------------------------------------------------
1 ó más dados con valor 4

JUEGO DE 4

Puntos=4*suma cantidad de dados con valor 4
---------------------------------------------------


---------------------------------------------------
1 ó más dados con valor 5

JUEGO DE 5

Puntos=5*suma cantidad de dados con valor 5
---------------------------------------------------


---------------------------------------------------
1 ó más dados con valor 6

JUEGO DE 6

Puntos=6*suma cantidad de dados con valor 6
---------------------------------------------------


---------------------------------------------------
5 dados en orden creciente (1, 2, 3, 4, 5) ó (2,3,4,5,6)

ESCALERA

Puntos=25
---------------------------------------------------


---------------------------------------------------
3 dados iguales, más otros 2 iguales
Ejemplo: (3,3,3,2,2), (1,1,4,4,4),etc 

FULL

Puntos=30
---------------------------------------------------


---------------------------------------------------
4 dados iguales
Ejemplo: (3,3,3,3,2), (1,4,4,4,4),etc. 

POKER

Puntos=40
---------------------------------------------------


---------------------------------------------------
5 dados con el mismo valor
Ejemplos:(1,1,1,1,1) , (6,6,6,6,6), etc

GENERALA

Puntos=50 Si es en un tiro sólo gana el partido
---------------------------------------------------

De obtener más de una combinación en el mismo lanzamiento, siempre deberá sumar el puntaje de mayor valor.



INTERFAZ

Durante el turno de un jugador Se deberá mostrar el nombre del jugador, el número de ronda, el puntaje total que lleva acumulado. Luego se deberá mostrar dentro de la ronda la cantidad de lanzamientos.

Más abajo, se deberán listar los dados que conforman el lanzamiento, luego preguntar si tira de nuevo o no. Si la respuesta es sí se debe indicar primero la cantidad de dados que repetirá, y por último y de a uno por vez cuáles serían los datos que se vuelven a tirar.

FIN DEL JUEGO

El juego termina cuando el jugador saca Generala Servida, o cuando se termina la cantidad de rondas establecidas (10 por defecto).

GANADOR

Cuando un jugador gana la partida, se deberá mostrar una pantalla que indique el nombre y apellido del ganador y la cantidad de rondas que llevó ganar la partida. El ganador de la partida es aquel jugador que haya obtenido Generala Servida, o el que más puntos haya conseguido.
