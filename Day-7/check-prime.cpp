#include<iostream>

using namespace std;

bool isPrime(int n){
    for (int i = 2; i < n; i++){
      if (n%i == 0){
        return 0;
      }
    }

    return 1;
    
}

int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << " is a Prime Number ";
    else
        cout << " is not a Prime Number ";

    return 0;
}