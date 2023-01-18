// Online C++ compiler to run C++ program online
  // Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


float ReadNumbers(string message) {
    float Number;
    cout << message << endl;
    cin >> Number;
    return Number;

}

int somme() {
    int sum = 0; int counter = 1; int Number = 0;
    do {

        Number = ReadNumbers("entre un number " + to_string(counter));
        if (Number == -99) {

            break;

        }
        sum += Number;
        counter++;
    } while (Number != -99);
    return sum;
}


int main() {
    cout << somme();
}