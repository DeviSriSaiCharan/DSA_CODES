#include <iostream>
#include <vector>
using namespace std;

int LastOccurance(vector<int> arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;

    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == target){
            ans = mid;
            left = mid+1;
        }
        else if(arr[mid] > target) left = mid + 1;
        else right = mid - 1;
    }
    return ans;
}

int main(){

    vector<int> arr = {10,20,30,30,30,30,40,50};
    int target = 30;

    cout<<LastOccurance(arr, target);

    return 0;
}