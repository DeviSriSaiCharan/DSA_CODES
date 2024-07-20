#include <iostream>
#include <vector>
using namespace std;

int NearlySorted(vector<int> arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right){
        int mid = left + (right - left)/2;

        if(arr[mid - 1] == target) return mid-1;
        if(arr[mid] == target) return mid;
        if(arr[mid+1] == target) return mid+1;
        if(target > arr[mid])  left = mid+1;
        else right = mid-1;
    }
    return -1;
}

int main(){

    vector<int> arr = {20,10,30,50,40,70,60};
    int target = 0;

    cout<<NearlySorted(arr, target);

    return 0;
}