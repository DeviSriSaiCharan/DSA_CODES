#include <iostream>
#include <vector>
using namespace std;


//To rotate 90°
//--> tanspose
//--> reverse row

void Rotate(vector<vector<int>>& arr){
    int n = arr.size();
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n/2 ; j++){
            swap(arr[i][j],arr[i][n-j-1]);
        }
    }
}


int main(){

    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {6, 7, 8, 9},
        {11, 12, 13, 14},
        {16, 17, 18, 19},
    };

    Rotate(arr);

    for(int i=0 ; i<arr.size() ; i++){
        for(int j=0 ; j<arr[i].size() ; j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}