#include <iostream>
using namespace std;

void sentinelSearch(int arr[], int n, int key)
{

	int last = arr[n - 1];

	arr[n - 1] = key;
	int i = 0;

	while (arr[i] != key)
		i++;

	arr[n - 1] = last;

	if ((i < n - 1) || (arr[n - 1] == key))
		cout << key << " is present at index " << i;
	else
		cout << "Element Not found";
}

int main()
{
	int arr[] = { 10, 20, 180, 30, 60, 50, 110, 100, 70 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 180;

	sentinelSearch(arr, n, key);

	return 0;
}
