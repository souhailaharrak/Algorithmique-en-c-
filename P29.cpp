
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



int sumOddEven(int Number) {
    int res = 1;
    for (int i = Number; i >= 1; i--) {



        res = res * i;



    }

    return res;
}



int main()
{

    cout << sumOddEven(ReadNumber());


}