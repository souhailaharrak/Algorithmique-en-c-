// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

struct  piggyBankcontenet {

    int dollars;
    int pennies;
    int dimes;
    int nickils;
    int quartes;
};



piggyBankcontenet ReadPiggyBankcontenet() {

    piggyBankcontenet PiggyBankcontenet;


    cout << "entre votre dollars" << endl;
    cin >> PiggyBankcontenet.dollars;

    cout << "entre votre pennies" << endl;
    cin >> PiggyBankcontenet.pennies;

    cout << "entre votre dimes" << endl;
    cin >> PiggyBankcontenet.dimes;

    cout << "entre votre nickils" << endl;
    cin >> PiggyBankcontenet.nickils;

    cout << "entre votre quartes" << endl;
    cin >> PiggyBankcontenet.quartes;
    return PiggyBankcontenet;

};




float calculeTotalePenies(piggyBankcontenet PiggyBankcontenet) {

    float TotalePennies = PiggyBankcontenet.quartes * 100 + PiggyBankcontenet.pennies * 1 + PiggyBankcontenet.nickils * 5 + PiggyBankcontenet.dollars * 25 + PiggyBankcontenet.dimes * 10;

    return TotalePennies;
}


void Result(piggyBankcontenet PiggyBankcontenet) {

    cout << calculeTotalePenies(PiggyBankcontenet) / 100 << endl;
    cout << calculeTotalePenies(PiggyBankcontenet) << endl;

}





int main() {

    Result(ReadPiggyBankcontenet());
}