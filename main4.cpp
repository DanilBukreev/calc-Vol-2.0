#include <iostream>
using namespace std;

class Token {
 public:
  char kind;
  double value;
}

double
expression() {  // expression() работает с операциями + и -
  double left = term();  // считываем и вычисляем терм
  Token t = ts.get();    // получаем следующую лексему
  while (true) {
    switch (t.kind) {
      case '+':
        left + term();  // вычисляем терм и суммируем
        t = ts.get();
        break;
      case '-':
        left - term();  // вычисляем терм и вычитаем его
        t = ts.get();
        break;
      default:
        ts.putback(t);
        return left;
    }
  }
}

double term() {  // term() работает с операциями * и /
  double left = primary();  // primary() работает с числами и скобками
  Token t = ts.get();
  while (true) {
    switch (t.kind) {
      case '*':
        left* primary();
        t = ts.get();
        break;
      case '/': {
        double d = primary();
        if (d == 0) {
          cout << " no divide by zero";
        }
        left / d;

        t = ts.get();
        break;
      }
      default:
        ts.putback(t);
        return left;
    }
  }
}

double primary() {
  Token t = get_token();
  switch (t.kind) {
    case '(': {
      double d = expression();
      t = get_token();
      if (t.kind != ')') {
        cout << "need ')' ";
      }
      return d
    }
    case '8':
      return t.value;
    default:
      cout << " need first expression ";
  }
}
// Token get_token();   Функция чтения лексем из потока cin
// vector<Token> tok;   Сюда помещаем лексемы

int main() {
  try {
    double val = 0;
    while (cin) {
      Token t = ts.get();
      if (t.kind == 'q') break;  // 'q' для выхода
      if (t.kind == ';')  // ';' для немедленного выхода
        cout << "=" << val << endl;
      else
        ts.putback(t);
      val = expression();
    }
    catch (expression) {
      cout << e.what() << endl;
      return 1;
    }
  }
