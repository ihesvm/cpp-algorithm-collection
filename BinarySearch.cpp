#include <iostream>

using namespace std;

int main()
{
    int List[] = {1, 3, 5, 7, 9, 11, 25, 35, 55, 75};
    int x = 39;

    int low = 0, mid;

    int high = sizeof(List) / sizeof(int) - 1;

    bool flag = false;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x == List[mid])
        {
            flag = true;
            break;
        }
        else if (x > List[mid])
        {
            low = mid + 1;
        }
        else if (x < List[mid])
        {
            low = mid - 1;
        }
    }

    if (flag == true)
    {
        cout << "Yes, number is exists!";
    }
    else
    {
        cout << "No, does not exists!";
    }

    return 0;
}