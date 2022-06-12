// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int n = N;
    int flag = 0;
    int cnt = 0;
    int res = 0;
    do{
        int bin = n%2;
        n/=2;
        if(bin == 1) flag += 1;

        if(flag == 1 && bin == 0){
            cnt++;
        }
        else if(flag == 2){
            flag = 1;
            if(cnt>res) res = cnt;
            cnt = 0;
        }

    }while(n>0);
    return res;
}

// 1000010001
// 100000
// n=1610612737 110000000000000000000000000
