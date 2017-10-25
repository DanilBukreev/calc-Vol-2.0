#include <iostream>
using namespace std;
int ADD(int a, int b) { return a + b; }
int MUL(int a, int b) { return a * b; }
int SUB(int a, int b) { return a - b; }
int DIV(int a, int b) { return a / b; }
int main() {
  char s;
  do {
    int lval = 0;
    int rval;
    char op;
    int res;
    cin >> lval >> op >> rval;
    switch (op) {
      case '+':
        cout << "result= " << ADD(lval, rval) << endl;
        break;
      case '-':
        cout << "result= " << SUB(lval, rval) << endl;
        break;
      case '*':
        cout << "result= " << MUL(lval, rval) << endl;
        break;
      case '/':
        if (rval != 0)
          cout << "result= " << DIV(lval, rval) << endl;
        else
          cerr << "you can't divide  by zero " << endl;
        break;
      default:
        cout << "error" << endl;
    }
    cout << "continue ? " << endl;
    cin >> s;
  } while (s == 'y');
  return 0;
}
