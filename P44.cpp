// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//methode 1
int day(string message) {

    int day = 0;


    cout << message << endl;
    cin >> day;
    return  day;



}

int swittch(int day) {


    switch (day) {
    case 1:
        cout << "c'est lundi";
        break;
    case 2:
        cout << "c'est mardi";
        break;
    case 3:
        cout << " c'est mercredi";
        break;
    case 4:
        cout << " c'est jeudi";
        break;
    case 5:
        cout << " c'est vendredi";
        break;
    case 6:
        cout << " c'est samedi";
        break;
    case 7:
        cout << " c'est dimanche";
        break;
    default:
        cout << "Wrong day";
    };
}


int main() {
    int TotalSeconds = day("Plase entre Day");
    swittch(TotalSeconds);

}

//methode 2


enum enDayofWeek {
    lun = 1, mar = 2, jeu = 3, mer = 4, ven = 5, sam = 6, dim = 7
};
int ReadNumberInRange(string message) {

    int day = 0;

    cout << message << endl;
    cin >> day;
    return  day;

}

enDayofWeek ReadDay() {

    return (enDayofWeek)ReadNumberInRange("Please enter Day");
}

string  GetDayOfWeek(enDayofWeek day) {


    switch (day) {
    case enDayofWeek::lun:
        return "c'est lundi";
        break;
    case enDayofWeek::mar:
        return "c'est mardi";
        break;
    case enDayofWeek::mer:
        return " c'est mercredi";
        break;
    case enDayofWeek::jeu:
        return " c'est jeudi";
        break;
    case enDayofWeek::ven:
        cout << " c'est vendredi";
        break;
    case enDayofWeek::sam:
        return " c'est samedi";
        break;
    case enDayofWeek::dim:
        return " c'est dimanche";
        break;
    default:
        return "Wrong day";
    }
};


int main() {
    cout << GetDayOfWeek(ReadDay());

}