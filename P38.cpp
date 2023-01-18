// Online C++ compiler to run C++ program online
  // Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

enum PrimeNotPrime {
    NotPrime,
    prime

};

int  ReadNumbers(string message) {
    int  Number;
    do {

        cout << message << endl;
        cin >> Number;

    } while (Number < 0);


    return Number;
}

PrimeNotPrime PrimeNumber(int Number) {


    if (Number % 2 == 0) {

        return PrimeNotPrime::NotPrime;
    }
    else {
        return PrimeNotPrime::prime;
    }

}

void Print(PrimeNotPrime Number) {

    if (Number == PrimeNotPrime::NotPrime)
        cout << "NotPrime\n";

    else
        cout << "prime \n";


}

int main() {
    Print(PrimeNumber(ReadNumbers("entre un number")));
}