#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<vector<int>> arr, int target){
    int rows = arr.size();
    int cols = arr[0].size();
    int n = rows*cols;
    int left = 0;
    int right = n - 1;

    while(left <= right){
        int mid = (left + right)/2;
        int rowIndex = mid/cols;
        int colIndex = mid%cols;

        if(arr[rowIndex][colIndex] == target) return mid;
        else if(arr[rowIndex][colIndex] > target) right = mid - 1;
        else left = mid + 1;
    }

    return -1;
}

int main(){

    vector<vector<int>> arr = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
    };

    cout<<BinarySearch(arr, 0)<<endl;

    return 0;
}