
#include<iostream>
#include<conio.h>
#include"windows.h"
using namespace std;

unsigned int timer = 0;
int main() {
	setlocale(LC_ALL, "ru");
	int n;

	char sym;
	while (true) {
		if(_kbhit()){
			sym=_getch();
			cout <<"Нажато: "<< sym<<" его код= "<<(int)sym << endl;
			switch (sym) {
			case 'a':case'A':system("cls"); cout << "Шаг влево"; break;
			case'd':case'D':system("cls"); cout << "Шаг вправо"; break;
		}
		
		
		
		}
		
		Sleep(100);
		timer += 100;
		if (timer >= 500) {
			cout << "|     :    |\n";
			cout << "|     :    |\n";
			cout << "|     :    |\n";



			timer = 0;
		}
		
	
	}

	return 0;
}