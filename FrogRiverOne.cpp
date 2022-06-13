// first solution ---------------------------------------------------------------
// you can use includes, for example:
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> nums;
    for(int i=1;i<=X;i++) nums.push_back(i);
    
    for(int i=0;i<A.size();i++){
        nums[A[i]-1] = 0;
//        for(auto x:nums) cout<<x<<" ";
//        cout<<endl;
        long sum = 0;
        for(auto x:nums) sum+=x;
        if(sum==0) return i;
    }
    return -1;
}

// time complexity: O(N ** 2)
// timeout error in the large number case


// final solution ---------------------------------------------------------------
// you can use includes, for example:
#include <algorithm>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> nums;
    int sum = 0;
    for(int i=1;i<=X;i++) {
        nums.push_back(i);
        sum+=i;
    }
    
    for(int i=0;i<A.size();i++){
        if(nums[A[i]-1] != 0){
            nums[A[i]-1] = 0;
            sum-=A[i];
           // cout<<sum<<" ";
            if(sum==0) return i;
        }
    }
    return -1;
}

// time complexity: O(N) 
