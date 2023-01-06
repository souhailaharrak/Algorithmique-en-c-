
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


enum OddEv {

    odd, even
};

int ReadNumber() {
    int Number;
    cout << "entre un number" << endl;
    cin >> Number;
    return Number;
}

OddEv CheckNumber(int Number) {

    if (Number % 2 == 0)
        return  OddEv::even;
    else
        return OddEv::odd;
}


int sumOddEven(int Number) {
    int somme = 0;
    for (int i = 1; i < Number; i++) {

        if (CheckNumber(i) == OddEv::odd) {

            somme += i;
        }


    }

    return somme;
}

void PrintResult(int Number) {

    cout << sumOddEven(Number);
}

int main()
{
    int Number;
    PrintResult(ReadNumber());
}