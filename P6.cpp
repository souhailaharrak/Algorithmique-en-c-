// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;



enum notes {
    Pass, Fail
};

int ReaNote() {
    int mark;
    cout << "entre votre Note" << endl;
    cin >> mark;
    return mark;
}



notes CheckNote(int mark) {

    if (mark >= 50)
        return notes::Pass;

    else
        return notes::Fail;
}

void PrintNote(int mark) {

    if (CheckNote(mark) == notes::Pass)
        cout << "passs";
    else
        cout << "fail";

}






int main() {

    PrintNote(ReaNote());
}