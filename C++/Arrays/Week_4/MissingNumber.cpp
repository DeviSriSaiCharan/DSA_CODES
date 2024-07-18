#include <iostream>
#include <vector>
using namespace std;

int MissingNumber(vector<int> arr){
    int n = arr.size();
    int left = 0;
    int right = n-1;

    while(left <= right){
        int mid = (left + right)/2;

        if(arr[mid] == mid+1){
            left = mid+1;
        }
        else if(arr[mid] == mid + 2){
            right = mid-1;
        }
        
    }
    return arr[right]+1;
}

int main(){ 

    vector<int> arr = {1,2,3,4,5,6,7,8};
    
    cout<<MissingNumber(arr)<<endl;

    return 0;
}