// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int getNumber() {

    int number;
    cout << " entre un number " << endl;
    cin >> number;
    return number;
}

float calculerNumber(int number) {


    return (float)number / 2;


}
void printNumber(int number) {


    cout << " half Number " << calculerNumber(number);

}

int main() {
    printNumber(getNumber());

}