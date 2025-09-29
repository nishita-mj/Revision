#include<iostream>

using namespace std;

int main(){

    int n1, n2;
    char operators;

    cout << "Enter the value of n1 and n2 : ";
    cin >> n1 >> n2;

    cout << "Enter Operator(+, -, *, /) : ";
    cin >> operators;

    switch (operators)
    {
    case '+':
        cout << "the sum of two number is : " << n1 + n2;
        break;

    case '-' :
        cout << "the sub of two number is : " << n1 - n2;
        break;

    case '*' :
        cout << "the Multiplication of two number is : " << n1 * n2;
        break;

    case '/' :
        cout << "the Division of two number is : " << n1 / n2;
        break;
    
    default:
        cout << "Invalid operator...";
        break;
    }

    return 0;
}