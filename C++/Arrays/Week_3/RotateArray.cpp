#include <iostream>
#include <vector>
using namespace std;

//Rotate array by k values

void Rotate(vector<int>& arr, int k){

    vector<int> sol(arr.size());

    for(int i=0 ; i<arr.size() ; i++){
        sol[(i+k)%arr.size()] = arr[i];
    }

    arr = sol; 
}


void reverse(vector<int> &arr, int left, int right){
    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void Rotate2(vector<int> &arr, int k){
    reverse(arr, 0, k);
    reverse(arr, k+1, arr.size()-1);
    reverse(arr, 0, arr.size()-1);
}

int main(){

    vector<int> arr = {10,20,30,40,50};
    int k=2;

    Rotate(arr, k);

    for(int i=0 ; i<arr.size() ; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;

    arr = {10,20,30,40,50};

    Rotate2(arr, k);

    for(int i=0 ; i<arr.size() ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}