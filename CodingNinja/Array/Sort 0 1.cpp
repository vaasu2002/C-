#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int arr[], int n)
{
  int count = 0; 
    for (int i = 0; i < n; i++) { 
        if (arr[i] == 0) 
            count++; 
    } 
    for (int i = 0; i < count; i++){
        arr[i] = 0; 
    }
    for (int i = count; i < n; i++) {
        arr[i] = 1; 
    }
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
