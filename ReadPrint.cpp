 

#include <iostream>
#include <string>

using namespace std;

void PrintName(string name) {

	cout << "votre name  est " << name;

}


string  ReadName() {
	string name;
	getline(cin, name);
	return name;
}


int main()
{
	PrintName(ReadName());
	 
}
 