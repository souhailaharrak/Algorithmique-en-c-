
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


void ReadNumber(int& a, int& h) {

    cout << "enter a \n";
    cin >> a;
    cout << "enter h \n";
    cin >> h;

}

int  TriangleArea(int& a, int& h) {


    int verg = (a / 2) * h;
    return verg;

}

void PrintResult(int a, int h) {

    cout << "  Triangle area : " << TriangleArea(a, h);
}


int main()
{
    int  a, h;
    ReadNumber(a, h);
    PrintResult(a, h);


}