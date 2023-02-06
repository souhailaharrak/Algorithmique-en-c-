// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;



enum  monthofYear {
    jan = 1, feb = 2, mar = 3, apr = 4, may = 5, jun = 6, july = 7, augu = 8, sep = 9, oct = 10, nove = 11, dec = 12
};


int ReadNumberInRange(string message, int from, int To) {

    int month = 0;
    do {
        cout << message << endl;
        cin >> month;

    } while (month<from || month>To);

    return month;
}


monthofYear ReadmonthOfYear() {

    return (monthofYear)ReadNumberInRange("Please enter a month", 0, 12);
}

string  GetmonthOfYear(monthofYear month) {


    switch (month) {
    case monthofYear::jan:
        return "c'est january";
        break;
    case monthofYear::feb:
        return "c'est february";
        break;
    case monthofYear::mar:
        return " c'est march";
        break;
    case monthofYear::apr:
        return " c'est april";
        break;
    case monthofYear::may:
        cout << " c'est may";
        break;
    case monthofYear::jun:
        return " c'est june";
        break;
    case monthofYear::july:
        return " c'est july";
        break;
    case monthofYear::augu:
        return " c'est august";
        break;
    case monthofYear::sep:
        return " c'est september";
        break;
    case monthofYear::oct:
        return " c'est octeber";
        break;
    case monthofYear::nove:
        return " c'est november";
        break;
    case monthofYear::dec:
        return " c'est december";
        break;
    default:
        return "Wrong month";
    }
};


int main() {
    cout << GetmonthOfYear(ReadmonthOfYear());

}