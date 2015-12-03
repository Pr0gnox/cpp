#include <iostream>

using namespace std ;


int main () {

    int input;
    int mini;
    int zahl;

    //Überprüfen welches die kleinste Zahl ist
    for(int i = 0; i<3; i++){
    cout<<(i+1)<<".Zahl: ";
    cin>>input;
        if(input < mini){
        mini=input;}
    }
    cout<<"Kleinste Zahl ist: "<<mini<<" !!!"<<endl;


	return 0;
}
