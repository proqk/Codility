// you can use includes, for example:
#include <map>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    map<int, int> m;
    int n = A.size();
    int biggest = 0;
    int index = 0;
    for(int i=0;i<n;i++){
        if(m.find(A[i]) != m.end()){
            m[A[i]]++;
        }
        else{
            m.insert(pair<int,int>(A[i], 1));
        }

        if(biggest < m[A[i]]){
            biggest = m[A[i]];
            index = i;

            if(biggest > (n/2)) return index;
        }
    }
    return -1;
}
