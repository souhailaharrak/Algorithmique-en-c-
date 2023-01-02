
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


void ReadNumber(int& num1, int& num2) {

    cout << "enter L \n";
    cin >> num1;
    cout << "enter D \n";
    cin >> num2;

}

int  RectangeAreaBySideDiagonal(int& num1, int& num2) {


    int verg = num1 * sqrt(pow(num2, 2) - pow(num1, 2));
    return verg;

}

void PrintResult(int num1, int num2) {

    cout << "  Rectange area  " << RectangeAreaBySideDiagonal(num1, num2);
}


int main()
{
    int  num1, num2;
    ReadNumber(num1, num2);
    PrintResult(num1, num2);


}