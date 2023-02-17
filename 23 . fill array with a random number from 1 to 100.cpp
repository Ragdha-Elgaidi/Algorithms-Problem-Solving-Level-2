#include<iostream>
#include<cstdlib>
using namespace std;

int RandomNumber(int from, int to)
{
	int RandNumber = rand() % (to - from + 1) + from;

	return RandNumber;
}

void FillArrayWithRandomNumber(int arr[100], int& arrlength)
{
	cout << "Enter the number of elements of the array" << endl;
	cin >> arrlength;

	cout << "Enter the array elements" << endl;
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandomNumber(1, 100);;
	}
}

void PrintArrayElements(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}
int main()
{
	//Seeds the random number generator in C++, called only 
	srand((unsigned)time(NULL));

	int arr[100], arrlength;

	FillArrayWithRandomNumber(arr, arrlength);

	cout << "Array elements:" << endl;

	PrintArrayElements(arr, arrlength);

	return 0;
}
