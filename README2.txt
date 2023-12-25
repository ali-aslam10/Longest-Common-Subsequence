Longest Common Subsequence using dynamic programming

This is a dynamic programming problem, so we can solve it efficiently using the bottom-up approach. Here, our aim is to calculate the solution to smaller problems in an iterative way and store their result in a table. The critical question is: How do we build the solution in a bottom-up manner? Here are the steps:

1. Table structure: The state of smaller subproblems depends on input parameters m and n because at least one of them decreases after each recursive call. So we need to construct a 2D table mat[][] to store the solution of the subproblems.

2. Table size: The size of the 2D table will be equal to the number of different subproblems, which is (m + 1) х (n + 1).

3. Table initialization: Before building the solution using the iterative structure, we need to initialize the table by the smaller version of the solution, i.e., the base case. Here, m = 0 and n = 0 are the situations of the base case, so we initialize the first row and the first column of the table with 0.

4. Iterative structure to fill the table:

Now, we need to define an iterative structure to fill the table mat[][] i.e., a relation by which we build the solution of the larger problem using the solution of smaller subproblems in a bottom-up manner. We can easily define an iterative structure by using the recursive structure of the recursive solution.


mat[i][j] = 1 + mat[i-1][j-1], if (s1[i - 1] == s2[j - 1]).

mat[i][j] = max(mat[i][j - 1], mat[i - 1][0]), if (s1[i - 1] != s2[j - 1]).

5. Final solution: After filling the table iteratively, our final solution gets stored at the bottom left corner of the 2D table, i.e., mat[m][n] as an output.
Now, we back track by determining from we where we come to print LCS.

Implementation of above approach given in lcsDP.cpp file

Now let's discuss Time and space complexity analysis.

The time complexity of lcs function, which uses dynamic programming, is O(m⋅n), where m and n are the lengths of the input strings s1 and s2, respectively.
The function uses a 2D matrix (mat) of size (m+1) × (n+1) to store intermediate results. The nested loops iterate over all cells of this matrix once, performing constant-time operations in each iteration. Although there is loop for mat initialization and backtracking but dominant term is m⋅n. Therefore, the overall time complexity is O(m⋅n).


The space complexity of the lcs function is O(m⋅n) due to the 2D matrix (mat) used for dynamic programming. The matrix has dimensions (m+1) × (n+1) to accommodate the base cases (when either of the strings is empty).
Additionally, the function uses a character array (res) of size O(min(m,n)) to store the characters of the Longest Common Subsequence (LCS). 
Therefore, the dominant factor in space complexity is the 2D matrix, and 
the overall space complexity is O(m⋅n).
