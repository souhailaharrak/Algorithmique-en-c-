// Online C++ compiler to run C++ program online
#include <iostream>
using namespace  std;

float ReadPositiveNumber(string message) {
    int nambers;
    cout << message << endl;
    cin >> nambers;
    return nambers;

}

float calculteRemainder(int TotalBill, int TotalCashPaid) {

    int  result = TotalBill - TotalCashPaid;
    return result;

}

int main() {

    float TotalBill = ReadPositiveNumber("entre TotalBill");
    float TotalCashPaid = ReadPositiveNumber("entre TotalBill");
    cout << " Remainder " << calculteRemainder(TotalBill, TotalCashPaid);

}