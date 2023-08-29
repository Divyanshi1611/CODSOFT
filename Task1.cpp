//Task1 
//Simple Calculator
#include <iostream>
using namespace std;
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float divg(int a,int b);
int rem(int a,int b);
int main()
{
    int a,b;
    char d;
    //Taking two numbers as input from the user
    cout<<"Enter first Number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    //Asking the user to enter the operator
    cout<<"Enter the operator:"<<endl;
    cin>>d;
    if (d=='+')
    {
        cout<<"The sum of the numbers is:"<<sum(a,b);
        //Printing the result after addition by calling the function sum
    }
    else if (d=='-')
    {
        cout<<"The result after subtraction is:"<<sub(a,b);
        //Printing the result after subtraction by calling the function sub
    }
    else if(d=='*')
    {
        cout<<"The result after multiplication is:"<<mul(a,b);
        //Printing the result after multiplication by calling the function mul
    }
    else if(d=='/')
    {
        cout<<"The result after division is:"<<divg(a,b);
        //Printing the result after division by calling the function divg
    }
    else if(d=='%')
    {
        cout<<"The remainder after division is:"<<rem(a,b);
          //Printing the remainder after division by calling the function rem
    }
    return 0;

}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int mul(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
float divg(int a,int b)
{
    float c;
    c=a/b;
    return c;
}
int rem(int a,int b)
{
    int c;
    c=a%b;
    return c;
}

