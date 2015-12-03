#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main () {

    double a=12;
    a+=++a+a++;
    a=a+a ;
    cout<<a<<endl ;


	return 0;
}
