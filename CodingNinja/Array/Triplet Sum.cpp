#include <iostream>
using namespace std;

int tripletSum(int input[], int size, int x)
{
	int i,j,a=0,b;
    
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            for(b=j+1;b<size;b++)
            {
                if(input[i]+input[j]+input[b]==x)
                a++;
            }
        }
    }
    return a;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
