class Solution {
public:
    int32_t fib(int32_t n) {
    if (n < 2) return n; 

    long prev = 0, curr = 1;
    for (int i = 2; i <= n; ++i) {
        long next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
    }
};