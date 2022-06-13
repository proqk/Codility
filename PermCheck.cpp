// first solution -------------------------------------------------------------------
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    long sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    long sum2 = 0;
    for(auto x: A){
        sum2+=x;
    }
    if(sum==sum2) return 1;
    else return 0;
}


// wrong solution - 75%
// got incorrect answer with all of the case that total sum is correct, but it is not a permutation
// ex) [4,1,3,2] and [4,1,2,2,1]
// also the case that all the same values


// second solution -------------------------------------------------------------------
// you can use includes, for example:
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    int biggest = *max_element(A.begin(), A.end());
    long sum = 0;
    //for(int i=1;i<=n;i++) sum+=i;
    sum = (biggest*(biggest+1))/2;
//    sum = (n) * (n+1) /2;

    long sum2 = 0;
    for(auto x: A) sum2+=x;

    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());

    long sum3 = 0;
    for(auto x: A) sum3+=x;
    
    if(sum==sum2 && sum == sum3) return 1;
    else return 0;
}


// 83%


// final solution -------------------------------------------------------------------
// you can use includes, for example:
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    for(int i=0;i<A.size();i++){
        if(A[i]!=(i+1)) return 0;
    }
    return 1;
}

// simple is the best...
