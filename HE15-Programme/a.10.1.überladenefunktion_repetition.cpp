#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std ;


void overload(int x){
    cout<<"Dies ist ein int Variable: "<<x<<endl;}

void overload(char x){
    cout<<"Dies ist ein char Variable: "<<x<<endl;}
void overload(double x){
    cout<<"Dies ist eine double Variable: "<<x<<endl;}


int main () {

    overload(2);
    overload('*');
    overload(5.675);


	return 0;
}
