
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

//methode 2  boucle while
void PrintWhile(int N) {
    int i = N;
    while (i > 0) {
        cout << "i = " << i << endl;
        --i;
    }

}

//métthode 3 do   while

void PrintDoWhile(int N) {
    int i = N;
    do {
        cout << "i = " << i << endl;
        --i;
    } while (i > 0);

}

//methode 1 boucle for
void PrintFor(int N) {
    int i;
    for (i = N; i >= 0; --i) {
        cout << "i = " << i << endl;
    }


}

int main()
{
    PrintDoWhile(ReadNumber());
    PrintWhile(ReadNumber());
    PrintFor(ReadNumber());

}