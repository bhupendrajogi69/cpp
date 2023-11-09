#include <iostream>
using namespace std;
int main() 
{
    int num1, num2, sum, diff, prod, quo;
    cout<<"\n Enter the first number = ";
    cin>>num1,
    cout<<" Enter the second number = ";
    cin>>num2;
    sum = num1 + num2; //calculating the sum of num1 and num2
    diff = num1 - num2; //calculating the difference of num1 and num2
    prod = num1 * num2; //calculating the product of num1 and num2
    quo = num1 / num2; ////calculating the quotient of num1 and num2
    cout<<"\n The first number ="<<num1;
    cout<<"\n The second number ="<<num2;
    cout<<"\n Sum ="<<sum;
    cout<<"\n Difference ="<<diff;
    cout<<"\n Product ="<<prod;
    cout<<"\n Quotient ="<<quo;
    return 0;
}