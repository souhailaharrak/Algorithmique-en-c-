// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int ReadNumbers(int& number1, int& number2, int& number3) {

    cout << "entre number 1" << endl;
    cin >> number1;
    cout << "entre number 2" << endl;
    cin >> number2;
    cout << "entre number 3" << endl;
    cin >> number3;
}

int Max2Number(int number1, int number2, int number3) {

    if (number1 > number2 && number1 > number3)
        return number1;
    else if (number2 > number1 && number2 > number3)
        return number2;
    else
        return number3;
}

void PrintMax(int Max) {

    cout << "the max number is " << Max << endl;


}







int main() {

    int number1, number2, number3;
    ReadNumbers(number1, number2, number3);
    PrintMax(Max2Number(number1, number2, number3));


}