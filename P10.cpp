// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


struct notes {

    int num1;
    int  num2;
    int num3;
};



notes ReaNumber() {
    notes numbers;
    cout << "entre  num1" << endl;
    cin >> numbers.num1;
    cout << "entre  num" << endl;
    cin >> numbers.num2;
    cout << "entre  num3" << endl;
    cin >> numbers.num3;
    return numbers;
}



float Somme(notes numbers) {

    int sum = numbers.num1 + numbers.num2 + numbers.num3;

    return sum;

}

float averge(notes numbers) {

    float avg = Somme(numbers) / 3;
    return avg;
}



void PrintNote(float avg) {

    cout << avg;

}






int main() {

    PrintNote(averge(ReaNumber()));
}