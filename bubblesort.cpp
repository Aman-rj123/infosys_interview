#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{

    
    for (int i = 1; i < n; i++)
    {
        bool swap = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap = true;
            }
        }
        if(swap==false){
            break;
        }
    }
   
}

int main()
{

    int n = 5;
    int arr[n] = {1, 3, 4, 2, 5};

    bubblesort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}