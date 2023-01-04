
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


int ReadAge() {

    int age;
    cout << "entre votre age between 18 and 45" << endl;
    cin >> age;
    return age;
}

bool validationAge(int Number, int from, int To) {

    return (Number >= from && Number <= To);

}

void PrintResult(int age) {


    if (validationAge(age, 18, 45))
        cout << "valide";

    else
        cout << "invalde";

}

int ReadNumberBetween(int from, int To) {

    int age = 0;
    do {
        age = ReadAge();

    } while (!validationAge(age, from, To));
    return age;
}

int main()
{
    PrintResult(ReadNumberBetween(18, 45));

}