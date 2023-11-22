
#include <iostream>

using namespace std;

int main() {
  char operation;
  double num1, num2;

  cout << "Enter an operation (+, -, *, /): ";
  cin >> operation;

  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  double result;

  switch (operation) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
    default:
      cout << "Invalid operation" << endl;
  }

  cout << "The result is: " << result << endl;

  return 0;
}
