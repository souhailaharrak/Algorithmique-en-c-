

#include<iostream>
#include<string>
using namespace std;

void Read3number(int& num1, int& num2) {

    cout << "entre num1" << endl;
    cin >> num1;
    cout << "entre num2" << endl;
    cin >> num2;

}

// int Summe(int num1,int num2){

//      int sum=num1+num2;
//      return sum;

//  }

void swap(int& num1, int& num2) {

    int SWAP;
    SWAP = num1;
    num1 = num2;
    num2 = SWAP;

}

void PrintSum(int num1, int num2) {

    cout << "this is num1 " << num1 << endl;
    cout << "this is num2 " << num2 << endl;
}


int main()
{

    int num1, num2;
    Read3number(num1, num2);
    swap(num1, num2);
    PrintSum(num1, num2);

}