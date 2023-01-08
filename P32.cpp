
#include<iostream>
#include<string>
using namespace std;
#include <cmath>

struct POw {
    int Number;
    int M;
};

POw ReadNumber() {
    POw numbers;

    do {

        cout << "entre un number" << endl;
        cin >> numbers.Number;
        cout << "entre M" << endl;
        cin >> numbers.M;

    } while (numbers.Number < 0 && numbers.M < 0);

    return numbers;
};

void Power(POw numbers) {



    int a = pow(numbers.Number, numbers.M);


    cout << a << endl;

}



int main()
{

    Power(ReadNumber());


}