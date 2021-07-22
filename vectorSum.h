/*
int MaxSum: Es un colector, es igual a la suma de todos los vectores actuales,
	es decir toma una posición z y suma a partir de ahí.
int x: guarda la posicion final de cada vector.   
*/
#include <vector>
int x=0;
/*Suma los elementos.*/
int arraySum(const std::vector<int> &v)
{
	int MaxSum = 0;
	for(int z=x; z<v.size(); z++ && x++)
	{
		MaxSum += v.at(z);
	}
	return MaxSum;
}
/*Compara los elementos y devuelve el mayor.*/
int arrayCom(const std::vector<int> &v)
{
	int MaxArray = v.at(0);
	for(int i=0; i < v.size(); i++)
	{	
		if(MaxArray < v.at(i))
		{
			MaxArray = v.at(i);
		}
	}
	/*Resultado final*/
	return MaxArray;
}
