
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


int ReadAge() {

    int age;
    cout << "entre votre age" << endl;
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


int main()
{
    PrintResult(ReadAge());

}