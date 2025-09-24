#include<iostream>

using namespace std;

int main(){

    float r, area ;
    float pi = 3.14;

    cout << "enter radius of circle : ";
    cin >> r;

    area = pi * r * r;
    cout << "Area of Circle = " << area;

    return 0;
}