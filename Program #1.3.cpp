
#include<iostream>
using namespace std;
int getValidValue();
int main() {
 double X[10];
 int S;
 S = getValidValue();
 X[0] = S / 2.0;
 cout << "S = " << S << endl;
 
 for (int i = 1; i < 10; i++) {
 X[i] = (X[i-1] + S / X[i-1]) / 2.0;
 }
 for (int i = 0; i < 10; i++) {
 cout << "X[" << i << "] = " << X[i] << endl;
 }
}
int getValidValue() {
 int S;
 for (int i = 0; i < 10; i++) {
 cout << "Enter an integer between 20 and 400: " << endl;
 cin >> S;
 if (S < 0)
 {
 cout << "This program does not deal in complex numbers." << endl;
 }
 else if (S < 20 || S > 400)
 {
 cout << "Number out of range [20-400]." << endl;
 }
 else if (S >= 20 && S <= 400) {
 return S;
 }
 else {
 return 0;
 }
 }
}