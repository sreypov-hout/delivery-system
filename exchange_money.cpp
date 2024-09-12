#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int op;
    float khmer,dolla,ex_kh,ex_do;
    do{
    cout<<"*-*-*-*-*-*-*-* Option *-*-*-*-*-*-*-*"<<endl;
    cout<<"1. Khmer to Dolla."<<endl;
    cout<<"2. Dolla to Khmer."<<endl;
    cout<<"Note : 1$ = 4100 riel"<<endl;
    cout<<"Input option : ";cin>>op;
    switch(op){
        case 1:{
            cout<<"Input money you want to Exchange: ";cin>>khmer;
            ex_kh = khmer / 4100;
            cout<<" Your money is = "<<fixed<<setprecision(2)<<ex_kh<<" Dolla";
        break;
        }
        case 2:{
            cout<<"Input money you want to Exchange: ";cin>>dolla;
            ex_do = dolla * 4100;
            cout<<" Your money is = "<<fixed<<setprecision(2)<<ex_do<<" Riel";
        break;
        }
        default:{
        	printf("\t\t Wrong operator.......");
			break;
        }
    }
    
 }while (op < 5);
 
}