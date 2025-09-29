#include<iostream>

using namespace std;

int main(){

    int year;

    cout << "Enter a Year : ";
    cin >> year;

    ((year % 4 == 0 && year % 100 != 0) || year % 400 ==0)
        ? cout << year << " Is a leap year..."
        : cout << year << " Is not a leap year";

    return 0;
}