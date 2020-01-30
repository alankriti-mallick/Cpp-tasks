#include <iostream>

using namespace std;

int main()
{
    cout<< "Enter a number\n";

    int x;
    cin >> x;

    if(x%2==0)
        cout<<"Number is EVEN";
    else
        cout<<"Number is ODD";

    return 0;
}
