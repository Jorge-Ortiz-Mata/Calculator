
// Jorge Ortiz Mata. 
// 444 576 3034.
// San Luis Potosí S.L.P. México.

// ----------- Calculator.--------------


#include <iostream>
#include <stdlib.h>
using namespace std;

float sumar (float num1, float num2)
{
	float suma;
	suma = (num1 + num2);
	return suma;
}

float restar (float num1, float num2)
{
	float resta;
	resta = (num1 - num2);
	return resta;
}

float multiplicar (float num1, float num2)
{
	float multiplicacion;
	multiplicacion = (num1 * num2);
	return multiplicacion;
}


float dividir (float num1, float num2)
{
	float division;
	division = (num1 / num2);
	return division;
}

int captura (int dato[], int total)
{
	cout << "Ingresaras un total de 5 datos." << endl;
	cout << endl;
	for (int i = 0; i < total; i++)
	{
		cout << " Ingresa el dato " << i << ": ";
		cin >> dato[i];
	}
	cout << endl;
	for (int i = 0; i < total; i++)
	{
		cout << "\tLos datos insertados fueron:";
		cout << "  Dato: "<< i << " es: " << dato[i] << endl;
	}
	
	cout << endl;	
}

float mayor (float num_1, float num_2)
{
	int max = 0;
	if (num_1<num_2)
	{
		max = num_2;
		cout << endl;
		cout << " El numero mayor es: " << max << endl;
		cout << endl;
	}
	else
	{
		if (num_1>num_2)
		{
			max = num_1;
			cout << endl;
			cout << " El numero mayor es: " << max << endl;
			cout << endl;
		}
		else
		{
			cout << endl;
			cout << "Ambos numeros son iguales" << endl;
			cout << endl;
		}
	}
}

float menor (float num_1, float num_2)
{
	int min = 0;
	if (num_1>num_2)
	{
		min = num_2;
		cout << endl;
		cout << "El numero menor es: " << min << endl;
		cout << endl;
	}
	else
	{
		if (num_1<num_2)
		{
			min = num_1;
			cout << endl;
			cout << "El numero menor es: " << min << endl;
			cout << endl;
		}
		else
		{
			cout << endl;
			cout << "Ambos numeros son iguales" << endl;
			cout << endl;
		}
	}
}

float promedio (float num_1, float num_2)
{
	float resultado;
	resultado = (num_1 + num_2)/2;
	return resultado;
}

int main ()

{
	int a;
	int total_1 = 5;
	int datos[total_1]; 
	float b, c;
	float min, max;
	cout << "\t Buen dia. Esta es una calculadora realizada mediante funciones." << endl;
	cout << endl << endl;
	
	do
	{
		cout << "\t Seleccione una opcion del menu: " << endl;
		cout << endl;
		cout << " 1. Operacion Suma." << endl;
		cout << " 2. Operacion Resta." << endl;
		cout << " 3. Operacion Mutliplicacion." << endl;
		cout << " 4. Operacion Division." << endl;
		cout << " 5. Captura de datos. " << endl;
		cout << " 6. Numero mayor de una serie de numeros. " << endl;
		cout << " 7. Numero menor de una serie de numeros." << endl;
		cout << " 8. Promedio de una serie de numeros." << endl;
		cout << " 9. Salir del menu. " << endl;
		cout << endl;
		cout << "    Opcion a elegir: ";
		cin >> a;
	
		if (a == 1)
		{
			cout << endl;
			cout << " Ha ingresado al menu de suma." << endl;
			cout << endl;	
			cout << " Ingrese el primer valor: ";
			cin >> b;
			cout << " Ingrese el segundo valor: ";
			cin >> c;
			sumar (b, c);
			cout << endl;
			cout << " El resultado es: " << sumar (b, c) << endl;
			cout << endl;
		}
		else
		{
			if (a == 2)
			{
				cout << endl;
				cout << " Ha ingresado al menu de resta" << endl;
				cout << endl;	
				cout << " Ingrese el primer valor: ";
				cin >> b;
				cout << " Ingrese el segundo valor: ";
				cin >> c;
				restar (b, c);
				cout << endl;
				cout << " El resultado es: " << restar (b, c) << endl;
				cout << endl;
			}
			else
			{
				if (a == 3)
				{
					cout << endl;
					cout << " Ha ingresado al menu de multiplicacion" << endl;
					cout << endl;	
					cout << " Ingrese el primer valor: ";
					cin >> b;
					cout << " Ingrese el segundo valor: ";
					cin >> c;
					multiplicar (b, c);
					cout << endl;
					cout << " El resultado es: " << multiplicar (b, c) << endl;
					cout << endl;
				}
				else
				{
					if (a == 4)
					{
						cout << endl;
						cout << " Ha ingresado al menu de dividir" << endl;
						cout << endl;	
						cout << " Ingrese el primer valor: ";
						cin >> b;
						cout << " Ingrese el segundo valor: ";
						cin >> c;
						dividir (b, c);
						cout << endl;
						cout << " El resultado es: " << dividir (b, c) << endl;
						cout << endl;
					}
					else
					{
						if (a == 5)
						{
							cout << endl;
							cout << "Ha ingresado al menu de captura de datos" << endl;
							captura (datos, total_1);	
						}
						else
						{
							if (a == 6)
							{
								cout << endl;
								cout << " Ha ingresado a la opcion numero mayor" << endl;
								cout << endl;	
								cout << " Ingrese el primer valor: ";
								cin >> b;
								cout << " Ingrese el segundo valor: ";
								cin >> c;
								mayor (b, c);
								cout << endl;
							}
							else
							{
								if (a== 7)
								{
									cout << endl;
									cout << " Ha ingresado a la opcion numero menor" << endl;
									cout << endl;	
									cout << " Ingrese el primer valor: ";
									cin >> b;
									cout << " Ingrese el segundo valor: ";
									cin >> c;
									menor (b, c);
									cout << endl;
								}
								else
								{
									if (a == 8)
									{
										cout << endl;
										cout << " Ha ingresado a la opcion promedio" << endl;
										cout << endl;
										cout << " Ingrese el primer valor: ";
										cin >> b;
										cout << " Ingrese el segundo valor: ";
										cin >> c;
										promedio (b, c);
										cout << "El promedio de ambos numeros es: " << promedio (b, c) << endl;
										cout << endl;
									}
									else
									{
										if (a == 9)
										{
											cout << endl;
											cout << " Has salido del menu. Hasta pronto" << endl;
											cout << endl;
											break;
										}
										else
										{
											cout << endl;
											cout << " Has introducido un valor erroneo" << endl;
											cout << " Por favor, intenta nuevamente. " << endl;
										}
									}
								}
							}
						}
					}
				
				}
			}
		}

	}while (a != 9);

	system ("PAUSE");
	return 0;
}
