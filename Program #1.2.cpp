
#include <iostream>
using namespace std;
int getValidValue();
int main() {
 int S;
 S = getValidValue();
 double X = S / 2.0;
 
 for (int i = 0; i < 10; i++) {
 
 X = (X + S / X) / 2;
 }
 cout << "S = " << S << "\nX = " << X << endl;
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
 cout << "Number out of ranger [20-400]." << endl;
 }
 else if (S >= 20 && S <= 400) {
 return S;
 }
 else {
 return 0;
 }
 }
}