Se formara un reloj de arena girado.

*   *
** **
*****
** **
*   *

Inicio del programa

En la primera linea se llama a la libreria de entrada y salida de C.
Utilizamos la funcion principal int main.
Luego se declaran las variables i(para el eje x) e j(para el eje y) .

El primer for es para formar el eje y desde (2) hasta (-2) disminuyendo de 1 en 1.
   El segundo for es para formar el eje x desde (-2) hasta (2) aumentando de 1 en 1.
   
         Luego viene la condicion para los asteriscos.
         si -abs(i) <= j && j>= abs(i)
         sino se cumple esta condicion
         se imprimiran los espacios en blanco.
            
   Imprimimos un salto de linea al terminar el bucle del "j" (filas).
   
El valor de retorno de la funcion main.

Fin del programa.

Dando los valores de j para cada i, se tiene:

*   *    (Se cumple la condicion para (2,-2), (2,2))
** **    (Se cumple la condicion para (1,-2), (1,-1), (1,1), (1,2))
*****    (Se cumple la condicion para (0,-2), (0,-1), (0,0), (0,1), (0,2))
** **    (Se cumple la condicion para (-1,-2), (-1,-1), (-1,1), (-1,2))
*   *    (Se cumple la condicion para (-2,-2), (-2,2))

Es importante visualizar como un plano.
