// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


string ReadAtmPin() {


    string PinCode;
    cout << " Please enter PIN CODE " << endl;
    cin >> PinCode;
    return PinCode;
}

bool Login() {
    string PinCode;
    do {

        PinCode = ReadAtmPin();
        if (PinCode == "1234") {

            return 1;

        }
        else {
            cout << " wrong Pin ";
            system("color 4F");

        }

    } while (PinCode != "1234");

}





int main() {

    if (Login()) {

        cout << " your Account balance is " << 7500;
        system("color 2F");
    }
    return 0;

}