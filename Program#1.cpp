

#include<iostream>
using namespace std;
int main() {
 int s;
 cout << "Enter an integer,s:";
 cin >> s;
 if (s < 0)
 {
 cout << "This program does not deal in complex numbers.";
 }
 else if (s < 20 || s > 400)
 {
 cout << "Number out of ranger [20-400].";
 }
 else if (s >= 20 && s >= 400)
 {
 cout << "s=" << s << endl;
 double x0 = 0.5 * s;
 double x1 = 0.5 * (x0 + (s / x0));
 double x2 = 0.5 * (x1 + (s / x1));
 double x3 = 0.5 * (x2 + (s / x2));
 double x4 = 0.5 * (x3 + (s / x3));
 double x5 = 0.5 * (x4 + (s / x4));
 double x6 = 0.5 * (x5 + (s / x5));
 double x7 = 0.5 * (x6 + (s / x6));
 double x8 = 0.5 * (x7 + (s / x7));
 double x9 = 0.5 * (x8 + (s / x8));
 cout << s << endl;
 cout << "x0=" << x0 << endl;
 cout << "x1=" << x1 << endl;
 cout << "x2=" << x2 << endl;
 cout << "x3=" << x3 << endl;
 cout << "x4=" << x4 << endl;
 cout << "x5=" << x5 << endl;
 cout << "x6=" << x6 << endl;
 cout << "x7=" << x7 << endl;
 cout << "x8=" << x8 << endl;
 cout << "x9=" << x9 << endl;
 }