
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


float ReadCIRCONF�RENCE() {
    int l;
    cout << "enter rayon \n";
    cin >> l;

    return l;
}

float  CricleAreaByCIRCONF�RENCE(float l) {

    const float pi = 3.14;
    float area = (pow(l, 2)) / (4 * pi);
    return area;

}

void PrintResult(float area) {

    cout << "  Triangle area : " << area;
}


int main()
{

    PrintResult(CricleAreaByCIRCONF�RENCE(ReadCIRCONF�RENCE()));

    return 0;

}