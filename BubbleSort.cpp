#include <iostream>

using namespace std;

void BubbleSort(int a[], int n)
{
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                // swap(a[j], a[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
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
    BubbleSort(a, size);

    cout << "After Sorting" << endl;
    printArray(a, size);

    return 0;
}