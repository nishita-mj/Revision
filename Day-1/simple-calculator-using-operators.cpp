#include <iostream>

using namespace std;

int main()
{

    int n1, n2, ans;
    char operators;

    cout << "Enter the value of n1 and n2 : ";
    cin >> n1 >> n2;

    cout << "Enter the operator (+, -, *, /) : ";
    cin >> operators;

    if (operators == '+'){
        ans = n1 + n2;
        cout << "ans = " << ans;
    }
    else if (operators == '-'){
        ans = n1 - n2;
        cout << "ans = " << ans;
    } 
    else if (operators == '*'){
        ans = n1 * n2;
        cout << "ans = " << ans;
    }
    else if (operators == '/'){
        ans = n1 / n2;
        cout << "ans = " << ans;
    }
    else{
        cout << "Invalid operator!";
    }

    return 0;
}