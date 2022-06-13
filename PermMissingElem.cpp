// ------------------------------------------- first solution
// you can use includes, for example:
#include <algorithm>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==0) return 1; // empty list -> expected 1 (important!)
    else if(A.size()==1){
        if(A[0] != 1) return 1; // single element but not number 1 -> expected 1
        else if(A[0]==1) return 2; // single element that is number 1 -> expected 2 (important!)
    }
    else{
        sort(A.begin(), A.end());
        for(int i=1;i<=A.size();i++){
            if(A[i-1] != i) return i;
        }
    }
}

// there are many expection cases
// not recommend in actual test

// ------------------------------------------- second solution (final)
// you can use includes, for example:
#include <algorithm>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    sort(A.begin(), A.end());
    for(int i=1;i<=A.size();i++){
        if(A[i-1] != i) return i;
    }
    return A.size() + 1; // exception case

    /*
    A[0]=1
    A[1]=2
    A[2]=3
    A[4]=4
    expected = 5
    but the loop finished at number 4. so you must add exception return case
    */
}
