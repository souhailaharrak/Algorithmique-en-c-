// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

 //methode 1
struct MaxNumber {
    int num1;

    int num2;

};

MaxNumber Read2Number() {

    MaxNumber numbers;
    cout << "entre premier number " << endl;
    cin >> numbers.num1;
    cout << "entre deuxime Number" << endl;
    cin >> numbers.num2;
    return numbers;
}

int Max(MaxNumber numbers) {

    if (numbers.num1 > numbers.num2)
        return numbers.num1;

    else return numbers.num2;

}

void afficher(MaxNumber numbers) {

    if (Max(numbers) == numbers.num1)
        cout << numbers.num1;

    else
        cout << numbers.num2;

}

int main() {
    afficher(Read2Number());

}


 //methode 2
#include <iostream>
using namespace std;

int ReadNumbers(int& number1, int& number2) {

    cout << "entre number 1" << endl;
    cin >> number1;
    cout << "entre number 2" << endl;
    cin >> number2;

}

int Max2Number(int number1, int number2) {

    if (number1 > number2)
        return number1;
    else
        return number2;
}

void PrintMax(int Max) {

    cout << "le nombre maximum est  " << Max << endl;


}







int main() {

    int number1, number2;
    ReadNumbers(number1, number2);
    PrintMax(Max2Number(number1, number2));


}