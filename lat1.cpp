#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int jari;
	float luas, panjang, lebar;
	cout <<"Input Panjang Persegi Panjang\t = ";
	cin >> panjang;
	cout <<"Input Lebar Persegi Panjang\t = ";
	cin >> lebar;
	
	luas = panjang * lebar;

	
	cout <<"\nLuas Persegi Panjang \t\t = "<< luas;

	
	getch();
}
