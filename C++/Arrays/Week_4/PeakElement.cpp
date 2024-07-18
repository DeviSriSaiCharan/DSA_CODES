#include <iostream>
#include <vector>
using namespace std;

int PeakElement(vector<int> arr){
    int n = arr.size();
    int left = 0;
    int right = n-1;

    while(left <= right){
        int mid = left + (right - left)/2;

        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) return mid;
        else if(arr[mid] > arr[mid-1]) left = mid + 1;
        else if(arr[mid] < arr[mid+1]) right = mid - 1;
    }

    return -1;
}

int main(){

    vector<int> arr = {10,20,30,40,50,60,80,70};

    cout<<PeakElement(arr);

    return 0;
}