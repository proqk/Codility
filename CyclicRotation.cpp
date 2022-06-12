// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <deque>
using namespace std;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    // deque<int> q;
    // for(auto x: A){
    //     q.push_back(x);
    // }
    // cout<<q.front();
    // while(K--){
    //     int num = q.pop_back();
    //     q.push_front(num);
    // }
    // vector<int> res;
    // while(!q.empty()){
    //     res.push_back(q.pop_front());
    // }
    // return res;
    // my first solution. error
  
    int n = A.size();
    vector<int> v(n,0);

    if(n == 0) return v; //[0,0,0] case
    int index = 0;
    if(K%n) index = n - K%n;

    for(int i=0;i<n;i++){
        v[i] = A[index];
        index = (index+1)%n; //index++ didn't work
    }
    return v;
}
