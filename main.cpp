#include <iostream>
#include <array>
using namespace std;

int* sortArrays (int *arr1, int *arr2, int n)
{
    int* newArr = new int[n];
    int i,j,k;
    i = j = 0;
    k = -1;

    while ( k < n)
    {
        k++;

        if (arr1[i] == '\0')
        {
            newArr[k] = arr2[j++];
            continue;
        }

        else if (arr2[j] == '\0')
        {
            newArr[k] = arr1[i++];
            continue;
        }

        else
        {
            if (arr1[i] == arr2[j])
            {
                newArr[k++] = arr1[i++];
                newArr[k] = arr2[j++];

            }
            else if (arr1[i] < arr2[j])
            {
                newArr[k] = arr1[i++];
            }
            else
            {
                newArr[k] = arr2[j++];
            }
        }
    }

    return newArr;
}

int main() {

    int arr1[] = {1,3,8};
    int arr2[1] = {10};

    int* arr3 = sortArrays(arr1,arr2,2);

    for (int i = 0; i < 2; i++)
        cout << arr3[i]<< endl;

    delete[] arr3;
    return 0;
}
