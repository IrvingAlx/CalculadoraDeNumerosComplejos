#include "defTipos.h"

/**
* @file: ComplexNumberCalculator
* @brief: 
* @authors: Irving Alejandro Vega Lagunas
* @date: 12/08/2021
* @param: 
* @return: 
*/

extern void menu(void)
{
	int opcion;
	
		printf("\n\n\n\t\t\tCalculadora de numeros comlejos Juan\n");
		printf("\n\tIngrese su operacion de numeros comlejos de la forma:\n");
		printf("\n\t\treal1 imaginario1 [[+-/*]] real2 imaginario2");
		printf("\n\t\tEjemplo: [1 +2 / 4 -2]\n");
		printf("\n\tDespues de cada dato presionar espacio, no incluya la i:\n\t");

return ;
}

/**
* @file: ComplexNumberCalculator
* @brief: 
* @authors: Irving Alejandro Vega Lagunas
* @date: 12/08/2021
* @param: 
* @return: 
*/

extern void complexNumberAdd(ComplexNumber n1, ComplexNumber n2)
{
	float realNumberResult, imaginaryNumberResult;

	realNumberResult=n1.real+n2.real;
	imaginaryNumberResult=n1.imag+n2.imag;

		printf("\n%.2f %+.2fi\n",realNumberResult,imaginaryNumberResult);

	return ;
}

/**
* @file: ComplexNumberCalculator
* @brief: 
* @authors: Irving Alejandro Vega Lagunas
* @date: 12/08/2021
* @param: 
* @return: 
*/

extern void complexNumberSub(ComplexNumber n1, ComplexNumber n2)
{
	float realNumberResult, imaginaryNumberResult;

	realNumberResult=n1.real-n2.real;
	imaginaryNumberResult=n1.imag-n2.imag;

		printf("\n%.2f %+.2fi\n",realNumberResult,imaginaryNumberResult);

	return ;
}

/**
* @file: ComplexNumberCalculator
* @brief: 
* @authors: Irving Alejandro Vega Lagunas
* @date: 12/08/2021
* @param: 
* @return: 
*/

extern void complexNumberDiv(ComplexNumber n1, ComplexNumber n2)
{
	float realNumberResult, imaginaryNumberResult, denominatorComplexNumber;

	realNumberResult = ((n1.real * n2.real) + (n1.imag * n2.imag));
	imaginaryNumberResult = ((n1.imag * n2.real) - (n1.real * n2.imag));
	denominatorComplexNumber = (pow(n2.real, 2)+pow(n2.imag, 2));

		printf("\n%.2f \t\t\t%+.2fi \n──────── \t\t──────── \n%.2f \t\t\t%.2f\n",realNumberResult, imaginaryNumberResult,  denominatorComplexNumber, denominatorComplexNumber);
	
	return ;
}

/**
* @file: ComplexNumberCalculator
* @brief: 
* @authors: Irving Alejandro Vega Lagunas
* @date: 12/08/2021
* @param: 
* @return: 
*/

extern void complexNumberMult(ComplexNumber n1, ComplexNumber n2)
{
	float realNumberResult, imaginaryNumberResult;

	realNumberResult = ((n1.real*n2.real) - (n1.imag * n2.imag));
	imaginaryNumberResult = ((n1.real*n2.imag) + (n1.imag * n2.real));

		printf("\n%.2f %+.2fi\n",realNumberResult,imaginaryNumberResult);

	return ;
}
