#include<iostream>

using namespace std;

int main(){

    int a,b,c;

    cout << "Enter the value of A, B and C : ";
    cin >> a >> b >> c;

    if (a>=b && a>=c)
    {
        cout << "A have maximum value...";
    }else if (b>=a && b>=c)
    {
       cout << "B have maximum value...";
    }else{
        cout << "C have maximum value...";
    }

    return 0;   
}