#include <iostream>
using namespace std;
#define PI 3.141
int main()
{
	float R, A, P;
	cout << "Enter Radius of circle: ";
	cin>> R;
	A = PI*R*R;
	P = 2*PI*R;
	cout << "\nArea is: " << A;
	cout << "\nPerimeter is: " << P;
	return 0;
}