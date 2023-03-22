#include<iostream>
using  namespace std;

int main(){
     int n;
     cout<<"Enter the number: ";
     cin>>n;
     int i;

  for (int i = 2; i <= n  ; i++)
  {
    if (n%i==0)
    {
        cout<<"Not prime ";
        break;
    }
    
  }
  if (i==n)
  
   
    cout<<"Prime"<<endl;
      return 0;

}   
