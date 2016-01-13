#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;



int main () {

    double array[4]={0};


    for(int i=0; i<4; i++){
        cout<<"Zahl "<<i+1<<" eingeben: "<<endl;
        cin>>array[i];
    }

     for(int i=3; i>=0; i--){
            cout<<"Zahl "<<i+1<<" "<<array[i]<<endl;
    }

	return 0;
}
