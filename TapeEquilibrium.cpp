// first solution -------------------------------------------------------
// you can use includes, for example:
// #include <algorithm>
#include <cmath>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    int res = 1e9;
    for(int p = 1;p<n;p++){
        unsigned long long sum1 = 0, sum2=0;
        for(int i=0;i<p;i++){
            sum1+=A[i];
        }
        for(int i=p;i<n;i++){
            sum2+=A[i];
        }
        int num = (int)abs((double)sum1-(double)sum2);
        if(num<res) {
           
            res = num;
        }
    }
    return res;
}

// Task Score 30% Correctness 42% Performance 16% ...
// we must not use double for loops


// second solution -------------------------------------------------------
// you can use includes, for example:
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    int res = 1000;
    int sum = 0;
    for(auto x: A) sum+=x;
        
    int sum1 = 0, sum2=0;
    for(int i=0;i<n;i++){
        sum1+=A[i];
        sum2 = sum-sum1;

        int num = abs(sum1-sum2);
        if(num<res) {
            res = num;
        }
    }
    return res;
}

// simply think, actually no need to use double for loop because sum2 is sum - sum1
// Task Score 84% Correctness 71% Performance 100%


// third solution -------------------------------------------------------
// you can use includes, for example:
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    int res = 1000;
    int sum = 0;
    for(auto x: A) sum+=x;
        
    int sum1 = 0, sum2=0;
    for(int i=0;i<n-1;i++){
        sum1+=A[i];
        sum2 = sum-sum1;

        int num = abs(sum1-sum2);
        if(num<res) {
            res = num;
        }
    }
    return res;
}

// can't do the entire array, have to stop at one less than the max (but why?)
// anyway changed n to n-1
// but got wrong answer at double/two elements case. got 1000(initial number of res) expected 2000
// change the initial number of res value from 1000 to 2000
// Task Score 100% Correctness 100% Performance 100%


// final solution -----------------------------------------------------------------------
// you can use includes, for example:
#include <algorithm>
#include <limits>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    int res = numeric_limits<int>::max();
    int end = 0;
    for(auto x: A) end+=x;
        
    int front = 0;
    for(int i=0;i<n-1;i++){
        front+=A.at(i);
        end-=A.at(i);

        int num = abs(front-end);
        if(num<res) {
            res = num;
        }
    }
    return res;
}

// almost same with third solution
// Task Score 100% Correctness 100% Performance 100%
