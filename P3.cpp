// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct  info {
    string name;
    string lastname;
};

info readinfo() {

    info personel;

    cout << "entre votre name " << endl;
    cin >> personel.name;
    cout << "entre votre lastname" << endl;
    cin >> personel.lastname;
    return personel;
}

string fullName(info personel) {

    string fullname;
    fullname = personel.name + " " + personel.lastname;

    return fullname;

}

void print(string fullname) {

    cout << "  full name is" << fullname;
}

int main() {


    print(fullName(readinfo()));

}