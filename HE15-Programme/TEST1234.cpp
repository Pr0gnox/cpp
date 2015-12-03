#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std ;

int main(){


    int a=1;
    int line=11;

    for(int a = 1; a < line; a++){//Aussere Schleife
        for(int b = 1; b < 11 ; b++){//Innere Schleife
        cout<<a*b<<" ";
        }
    cout<<endl;
    }



return 0;
}
