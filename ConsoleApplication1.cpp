// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int a, b;
	int otvet = 1;
	cout << "enter number: "; cin >> a;
	cout << "enter stepen: "; cin >> b;
	for (int i = 0; i < b; i++)
	{otvet = pow(a,b);}
	cout << otvet;

	return 0;
}