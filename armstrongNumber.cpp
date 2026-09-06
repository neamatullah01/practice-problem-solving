#include <iostream>
using namespace std;

int main(){
    int n = 371;
    int num = n;
    int cube = 0;

    while(num>0){
        int lastDig = num % 10;

        cube += lastDig * lastDig * lastDig;
        num /=10;
    }

    if(n == cube){
        cout<< "Armstrong Number\n";
    }
    else{
        cout<< "Not an Armstrong Number\n";
    }
}