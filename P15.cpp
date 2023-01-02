
#include<iostream>
#include<string>
using namespace std;


//methode 1

void ReadNumber(float x[2]) {

    cout << "enter L \n";
    cin >> x[0];
    cout << "enter D \n";
    cin >> x[1];

}

int calculRectange(float x[2]) {


    float verg = x[0] * x[1];
    return verg;

}

void PrintArea(float x[2]) {

    cout << " the area Rectange " << calculRectange(x);
}


int main()
{
    float x[2];
    ReadNumber(x);
    PrintArea(x);
    

}




 //methode 2

void ReadNumber(int& num1, int& num2) {

    cout << "enter L \n";
    cin >> num1;
    cout << "enter D \n";
    cin >> num2;

}

int calculRectange(int& num1, int& num2) {


    int verg = num1 * num2;
    return verg;

}

void PrintResult(int num1, int num2) {

    cout << " the area Rectange " << calculRectange(num1, num2);
}


int main()
{
    int  num1, num2;
    ReadNumber(num1, num2);
    PrintResult(num1, num2);
 

}