// Online C++ compiler to run C++ program online


#include <iostream>
#include <string>

using namespace std;

enum NumberType { odd  , even   };


int ReadNumber() {

	int num;
	cout << "entre un  number" << endl;
	cin >> num;

	return num;
}



NumberType checkNumberType(int num) {



	if (num % 2 == 0) {

		return NumberType::even;

	}
	else {



		return NumberType::odd;
	}





}




void Print(NumberType enNumber) {

	if (enNumber == NumberType::even)
		cout << "votre number est even \n";

	else
		cout << "votre number est odd \n";


}


int main()
{

	Print(checkNumberType(ReadNumber()));
}
