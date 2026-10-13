#include <iostream>
using namespace std;

int binSearch(int arr[], int n , int key){
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid = (st +end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1; // Key not found
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key = 7;
    int result = binSearch(arr, n, key);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
} 