#include <iostream>
#include <climits>
using namespace std;

void profit(int arr[], int n){
    int bestBuy[n];
    bestBuy[0] = INT_MAX;

    for(int i=1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1], arr[i-1]);
    }

    int maxProfit = 0;
    for(int i=1; i<n; i++){
        int profit = arr[i] - bestBuy[i];
        maxProfit = max(maxProfit, profit);
    }
    cout<<"Max profit is: "<<maxProfit<<endl;
}

int main(){
    int arr[6] = {7,1,5,3,6,4};
    int n=6;
    profit(arr, n);
    return 0;
}