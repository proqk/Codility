// you can use includes, for example:
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> chk(N, 0);
    int max_cnt = 0;
    int min_cnt = 0;
    for(int i=0;i<A.size();i++){
        if(A[i]<=N) {
            chk[A[i]-1] = max(chk[A[i]-1], min_cnt) + 1;
            if(max_cnt<chk[A[i]-1]) max_cnt = chk[A[i]-1];
        }
        else if(A[i]>N) {
            min_cnt = max_cnt;
        }
    }

    // go through and set the minimum value of all counters in case they have not been updated
    for(int i=0;i<chk.size();i++){
        chk[i] = max(min_cnt, chk[i]);
    }
    return chk;
}
