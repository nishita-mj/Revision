#include<iostream>

using namespace std;

int main(){

    int n, sum=0;

    cout << "Enter the value of n : ";
    cin >> n;

        for (int i = 0; i <= n; i++){
            if (i % 2 != 0){
                sum += i;
            }
        }

    cout << "sum of odd number is : " << sum << endl;
    

    return 0;
}