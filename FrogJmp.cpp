// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int goal = Y-X;
    if(goal%D) return goal/D+1;
    else return goal/D;
}

// using ceil is also a good solution:
// double numJumps = (((double)Y)-((double)X))/((double)D);
// return (ceil(numJumps));
