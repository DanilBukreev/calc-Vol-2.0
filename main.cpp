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
		 int a, b, r, r1;
		 char operation;
		 const long long MOD = 1e9 + 7;
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
			r = a + b;
			break;
		case '-':
			r = a - b;
			break;
		case '*':
			r = a * b;
			break;
		case '/':		
				if (b != 0)
					cout << "Результат:" << a / b << endl;
				else
					cerr << "на 0 делить нельзя " << endl;
			break;
		case '%':
			r = a % b;
			break;
		case '^':
			r = pow(a, b);
			break;
		case '<':
			r = a << 1;
			break;	
		case '>':
			r = a > 1;
			break;
		case '!':
			r = !a;
			break;
		case '|':
			r =  a | b;
			break;
		case '&':
			r =  a & b;
			break;
		default:
			cout << "Ошибка" << endl;
		}
		cout << "Результат:" << r <<  endl;
		cout << "Продложить работу? (y/n)" << endl;
		cin >> s;
	} while (s == 'y');
	system("pause");
	return 0;
}
