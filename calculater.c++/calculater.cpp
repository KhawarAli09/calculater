#include<iostream>
using namespace std;
int main() {

	float num1, num2, result;
	char opr;

	cout << "Enter num1 :";
	cin >> num1;

	cout << "Enter num2 :" ;
	cin >> num2;

	cout << "Enter operator (+,-,*,/)" << endl;
	cin >> opr;


	result = (opr == '+') ? num1 + num2 : (opr == '-') ? num1 - num2 : (opr == '*') ? num1 * num2 : (opr == '/') ? num1 / num2 : 0;

	cout << "result = " << result << endl;

}