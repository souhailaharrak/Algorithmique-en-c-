// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


float EntrNumber(string message) {

    float Number;
    cout << message << endl;
    cin >> Number;
    return Number;
}

float HeursToDay(float Number) {

    const float heure = 24;
    return  Number / heure;



}

float DaysToweek(float Number) {

    return HeursToDay(Number) / 7;



}

int main() {
    float Number = EntrNumber("entre Number of heure");
    cout << HeursToDay(Number) << " day" << endl;
    cout << DaysToweek(Number) << " week";
}