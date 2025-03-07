#include <iostream>
using namespace std;
double Sum(float num[], int size);
int SearchArray(int ArrNum[], int ArraySize, int Element);
void Sort(int Array[], int Sortsize);
int main()
{
	string cars[] = {"mustang", "Camaro"};
	cout << cars[0] << endl;
	cout << "There are " << sizeof(cars) / sizeof(string) << " cars in your parking lot\n";
	// iterate over an array aka linear search with for loop
	string Name[] = {"kan sovichai", "Mysterious girlfriend"};
	for (int i = 0; i < sizeof(Name) / sizeof(string); i++)
	{
		cout << Name[i] << endl;
	}
	// or you can use for each loop
	// for each loop will iterate over an array just as linear search but it's easier
	// formula
	// for(DT New vn : array's vn){
	//			blah
	//}
	int Num[] = {12, 3, 21};
	for (int Number : Num)
	{
		cout << Number << endl;
	}
	// pass array to a function(void)
	float num[] = {12, 10, 199};
	int size = sizeof(num) / sizeof(float);
	Sum(num, size);
	// sort item in the array
	int Array[] = {2, 1, 5, 3, 4, 6};
	int Sortsize = sizeof(Array) / sizeof(Array[0]);
	Sort(Array, Sortsize);
	// after sorted, use for each loop to iterate all the items in the array
	for (int SortArray : Array)
	{
		cout << SortArray << " ";
	}
	cout << "\n";
	// Search for an element in the array
	int ArrayNum[] = {1, 2, 3, 4, 5};
	int ArraySize = sizeof(ArrayNum) / sizeof(int);
	int InNum;
	int position;
	cout << "Enter the number you want to search for\n";
	cin >> InNum;
	position = SearchArray(ArrayNum, ArraySize, InNum);
	if (position != 404)
	{
		cout << InNum << " is in the index " << position << endl;
	}
	else
	{
		cout << "Not found\n";
	}
	
	// fill function
	const int Fillsize = 10;
	string Foods[Fillsize];
	// fill(Begin, End, value)
	fill(Foods, Foods + Fillsize, "Pizza");
	for (int i = 0; i < Fillsize; i++)
	{
		cout << Foods[i] << "\n";
	}
	// Accept user input into an array
	string InputFood[3];
	int SizeOfInputFood = sizeof(InputFood) / sizeof(InputFood[0]);
	for (int i = 0; i < SizeOfInputFood; i++)
	{
		cout << "Enter your top " << i + 1 << " favorite food:";
		getline(cin >> ws, InputFood[i]);
	}
	cout << "Your top 3 favorite food are :" << endl;
	for (int i = 0; i < SizeOfInputFood; i++)
	{
		cout << InputFood[i] << endl;
	}

	return 0;
}
double Sum(float num[], int size)
{
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += num[i];
	}
	cout << total << endl;
	return 0;
}
// Search for an element in the array
int SearchArray(int ArrNum[], int ArraySize, int InNum)
{
	for (int i = 0; i < ArraySize; i++)
	{
		if (ArrNum[i] == InNum)
		{
			return i;
		}
	}
	return 404;

	//404 means not found in the array
}
// sort the item in the array
// the size -1 cuz we cant compare the last number to anything
void Sort(int Array[], int Sortsize)
{
	int Swap;
	for (int i = 0; i < Sortsize - 1; i++)
	{
		for (int j = 0; j < Sortsize - i - 1  ; j++)
		{
			if (Array[j] > Array[j + 1])
			{
				Swap = Array[j + 1];
				Array[j + 1] = Array[j];
				Array[j] = Swap;
			}
		}
	}
}