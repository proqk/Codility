// you can use includes, for example:
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    for(int i=0;i<A.size();i+=2){
        if(A[i] != A[i+1]){
            return A[i];
        }
    }
}

// first solution -> make chk vector and count all numbers in vector A. a number that is counted just once is the answer. 
// second solution -> use std::find to find if this number puts first or second. if first, put it in another vector(vector<int> res), if second, erase that number from res vector. the last number in res vector is the answer.
// final solution -> sort A vector. loop through A vector and find a number that has only one
// DO NOT OVERTHINK. JUST MAKE THE PROBLEM SIMPLE
