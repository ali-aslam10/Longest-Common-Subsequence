Longest Common Subsequence using simple recursion.

This is an optimization problem where the solution space is huge, i.e., there can be so many common subsequences 
of both strings, and we need to find a common subsequence with the longest length. One idea would be to explore
all the subsequences of both strings and find the longest among them.
When we need to explore all possibilities, we can use the idea of recursion. The critical question would be: 

How do we explore all the subsequences recursively?
Here we have one obvious choice at the start: Do the last characters of both strings equal? If both are equal,
that common character will be part of the longest subsequences. Let's assume the function Ics(s1,s2, i, j,v) 
returns the length of the longest common subsequence and store it in vector v.

Case 1: If the last characters of strings are equal, i.e., if(s1[i-1] == s2[j-1]), then the problem gets reduced 
to finding the longest common subsequence of the remaining substrings of input size (i-1 and j-1).

So we recursively call the same function with input size (i-1, j-1) and add 1 to get the output for input size (i, j), 
i.e., Ics(s1, s2, i, j,v) = 1 + Ics(s1, s2, i - 1, j -1,v)
Case 2: If the last characters of the strings are not equal, i.e., if (s1[i-1] != s2[j-1]), there are two possibilities 
for smaller sub-problems, and we need to find the maximum of them.

1. Find the length of the longest common subsequence by excluding the last character of string s1 and including
the last character of string s2, i.e., Ics(s1, s2, i -1, j,v).

2. Find the length of the longest common subsequence by including the last character of string s1 and excluding the 
last character of string s2, I.e., Ics(s1, s2, i,j-1,v).

Either of these possibilities can provide the length of the longest common subsequence. So, we need to take the maximum 
of both possibilities,
i.e. Ics(s1, s2, i, j,v) = max (Ics(s1, s2, i- 1, j,v), Ics(s1, s2, i, j – 1,v) ).

Base case: Recursion will terminate when any one of the string sizes gets reduced to 0 
i.e. if (i == 0 || j == 0), return 0.

Implementation of above approach given in lcsRecursive.cpp file

Now let's discuss Time and space complexity analysis.

There are two choices for each character in a string: it can either be included in the subsequence or not.
This means there are 2^i possible subsequences of s1 and 2^j possible subsequences of s2. So in this recursive approach,
we are comparing each subsequence of s1 with each subsequence of s2. So the overall time complexity is O(2^i * 2^j) = O(2^(i + j)),
which is inefficient for large values of i and j.

The space complexity of this solution depends on the size of the call stack, which is equal to the height of the recursion tree.
In this case, input parameters (i and j) are at most decreasing by 1 on each recursive call and terminate when either i or j becomes 0. 
The height of the recursion tree in the worst case will be O(max(i, j) and space complexity = O(max(i, j)).It is important to note that size of vector used to store LCS in worst case will not exceed min(i, j). 
