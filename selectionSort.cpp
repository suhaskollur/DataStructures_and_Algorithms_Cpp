#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    // for (int i = 0; i < n-1; i++)
    // {
    //     int index = i;
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (arr[j] < arr[index])
    //         {
    //             index = j;
    //         }
    //     }
    //     swap(arr[index], arr[i]);
    // }
    
}


