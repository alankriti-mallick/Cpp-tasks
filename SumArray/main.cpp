#include <iostream>

using namespace std;

int main()
{
    cout<< "Enter the number of elements\n";
    int n;
    cin>> n;

    int arr[n];
    int sum=0;
    cout<< "Enter the elements\n";
    for(int i=0; i<n; i++)
        {
            cin>> arr[i];
            sum+=arr[i];
        }
    cout<< "Sum of the elements: "<< sum;

    return 0;
}
