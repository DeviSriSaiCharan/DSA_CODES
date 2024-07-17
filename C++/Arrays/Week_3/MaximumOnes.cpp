#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


int MaximumOnes(vector<vector<int>> arr){
    int max = INT_MIN;

    for(int i=0 ; i<arr.size() ; i++){
        int count = 0;
        for(int j=0 ; j<arr[i].size() ; j++){
            if(arr[i][j] == 1) count++;
        }
        if(count > max) max = count;
    }

    return max;
}

int main(){

    vector<vector<int>> arr = {
        {1,0,0,0},
        {0,1,1,0},
        {0,1,1,0},
        {1,1,1,0},
        {1,1,0,0}
    };

    cout<<MaximumOnes(arr);
}