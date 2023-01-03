
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


float ReadNumber() {
    int r;
    cout << "enter rayon \n";
    cin >> r;

    return r;
}

float  CricleAreaByDiametre(float r) {

    const float pi = 3.14;
    float area = (pi * pow(r, 2)) / 4;
    return area;

}

void PrintResult(float area) {

    cout << "  Triangle area : " << area;
}


int main()
{

    PrintResult(CricleAreaByDiametre(ReadNumber()));

    return 0;

}