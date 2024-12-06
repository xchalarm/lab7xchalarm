#include<iostream>
#include<string>
using namespace std ;

string name ;
string movie , day , box;
int id ;

int main() {//Dialog of the first example is given below.


    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl ;
    getline(cin,name) ;
    cout << "?????: ";
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl ;
    cin >> id ;
    cout << name <<": "  ;
    
    
    cout <<"Fahsai: I think you may be GEAR " << (id/10000000)-12 << ". I have a free movie ticket for you." << endl ;
    cout <<"Fahsai: Let's go to the cinema together!!!" << endl ;
    cout <<"Fahsai: What movie do you want to watch?" << endl ; 
    cin.ignore() ;
    getline(cin,movie) ;
    cout << name +": ";
    cout <<"Fahsai: So....which day are you free to go with me?"<< endl ;
    cout << name +": ";
    getline(cin,day);
 
    cout<<"Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<<  movie   <<" with you.\n";
    cout << name +": ";
    getline(cin,box);
 
    cout<<"Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";

 return 0;
}
