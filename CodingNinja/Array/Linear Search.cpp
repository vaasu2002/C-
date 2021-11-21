#include <iostream>
using namespace std;

#include "solution.h"
int linearSearch(int arr[], int n ,int val){
    for(int i = 0; i < n; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int val;
		cin >> val;
		cout << linearSearch(arr, n, val) << endl;
	}
	return 0;
}
