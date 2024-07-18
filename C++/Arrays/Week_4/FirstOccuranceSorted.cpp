#include <iostream>
#include <vector>
using namespace std;

int FirstOccurance(vector<int> arr, int target){
    int left = 0;
    int right = arr.size()-1;
    int ans = -1;

    while(left <= right){
        int mid = (left+right)/2;

        if(arr[mid] == target){
            right = mid-1;
            ans = mid;
        }
        else if(arr[mid] > target) right = mid - 1;
        else left = mid + 1;
    }

    return ans;
}


int main(){

    vector<int> arr = {10,20,30,30,30,30,40,50};
    int target = 0;

    cout<<FirstOccurance(arr, target);

    return 0;
}