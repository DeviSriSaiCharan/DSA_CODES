#include <iostream>
#include <vector>
using namespace std;

int PivotElement(vector<int> arr){
    int n = arr.size();
    int left = 0;
    int right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(left == right) return left;
        
        if(mid+1 < n && arr[mid] > arr[mid+1]) return mid;
        else if(mid-1 >= 0 && arr[mid] < arr[mid-1]) return mid-1;
        else if(arr[mid] < arr[left]) right = mid-1;
        else left = mid + 1;        
    }
    return -1;
}

int BinarySearch(vector<int> arr, int left, int right, int target){
    
    while(left <= right){
        int mid = (left+right)/2;

        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) right = mid-1;
        else left = mid + 1;
    }
    return -1;
}

//Search in rotated sorted array
int SearchRotated(vector<int> arr, int target){
    int n = arr.size();
    int pivot = PivotElement(arr);

    return max(BinarySearch(arr, 0, pivot, target), BinarySearch(arr, pivot+1, n-1, target));
    
}

int main(){

    vector<int> arr = {1,3};
    int target = 0;

    cout<<SearchRotated(arr, target);

    return 0;
}