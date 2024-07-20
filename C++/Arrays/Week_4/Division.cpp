#include <iostream>
#include <vector>
using namespace std;

//The search space is 0 -- a
//The predicate function is --> 
//==> we know dividend = divisor * quotient + remainder

int Divide(int a, int b){
    int left = 0;
    int right = a;
    int ans = -1;

    while(left <= right){
        int mid = (left + right)/2;  //-->This can be a possible answer lets check

        if(mid*b == a) return mid;
        else if(mid*b < a){
            left = mid +1;
            ans = mid;
        }
        else{
            right = mid -1;
        }
        
    }

    return ans;
}

int main(){

    int a = 7;
    int b = 1;

    cout<<Divide(abs(a),abs(b));

    //check sign of a, b and print + or - in solution

    return 0;
}