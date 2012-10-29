Definición de Algoritmo
=======================
Secuencia de pasos para resolver un problema.
entrada - proceso - salida

1. Legible
2. Finito
3. General

burbuja


t(n) = 13n^2-7n+2

t(n) = 6n+8

n=10 68
n=100 608
n=1000 6008



intersecto y veo en que n es más rapida cual...



sea f: N->[0;+inf)
0(f) = {g:N->[0;+inf)| 
exist c e R, exist nsub0 pert N / g(n) =< cf(n) ptod n >= nsub0 }



-----Eficientes----


O(1) constante asignaciones


O(logn) 
logaritmico 
alg. de busqueda binaria
O
(n) lineal 
busqueda lineal.

O(nlogn) 
casi lineal 
quicksort



---------------------------NO Eficientes----------
-----

TRATABLES--------


O(n²) 
cuadratico 
burbujas


O(n³) 
cubico 
producto de matrices (3 fors anidados)


O(n^r) polinomico


-----INTRATABLES--------

O(c^n) 

exponencial


O(n!) factorial

---------------------------------------------------


Teoremas


uno) 

f es de menor orden que g si O(f(n)) < O(g(n))



dos) 


Lim	f(n)    = inf
n->inf  g(n)

-> O(g(n)) C O(f(n))


Lim	f(n)'	= 0
n->inf  g(n)'

-> O(f(n)) C O(g(n))



por ejemplo
n² E O(n³) ?


Aplico L'Hopital


Lim	n²  =
n->inf  n³ 


Lim	2n	=
n->inf  3n²
	

Lim	2	= 0
n->inf  6n



