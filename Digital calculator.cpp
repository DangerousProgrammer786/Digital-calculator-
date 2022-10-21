#include<iostream>
using namespace std;
int main()
{
// Muhammad Hammad Ali section D 
    while(true)
    {
        int num1,num2;
        char x;
        cout<<"Enter the number first"<<endl;
        cin>>num1;
        cout<<"Enter the number second"<<endl;
        cin>>num2;
        cout<<"press + for addition"<<endl;
        cout<<"press - for subtraction"<<endl;
        cout<<"press * for multiplication"<<endl;
        cout<<"press / for division"<<endl;
        cout<<"press % for reminder"<<endl;
        cin>>x;
        if(x=='+')
            cout<<"The sum = "<<num1+num2<<endl;
        else if(x=='-')
            cout<<"The subtraction = "<<num1-num2<<endl;
        else if(x=='*')
            cout<<"The multiplication = "<<num1*num2<<endl;
        else if(x=='/')
            cout<<"The division = " <<num1/num2<<endl;
        else if(x=='%')
            cout<<"The remainder = " <<num1%num2<<endl;
  else 
cout<<"Wrong input"<<endl;
      }
    

   
}
    
