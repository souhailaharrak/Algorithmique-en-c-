// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

enum operation {

    add = '+',
    mul = '*',
    divide = '/',
    sub = '-',
};

float ReadNumbers(string message) {
    float Number;
    cout << message << endl;
    cin >> Number;
    return Number;

}

operation opeartionType() {

    char OP;
    cout << "entre un Operation Type" << endl;
    cin >> OP;
    return (operation)OP;

}

float calcul(float Num1, float Num2, operation type) {

    switch (type) {

    case operation::add:
        return Num1 + Num2;
    case operation::sub:
        return Num1 - Num2;
    case operation::divide:
        return Num1 / Num2;
    case operation::mul:
        return Num1 * Num2;

    }

}

int main() {

    float Num1 = ReadNumbers("entre un number1");
    float Num2 = ReadNumbers("entre un number2");
    operation type = opeartionType();
    cout << calcul(Num1, Num2, type) << endl;
}