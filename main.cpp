#include <iostream>

using namespace std;

// recursive PrintNumPattern() function
void PrintNumPattern(int num1, int num2)
{
	if (num1 == 0 || num1 < 0)
  {
        cout<<num1<<" ";
	}
	else
  {
    	cout<<num1<<" ";
    	PrintNumPattern(num1 - num2, num2) ;
    	cout<<num1<<" ";
  }
}

int main(int argc, char* argv[]) 
{
	int num1;
	int num2;
	
	cin >> num1;
	cin >> num2;
	PrintNumPattern(num1, num2);
	
	return 0;
}