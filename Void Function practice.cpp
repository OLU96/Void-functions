#include <iostream>
using namespace std;
void PrintMax(int a,int b);

int main()
{
	int a, b;

	cout << "enter a pair of numbers" << endl;
	cin >> a; 
	cin >> b;
	PrintMax(a, b);

	return 0;

}

void PrintMax(int a,int b)
{
	
	if (a > b)
		cout << a ;
	else 
	{
		cout << b << endl;
	}

}
