# 4.-Sherlock-and-GCD

Sherlock está atascado mientras resuelve un problema: Dada una matriz A={a1,a2,...,an}, quiere saber si existe un subconjunto B de esta matriz que sigue estas declaraciones:

B es un subconjunto no vacío.
No existe un entero x(x>1) que divida todos los elementos de B.
No hay elementos de B que sean iguales a otro.
Formato de entrada

La primera línea de entrada contiene un número entero, T , que representa el número de casos de prueba. Luego siguen los casos de prueba T.
Cada caso de prueba consta de dos líneas. La primera línea contiene un número entero, , que representa el tamaño de la matriz A. En la segunda línea hay N enteros separados por espacios, a1,a2,...,an , que representan los elementos de la matriz A.

Restricciones
1≤T≤10
1≤N≤100
1≤a1≤10^5 para todo 1 ≤i≤N


Formato de salida

Escriba SÍ si existe dicho subconjunto; de lo contrario, escriba NO.

Entrada de muestra

3
3
1 2 3
2
2 4
3
5 5 5
Salida de muestra

SÍ
NO
NO
Explicación

En el primer caso de prueba, {1},{2},{3},{1,2},{1,3},{2,3} y {1,2,3} son todos los posibles no vacíos subconjuntos, de los cuales el primero y los últimos cuatro satisfacen la condición dada.

Para el segundo caso de prueba, todos los subconjuntos posibles son {2},{4},{2,4}. Para todos estos subconjuntos, x=2 divide cada elemento. Por lo tanto, no existe ningún subconjunto no vacío que satisfaga la condición dada.

Para el tercer caso de prueba, existen los siguientes subconjuntos: S1={5},S2={5,5} y S3={5,5,5}, . Debido a que el único elemento en el primer subconjunto es divisible por 5 y los otros dos subconjuntos tienen elementos que son iguales a otro, no hay subconjunto que satisfaga todas las condiciones.
