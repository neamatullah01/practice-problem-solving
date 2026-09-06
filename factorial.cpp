#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int ans = 1;
    for(int i = n-1; i>=0;i--){
        ans*=n-i;
    }

    // Better version
    // for (int i = 1; i <= n; i++) {
    //     ans *= i;
    // }

    cout<<"Ans: "<<ans<<endl;
}