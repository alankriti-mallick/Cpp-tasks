#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the year\n";
    int yr;
    cin>> yr;

    if((yr%4==0&&yr%100!=0)||yr%400==0)
        cout<<"Leap Year";
    else
        cout<<"Non-Leap Year";
    return 0;
}
