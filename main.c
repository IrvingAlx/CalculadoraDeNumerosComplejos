/*
* @file: ComplexNumberCalculator
* @brief: Calculadora de numeros complejos
* @authors: Irving Alejandro Vega Laguans 
* @date: 12/08/2021
*/

#include "defTipos.h"

void menu (void);
void complexNumberAdd(ComplexNumber n1, ComplexNumber n2);
void complexNumberSub(ComplexNumber n1, ComplexNumber n2);
void complexNumberDiv(ComplexNumber n1, ComplexNumber n2);
void complexNumberMult(ComplexNumber n1, ComplexNumber n2);

int main(void)
{
	char ope;
	int x = 1;
	ComplexNumber n1, n2;

	do
	{
	system("clear");
	menu();
  scanf(" %f %f %c %f %f", &n1.real, &n1.imag, &ope, &n2.real, &n2.imag);

			switch(ope)
		{
			case '+':
					printf("\n(%.2f %+.2fi) %c (%.2f %+.2fi)\n", n1.real, n1.imag, ope, n2.real, n2.imag);
					complexNumberAdd(n1,n2);

			break;		
			case '-':
					printf("\n(%.2f %+.2fi) %c (%.2f %+.2fi)\n", n1.real, n1.imag, ope, n2.real, n2.imag);
					complexNumberSub(n1,n2);
			break;		
			case '/':
					printf("\n(%.2f %+.2fi) %c (%.2f %+.2fi)\n", n1.real, n1.imag, ope, n2.real, n2.imag);
					complexNumberDiv(n1,n2);
			break;
			case '*':
					printf("\n(%.2f %+.2fi) %c (%.2f %+.2fi)\n", n1.real, n1.imag, ope, n2.real, n2.imag);
					complexNumberMult(n1,n2);
			break;
			default:
				printf("\nEl programa fallo exitosamente de forma inesperada, favor de contactar al administrador Error 0x18765498976");
			break;
		}

	printf("\n\t¿Desea hacer otra operacion? (1)Si (0)No\n\t");
		scanf(" %d", &x);
	}while(x == 1);
	

  return 0;
}

