#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int num, r, sum, t, mm, start, end;
cout << " Input starting number of range: ";
cin >> start;
cout << " Input ending number of range: ";
cin >> end;
cout << " Armstrong numbers in given range are: " << endl;
for (num = start; num <= end; num++) 
{
t = num;
sum = 0;
while (t != 0) 
{
r = t % 10;
mm = pow(r, 3);
sum = sum + mm;
t = t / 10;
}
if (sum == num)
cout << num << " ";
}
cout << endl;
}