// menucontinuacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <string>
#include <iostream>
using namespace std;
void pausa();

int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "Calculadora" << endl;
		cout << "-----------" << endl << endl;
		cout << "\t1 .- Sumar" << endl;
		cout << "\t2 .- Restar" << endl;
		cout << "\t3 .- Multiplicar" << endl;
		cout << "\t4 .- Dividir" << endl;
		cout << "\t5 .- Salir" << endl;
		cout << "Elige una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << "Has elejido Sumar. \n";
			pausa();
			break;
		case '2':
			system("cls");
			cout << "Has elejido Restar. \n";
			pausa();
			break;
		case '3':
			system("cls");
			cout << "Has elejido Multiplicar. \n";
			pausa();
			break;
		case '4':
			system("cls");
			cout << "Has elejido Dividir. \n";
			pausa();
			break;

		case '5':
			bandera = true;
			// exit(1);
			break;
		default:
			system("cls");
			cout << "Opcion no valida. \a\n";
			pausa();
			break;

		}

	} while (bandera != true);
	return 0;

}
//Desarrollamos la función
void pausa()
{
	cout << "Pulsa una tecla para continuar... ";
	getwchar();
	getwchar();
}
