#include <iostream>

using namespace std;

int main()
{
    int List[] = {100, 2, 250, 4, 600, 39, 10, 22, 98, 20, 39, 59, 110};
    int x = 99, i;

    int const n = 17;

    bool flag = false;

    for (i = 0; i < n; i++)
    {
        if (List[i] == x)
        {
            flag = true;
            // break;
        }
    }

    if (flag)
    {
        cout << "Yes, number is exists!";
    }
    else
    {
        cout << "No, does not exists!";
    }
}