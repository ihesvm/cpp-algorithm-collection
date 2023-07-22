#include <iostream>

using namespace std;

void InsertionSort(int a[], int n)
{
    int j, temp;

    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        temp = a[i];
        while (a[j] > temp && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
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
    InsertionSort(a, size);

    cout << "After Sorting" << endl;
    printArray(a, size);

    return 0;
}