// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int ReadGrade() {
    int grade;
    do {

        cout << "entre votre grade" << endl;
        cin >> grade;

    } while (grade > 100 || grade < 0);

    return grade;
}


char verfierGrade(int grade) {

    if (grade >= 90) {

        return 'A';

    }
    else if (grade >= 80 || grade >= 89) {

        return 'B';
    }
    else if (grade > +70) {

        return 'C';
    }
    else if (grade > 60) {

        return 'D';
    }
    else if (grade > 50) {

        return 'E';

    }
    else {
        return 'F';;
    }

}

int main() {
    cout << verfierGrade(ReadGrade());
}