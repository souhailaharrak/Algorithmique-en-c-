#include <iostream>
using namespace std;


struct info {

    int  age;
    bool  hasDriver;

};

info ReadInfo() {
    info donne;
    cout << "entre votre age \n";
    cin >> donne.age;
    cout << "entre votre darive \n";
    cin >> donne.hasDriver;

};


bool checkInfo(info donne) {

    if (donne.age >= 21 && donne.hasDriver == true) {

        return  "herid";
    }
    else {
        return "regu";
    }

}

void PrintIfon(info donne) {

    if (checkInfo(donne)) {

        cout << "herid";
    }
    else {
        cout << "regu";
    }

}

int main() {


    PrintIfon(ReadInfo());

}