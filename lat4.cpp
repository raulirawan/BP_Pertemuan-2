#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int nilai;
	cout << "Input Nilai Mata kuliah	= ";
	cin >> nilai;
	
	if(nilai>=60){
		cout << "LULUS\n";
	}
	else {
		cout << "TIDAK LULUS\n\n";
	}
	
	cout << "Program Selesai";
	
	getch();
}
