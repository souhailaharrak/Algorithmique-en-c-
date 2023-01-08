
#include<iostream>
#include<string>
using namespace std;
#include <cmath>



int ReadNumber() {

    int Number;
    do {

        cout << "entre un number" << endl;
        cin >> Number;


    } while (Number < 0);

    return Number;
}

void Power(int Number) {


    int a, b, c;
    a = Number * Number * Number * Number;
    c = Number * Number;
    b = Number * Number * Number;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}



int main()
{

    Power(ReadNumber());


}