#include <iostream>
using namespace std;

int Missing(int arr[], int min, int high, int n){
    int sum = high*(high+1)/2 - min*(min+1)/2 + 1;

    int total = 0;
    for(int i=0 ; i<n ; i++){
        total += arr[i];
    }

    return sum - total;
}

int main(){

    int min = 1;
    int max = 8;
    int arr[] = {1,7,3,2,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<Missing(arr, min, max, n);

    return 0;
}