#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int n= 10829;

    while(n > 0){
        int lastDigit = n%10;
        sum+=lastDigit;
        n = n / 10;
    }

    cout<<"SUM: "<<sum<<endl;
    return 0;
}