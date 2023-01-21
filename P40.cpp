// Online C++ compiler to run C++ program online
#include <iostream>
using namespace  std;

float ReadPositiveNumber(string message) {
    int nambers;
    cout << message << endl;
    cin >> nambers;
    return nambers;

}

float TotalBillAfterServirceAndTax(float TotalBill) {

    TotalBill = TotalBill * 1.1 * 1.16;
    return TotalBill;

}

int main() {

    float TotalBill = ReadPositiveNumber("entre TotalBill");

    cout << " Remainder " << TotalBillAfterServirceAndTax(TotalBill);

}