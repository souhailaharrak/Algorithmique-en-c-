// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct strTaskDuration {

    int days, heure, minuts, seconds;
};


float EntrNumber(string message) {

    float Number;
    cout << message << endl;
    cin >> Number;
    return Number;
}



strTaskDuration TaskDurationOfSecond(int TotalSeconds) {

    strTaskDuration TaskDuration;
    const int NumberOfdays =   24 * 60 * 60;
    const int NumberOfHeure = 60 * 60;
    const int NumberOfMinuts = 60;
    int Remainder = 0;
    TaskDuration.days =floor( TotalSeconds / NumberOfdays);
    Remainder = TotalSeconds % NumberOfdays;
    TaskDuration.heure = floor(Remainder / NumberOfHeure);
    Remainder = Remainder % NumberOfHeure;
    TaskDuration.minuts =floor( Remainder / NumberOfMinuts);
    Remainder = Remainder % NumberOfMinuts;
    TaskDuration.seconds = Remainder;
    return TaskDuration;

}

void PrintTaskDurationDetail(strTaskDuration TaskDuration) {

    cout << TaskDuration.days<<" :" << TaskDuration.heure <<" :" << TaskDuration.minuts <<" :" << TaskDuration.seconds;

}
int main() {
    int TotalSeconds = EntrNumber("Plase entre total Seconde");
    PrintTaskDurationDetail(TaskDurationOfSecond(TotalSeconds));
}