#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, max;
	cout << "Program Mencari Bilangan Terbesar\n";
	cout << "Input Nilai 1 \t\t= ";
	cin >> a;
	cout << "Input Nilai 2 \t\t= ";
	cin >> b;
	
	if(a>b){
		max = a;
	}else{
		max = b;
	}
	cout << "Nilai Terbesar adalah	= " << max;
	
	
	getch();
	
}
