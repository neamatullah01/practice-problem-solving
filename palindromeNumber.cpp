#include <iostream>
using namespace std;

int reverse(int num){
    int res=0;
    while(num > 0){
        int lastDig = num % 10;
        res = res * 10 + lastDig;
        num = num / 10;
    }
    return res;
}

int main(){
    int num = 121;
    int revNum = reverse(num);
    if(num == revNum){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
}