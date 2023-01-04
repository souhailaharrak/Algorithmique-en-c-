
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


int ReadNumber() {
    int N;
    cout << "entre votre number" << endl;
    cin >> N;
    return N;

}

//methode 1 boucle for
void PrintWhile(int N) {
    int i = 0;
    while (i < N) {
        cout << "i = " << i << endl;
        ++i;
    }

}
//methode 2  boucle while

void PrintDoWhile(int N) {
    int i = 0;
    do {
        cout << "i = " << i << endl;
        ++i;
    } while (i < N);

}

//methode 1 boucle for
void PrintFor(int N) {
    int i;
    for (i = 1; i < N; ++i) {
        cout << "i = " << i << endl;
    }


}

int main()
{
    PrintDoWhile(ReadNumber());
    PrintWhile(ReadNumber());
    PrintFor(ReadNumber());

}