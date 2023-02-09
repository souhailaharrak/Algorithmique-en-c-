// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


float ReadPositiveNumber(string messsage) {


    float MonthlyPayment;
    cout << messsage << endl;
    cin >> MonthlyPayment;
    return MonthlyPayment;
}

float calculteMonth(float MonthlyPayment, float LoanAmout) {

    float total = MonthlyPayment / LoanAmout;
    return total;

}





int main() {
    float LoanAmout = ReadPositiveNumber("Please enter LoanAmout");
    float MonthlyPayment = ReadPositiveNumber("Plase enter  MonthlyPayment");
    cout << calculteMonth(LoanAmout, MonthlyPayment) << " Months";
}