#include <iostream>
using namespace std;

//defining PrintNumPattern function, getting n1 and n2 as parameter
void PrintNumPattern(int n1, int n2)
{
    if (n1 < 0)
    {
        cout<<n1<<" ";
    }
    else
    {
        cout<<n1<<" ";
        PrintNumPattern(n1 - n2, n2) ;
        cout<<n1<<" ";
    }
}

//main method 
int main()
{
    //declaring num1 as integer type
    int num1;
    //declaring num2 as integer type
    int num2;
    //getting num1 from user
    cin >> num1;
    //getting num2 from user
    cin >> num2;
    //calling PrintNumPattern function, passing num1,num2 as argument 
    PrintNumPattern(num1, num2);

    return 0;
}