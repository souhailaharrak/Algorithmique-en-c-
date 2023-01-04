
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


void Read(float& a, float& b, float& c) {

    cout << "enter a \n";
    cin >> a;
    cout << "enter b \n";
    cin >> b;
    cout << "enter c \n";
    cin >> c;

}

float  CricleAreaByTriangle(float& a, float& b, float& c) {

    float p = (a + b + c) / 2;
    const float pi = 3.14;
    float T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

    float area = pi * pow(T, 2);
    return area;

}

void PrintResult(float area) {

    cout << "  circle area : " << area;

}


int main()
{
    float a, b, c;
    Read(a, b, c);

    PrintResult(CricleAreaByTriangle(a, b, c));


}