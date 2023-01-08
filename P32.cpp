
#include<iostream>
#include<string>
using namespace std;
#include <cmath>

struct POw {
    int Number;
    int M;
};

POw ReadNumber() {
    POw numbers;

    do {

        cout << "entre un number" << endl;
        cin >> numbers.Number;
        cout << "entre M" << endl;
        cin >> numbers.M;

    } while (numbers.Number < 0 && numbers.M < 0);

    return numbers;
};

void Power(POw numbers) {



    int a = pow(numbers.Number, numbers.M);


    cout << a << endl;

}



int main()
{

    Power(ReadNumber());


}





// methode 2

int ReadNumber(){
   int Number;
      
    do{
        
    cout<<"entre un number"<<endl;
    cin>>Number;
  
         
    }while( Number<0  );

   return Number ;
};
 
 int ReadM(){
     int M;
       cout<<"entre M"<<endl;
    cin>>M;
    return M;
 }
 
 
 
int Power( int Number,int M){
    
   
      if(M==0){
          return 1;
      }
      
      int p=1;
      for(int i=1;i<=M;i++){
          
          p=p*Number;
  
      }
      return p;
} 
 
 
 
int main()
{   
    
cout<< Power(ReadNumber(),ReadM()) ;
 

}
