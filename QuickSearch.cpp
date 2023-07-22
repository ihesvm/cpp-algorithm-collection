#include <iostream>

using namespace std;

int partition(int a[], int low, int high)
{
    int i, j, pivot, temp;

    pivot = a[low];
    i = low + 1;
    j = high;

    while (i < j)
    {
        while (a[i] <= pivot)
            i++;

        while (a[j] > pivot)
            j--;

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    a[low] = a[j];
    a[j] = pivot;
    return j;
}

void QuickSort(int a[], int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(a, low, high);
        QuickSort(a, low, j - 1);
        QuickSort(a, j + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
        ;
    }
}

int main()
{

    int a[] = {10, 2, 6, 7, 3, 22, 1};
    int size = sizeof(a) / sizeof(int);
    QuickSort(a, 0, size - 1);

    cout << "After Sorting" << endl;
    printArray(a, size);

    return 0;
}
