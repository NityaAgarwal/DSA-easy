//PROBLELM STATEMENT - 
// https://leetcode.com/problems/fibonacci-number/
//SOLUTION 1: 
int fib(int n) {

        if (n==0 || n ==1) return n;
        int prev1 = 1;
        int prev2 = 0;
        int f;
        for (int i = 2; i<=n; i++) {
            f = prev1 + prev2;
            prev2 = prev1;
            prev1 = f;
        }
        return f;
}
//EXPLANATION of solution 1- 
        /*
        iteration 1: 
        0      1       1       2       3       5....
        prev2  prev1   f

        iteration 2: 
        0      1       1       2       3       5....
               prev2   prev1   f
        
        iteration 3: 
        0      1       1       2       3       5....
                       prev2   prev1   f

        Notice the pattern - 
        thats why in the for loop, we wrote that 
        1. f = prev1 + prev2 (thats literally the definition of fibonacci)
        2. in next iteration, prev2 becomes current prev1
        3. in next iteration, prev1 becomes current f

        Time complexity = O(n)
        Space complexity = O(1)
        */
    

// SOLUTION 2 - RECURSION (not recommended)
        /*
        SOLUTION -
        int fib(int n) {
        //base condition
        if (n == 0) return 0;
        if (n == 1) return 1;

        //recursion
        return fib(n-1) + fib(n-2);
    }
        TIME COMPLEXITY - O(2^n) 
        because each node (fib(n)) splits into two more nodes (fib(n-1), fib(n-2))

        SPACE COMPLEXITY - O(n) 
        size of the call stack

        CONLUSION - inefficient because with each increment in 'n', time complexity is 
        increasing exponentially
        */
