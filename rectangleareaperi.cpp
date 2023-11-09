#include <iostream>
using namespace std;
int main()
{
	int W, L, A, P;
	cout << "\n\n Find the Area and Perimeter of a Rectangle: \n";
	cout << "---------------------------------------------------\n";
	cout << " Input length :";
	cin >> L;
	cout << "Input width :";
	cin >> W;
	A = L*W;
	P= 2*(L+W);
	cout << "The area is : " << A << endl;
	cout << "The perimeter is : " << P << endl;
	cout << endl;
	return 0;
}