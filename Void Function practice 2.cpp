#include <iostream>
using namespace std;
void GetMean(float values, float avg );

int main()
{
	float values;


	

	return 0;

}

float GetMean(int values)
{
	int sum = 0;
	int i = 0;
	while (i < values)
	{
		int temp;
		cin >> temp;
		sum += temp;
		i++;
	}

	return sum / values;

	

}