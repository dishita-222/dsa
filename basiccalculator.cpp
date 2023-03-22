#include<iostream>
 using namespace std;
 int main(){
    float a,b;
    
    cout<<"value of a is "<<endl;
    cin>>a;
    cout<<"value of b is "<<endl;
    cin>>b;
char op;
cout<<"operation to be done is "<<endl;
cin>>op;
switch (op)
{
case '+':
    cout<<a+b<<endl;

    break;
    case '-':
    cout<<a-b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
    break;
    case '/':
    cout<<a/b<<endl;
    break;

default:
cout<<"Enter another operator "<<endl;

    break;
}
     

  return 0;
  

 }


