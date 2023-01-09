// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int ReadTotalSales() {
    int Total;
    do {

        cout << "entre votre grade" << endl;
        cin >> Total;

    } while (Total < 0);

    return Total;
}


float GetTotalSales(int Total) {

    if (Total >= 1000000) {

        return  0.01;

    }
    else if (Total >= 500000) {

        return  0.02;
    }
    else if (Total > 100000) {

        return  0.03;
    }
    else if (Total > 50000) {

        return  0.05;
    }
    else {
        return   0.00;
    }

}

float cacluleTotalComission(int Total) {

    cout << GetTotalSales(Total) * Total;

}



int main() {

    float TotalSales = ReadTotalSales();
    cout << "Totale Commision: " << cacluleTotalComission(TotalSales);
}