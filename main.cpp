#include <iostream>
using namespace std;

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

int main()
{
    int num1;
    int num2;
    cin >> num1;
    cin >> num2; 
    PrintNumPattern(num1, num2);

    return 0;
}