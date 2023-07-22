#include <iostream>

using namespace std;

void SelectionSort(int a[], int n)
{
    int min, k;

    for (int i = 0; i < n; i++)
    {
        min = a[i];
        k = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                k = j;
            }
        }

        a[k] = a[i];
        a[i] = min;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        cout << " " <<arr[i]; ;
    }
}

int main()
{

    int a[] = {10, 2, 6, 7, 3, 22, 1};
    int size = sizeof(a) / sizeof(int);
    SelectionSort(a, size);

    cout << "After Sorting" << endl;
    printArray(a, size);

    return 0;
}