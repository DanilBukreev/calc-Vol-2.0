#include<iostream>
#include<string>
#include<locale>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()

{
	setlocale(LC_ALL, "Russian");
	 char s;
	 do
	 {
		 cout << "calc" << endl;
		 int a, b, r, r1, r2;
		 char operation;
		 cout << "Выберите операцию [+, -, *, /, %, ^, !, &, |, <, >]:" << endl;
		 cin >> operation;
		 cout << " Введите первое число: " << endl;
		 cin >> a;
		 if ((operation != '!') &&
			 (operation != '<') &&
			 (operation != '>')){
			 cout << "Ведите второе число: " << endl;
			 cin >> b;	 
		 }
		switch (operation) {
		case '+':
			cout << "Результат: " << a + b << endl;
			break;
		case '-':
			cout <<  "Результат: "<< a - b << endl;
			break;
		case '*':
			cout << "Результат: " << a * b << endl;
			break;
		case '/':		
				if (b != 0)
					cout << "Результат:" << (double)a / (double)b << endl;
				else
					cerr << "на 0 делить нельзя " << endl;
			break;
		case '%':
			cout << "Результат:" << a % b << endl;
			break;
		case '^':
			cout << "Результат: " << pow(a, b) << endl;
			break;
		case '<':
			cout << "Результат: " << (a << 1) << endl;
			break;	
		case '>':
			cout << "Результат: " << (a >> 1) << endl;
			break;
		case '!':
			cout << " Результат: " << !a << endl;
			break;
		case '|':
			cout << "Результат: "<< (a | b) << endl;
			break;
		case '&':
			cout << "Результат:" << ( a & b) << endl;
			break;
		default:
			cout << "Ошибка" << endl;
		}
		cout << "Продложить работу? (y/n)" << endl;
		cin >> s;
	} while (s == 'y');
	return 0;
}

