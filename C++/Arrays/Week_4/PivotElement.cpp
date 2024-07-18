#include <iostream>
#include <vector>
using namespace std;

int PivotElement(vector<int> arr){
    int n = arr.size();
    int left = 0;
    int right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid-1]) return mid-1;
        else if(arr[mid] < arr[mid-1]) right = mid - 1;
        else if(arr[mid] > arr[mid-1]) left = mid + 1;
    }
    return -1;
}

int main(){
    //This is a rotated sorted array by 3
    vector<int> arr = {12,14,16,2,4,6,8,10};

    cout<<PivotElement(arr)<<endl;

    return 0;
}