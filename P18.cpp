
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


void ReadNumber(int& r) {

    cout << "enter rayon \n";
    cin >> r;


}

float  CricleArea(int& r) {

    const float pi = 3.14;
    float area = pi * pow(r, 2);
    return area;

}

void PrintResult(int r) {

    cout << "  Triangle area : " << CricleArea(r);
}


int main()
{
    int  r;
    ReadNumber(r);
    PrintResult(r);


}