#include <iostream> // Lab 2 Part 2 Quadratic Formula by Michael Rijlaarsdam
#include <math.h>
using namespace std;

int main(void) { // running file
	
	double a = 0, b=0, c=0,nb = 0;
	double r1 =0, r2 =0;

	cout << "Ax^2 + Bx + C = 0\n \n";
	cout << "Enter the Co-Efficients A, B, C \n";
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;	
	nb = b*-1;
	r1 = ((nb + sqrt((b*b) - (4*a*c)))/(2*a));
	r2 = ((nb - sqrt((b*b) - (4*a*c)))/(2*a));
	cout << "\nThe roots are "<< r1 << " and " << r2;
	cout << " \n ";
	r1=r2=0;

	return 0;
}
