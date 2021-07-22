#include <iostream>
#include <vector>
#include "vectorSum.h"

int main()
{
	std::vector<int> e, f;
	bool choix=true;

	while(choix == true)
	{
		int i=1;
		/*Obtiene los elementos*/
		while(i != 0)
		{
			std::cin >> i;
			e.push_back(i);
		}
		std::cout << "¿Ingresar nueva submatriz? [0/1]: ";
		std::cin >> choix;
		/*Bucle while*/
		choix = choix != 0 ? true: false;
		/*Se empuja suma de vector en f, para despues compararlo*/
		f.push_back(arraySum(e));
	}
	/*Se compara el vector*/
	std::cout << "La máxima suma de la sub-matriz/ces es " 
	<< arrayCom(f) << std::endl;

	return EXIT_SUCCESS;
}