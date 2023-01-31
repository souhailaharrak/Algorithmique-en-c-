// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//mthode 1
float EntrNumber(string message) {

    float Number;
    cout << message << endl;
    cin >> Number;
    return Number;
}

float TotalSoonde(float days, float Hours, float minuts, float seconds) {

    float Total = (days * 24 * 60 * 60) + (Hours * 60 * 60) + (minuts * 60) + seconds;
    return Total;

}

int main() {
    float days = EntrNumber("entre Number of days");
    float Hours = EntrNumber("entre Number of heure");
    float minuts = EntrNumber("entre Number of minuts");
    float seconds = EntrNumber("entre Number of seconds");
    cout << TotalSoonde(days, Hours, minuts, seconds) << " Second";
}



//mthode 2
struct strTaskDuration {

    int days, heure, minuts, seconds;
};

 
float EntrNumber(string message) {

    float Number;
    cout << message << endl;
    cin >> Number;
    return Number;
}

strTaskDuration RadTaskDuration() {

    strTaskDuration TaskDuration;
    TaskDuration.days = EntrNumber("entre number of day");
    TaskDuration.heure = EntrNumber("entre number of Heure");
    TaskDuration.minuts = EntrNumber("entre number of minuts");
    TaskDuration.seconds = EntrNumber("entre number of seconds");
    return TaskDuration;
}

int TaskDurationOfSecond(strTaskDuration TaskDuration) {

    float Total = 0;
    Total = TaskDuration.days * 24 * 60 * 60;
    Total += TaskDuration.heure * 60 * 60;
    Total += TaskDuration.minuts * 60;
    Total += TaskDuration.seconds;
    return Total;
}

int main() {

    cout << "Task Duraction of second" << TaskDurationOfSecond(RadTaskDuration());
}