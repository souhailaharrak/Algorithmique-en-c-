
#include<iostream>
#include<string>
using namespace std;
#include <cmath>


float ReadCIRCONFÉRENCE() {
    int l;
    cout << "enter rayon \n";
    cin >> l;

    return l;
}

float  CricleAreaByCIRCONFÉRENCE(float l) {

    const float pi = 3.14;
    float area = (pow(l, 2)) / (4 * pi);
    return area;

}

void PrintResult(float area) {

    cout << "  cricle area : " << area;
}


int main()
{

    PrintResult(CricleAreaByCIRCONFÉRENCE(ReadCIRCONFÉRENCE()));

    return 0;

}


 //methode 2
#include <cmath>
enum PrimeNotPrime {
    NotPrime,
    prime

};

int  ReadNumbers(string message) {
    int  Number;
    do {

        cout << message << endl;
        cin >> Number;

    } while (Number < 0);


    return Number;
}


PrimeNotPrime checkPrime(int Number){
 
  int M=round(Number/2);
  
  for(int counter=2;counter<=M;counter++){
      if(Number % counter==0){
          
          return PrimeNotPrime::NotPrime;
          
      } 
         
          return PrimeNotPrime::prime;
       
  }
 
    
}


 

void Print(int Number) {

    switch (checkPrime(Number)){
        
        case PrimeNotPrime::prime:
           cout << "prime \n";
           break;
            case PrimeNotPrime::NotPrime:
            cout << "NotPrime\n";
           break;
            
    }
 


}

int main() {
    Print( (ReadNumbers("entre un number")));
}
