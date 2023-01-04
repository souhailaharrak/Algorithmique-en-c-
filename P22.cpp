
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


void Read(float& a, float& b) {

    cout << "enter a \n";
    cin >> a;
    cout << "enter b \n";
    cin >> b;

}

float  CricleAreaByTriangle(float& a, float& b) {

    const float pi = 3.14;
    float area = (pi * pow(b, 2)) / 4 * ((2 * a - b) / (2 * a + b));
    return area;

}

void PrintResult(float area) {

    cout << "  circle area : " << area;
}


int main()
{
    float a, b;
    Read(a, b);

    PrintResult(CricleAreaByTriangle(a, b));


}