#include <iostream>  
using namespace std;  
int main() {  
  int num1=0,num2=1,num3,i,limit;    
 cout<<"Enter the limit: ";    
 cin>>limit;    
 cout<<num1<<" "<<num2<<" ";  
 for(i=2;i<limit;++i)    
 {    
 num3=num1+num2;    
 cout<<num3<<" ";    
 num1=num2;    
 num2=num3;    
 }    
 return 0;  
 }  