#include <iostream>
#include <climits>
using namespace std;

void maxSubArraySum1(int *arr,int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n;end++){
            int currSum = 0;
            for(int i=start; i<=end;i++){
                currSum += arr[i];
            }
            maxSum = max(maxSum,currSum);
        }
}
cout<<"Max sum is: "<<maxSum<<endl;
}

void maxSubArraySum2(int *arr,int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        int currSum = 0;
        for(int end=start; end<n;end++){
            currSum += arr[end];
            maxSum = max(maxSum,currSum);
        }
}
cout<<"Max sum is: "<<maxSum<<endl;
}

void withKadanesAlgo(int *arr,int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"Max sum is: "<<maxSum<<endl;
}


int main(){
    int arr[5] = {-8, -1, -5, -3, -2};
    int n = 5;
    maxSubArraySum1(arr,n);
    maxSubArraySum2(arr,n);
    withKadanesAlgo(arr,n);
    return 0;
}