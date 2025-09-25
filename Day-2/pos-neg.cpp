#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    if (n >=0){
        cout << n << " is Positive number..." << endl;
    }else{
        cout << n << " is Negative number..." << endl;
    } 
    
    if (n % 2 == 0){
        cout << n << " is Even number..." << endl;
    }else{
        cout << n << " is Odd number..." << endl;
    }
    
    return 0;
}
