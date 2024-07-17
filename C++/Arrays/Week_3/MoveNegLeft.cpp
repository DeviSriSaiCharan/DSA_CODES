#include <iostream>
using namespace std;

//Move all negative numbers to left and all postive numbers to right.

void MoveNegative(int arr[]){
    int positivePointer;

    for(int i=0 ; i<7 ; i++){
        if(arr[i] > 0){
            positivePointer = i;
            break;
        }
    }

    for(int negPointer = positivePointer + 1 ; negPointer < 7 ; negPointer++){
        if(arr[negPointer] < 0){
            swap(arr[negPointer], arr[positivePointer]);
            positivePointer++;
        }
    }
}

int main(){

    int arr[] = {23, -7, 12, -10, -11, 40, 60};

    MoveNegative(arr);

    for(int i=0 ; i<7 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}