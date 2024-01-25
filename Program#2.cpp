

#include<iostream>
using namespace std;
float addition(float x, float y); 
float subtraction(float x, float y); 
float multiplication(float x, float y); 
float division(float x, float y);
float num1;
float num2;
float answer;
char operation;
int main() {
 cout << "Enter a number, an operation, and a number : ";
 cin >> num1 >> operation >> num2;
 
 if (operation == '+') {
 answer = addition(num1, num2);
 }
 else if (operation == '-') {
 answer = subtraction(num1, num2);
 }
 else if (operation == '/') {
 answer = division(num1, num2);
 }
 else if (operation == '*') {
 answer = multiplication(num1, num2);
 }
 else {
 cout << "invalid input";
 }
 cout << num1 << " " << operation << " " << num2 <<" "<< "=" <<" "<< answer << endl;
}
float addition(float x, float y)
{
 return x+y;
}
float subtraction(float x, float y)
{
 return x-y;
}
float multiplication(float x, float y)
{
 return x*y;
}
float division(float x, float y)
{
 return x/y;
}