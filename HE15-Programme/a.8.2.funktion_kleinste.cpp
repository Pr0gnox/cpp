#include <iostream>

using namespace std ;


    int kleinste(int zahl){ //unsigned kann auch verwendet werden. Ist in diesem Fall aber kein mus!

    int input;
    int mini;


    //Überprüfen welches die kleinste Zahl ist
    for(int i = 0; i<3; i++){
    cout<<(i+1)<<".Zahl: ";
    cin>>input;
        if(input < mini){
        mini=input;}
    }

    cout<<"Kleinste Zahl ist: "<<mini<<" !!!"<<endl;

return (mini);
}

int main () {

    int value = kleinste(1000);

    //cout<<"Kleinste Zahl: "<<endl;

    /*cout<<"Kleinste Zahl ist: "<<
    int value=kleinste(1000)
    cout<<" !!!"<<endl;
    */

	return 0;
}
