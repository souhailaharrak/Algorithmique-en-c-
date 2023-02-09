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
    int counter = 3;
    string PinCode;
    do {
        counter--;
        PinCode = ReadAtmPin();

        if (PinCode == "1234") {

            return 1;

        }
        else {
            cout << " wrong Pin You have more tries " << counter;

        }

    } while (counter >= 1 && PinCode != "1234");

    return 0;
}





int main() {

    if (Login()) {

        cout << " your Account balance is " << 7500;
    }

    else {
        cout << " you card blocked " << endl;

    }


}