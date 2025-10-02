#include <iostream>
using namespace std;

int main() {
    int n, num, sum=0;
    cout << "Enter how many numbers: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        sum = sum + num;  
    }

    float avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
