#include <iostream>
using namespace std;

// Sort 0's, 1's and 2's

void Sort(int arr[], int length){

    int left = 0;
    int right = length - 1;
    int index = 0;

    //If right > index --> all elemnets in right are 2, so we stop here
    while(index < right){
        if(arr[index] == 0){
            swap(arr[index], arr[left]);
            left++;
            index++;
        }
        else if(arr[index] == 2){
            swap(arr[index], arr[right]);
            right--;
            //We dont do index++ because we dont know what is the value of 2 if it is 2 we cant move to next index, so we check again at that index
        }
        else{
            index++;
        }
    }  
}

int main(){

    int arr[] = {2,0,2,1,1,0};

    Sort(arr, (sizeof(arr)/sizeof(arr[0])));

    for(int i=0 ; i<(sizeof(arr)/sizeof(arr[0])) ; i++){
        cout << arr[i] << " ";
    } 
}