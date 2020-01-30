#include <iostream>

using namespace std;

int main()
{
    cout<< "Enter the number of elements\n";
    int n;
    cin>> n;

    int arr[n];

    cout<< "Enter the elements\n";
    for(int i=0; i<n; i++)
        cin>> arr[i];

    int max, min;
    max= min= arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>=max)
            max=arr[i];
        else if(arr[i]<=min)
            min= arr[i];
    }

    cout<< "Maximum element: "<<max<<"\nMinimum element: "<<min;

    return 0;
}
