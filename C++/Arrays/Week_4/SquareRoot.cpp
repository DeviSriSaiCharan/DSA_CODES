#include <iostream>
#include <vector>
using namespace std;

int SquareRoot(int x){
    int left = 0;
    int right = x;
    int ans;

    while(left <= right){
        int mid = (left + right)/2.0;

        if(mid*mid == x) return mid;
        else if(mid*mid > x) right = mid-1;
        else{
            ans = mid;
            left = mid+1;
        }
    }
    return ans;
}

int main(){

    int x = 8;

    cout<<SquareRoot(x);

    return 0;

}