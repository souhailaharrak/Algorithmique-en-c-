// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


float ReadPositiveNumber(string messsage) {


    float LoanAmount;
    cout << messsage << endl;
    cin >> LoanAmount;
    return LoanAmount;
}

float calculteMonth(float MonthlyPayment, float Months) {

    float total = MonthlyPayment / Months;
    return total;

}





int main() {

    float MonthlyPayment = ReadPositiveNumber("Please enter MonthlyPayment");
    float Months = ReadPositiveNumber("Plase enter  months");

    cout << " Monthly Installment = " << calculteMonth(MonthlyPayment, Months);
}