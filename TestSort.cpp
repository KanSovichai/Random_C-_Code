#include <iostream>
using namespace std;
void Sort(int Array[], int Sortsize)
{
	int Swap;
	for (int i = 0; i < Sortsize ; i++)
	{
		for (int j = 0; j < Sortsize - i; j++)
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
int main()
{
    int Array[] = {2, 1, 5, 3, 4, 6};
	int Sortsize = sizeof(Array) / sizeof(Array[0]);
	Sort(Array,Sortsize);
	// after sorted, use for each loop to iterate all the items in the array
	for (int SortArray : Array)
	{
		cout << SortArray << " ";
	}
    return 0;
}