# Longest-Common-Subsequence

The longest common subsequence (LCS) is defined as the longest subsequence that is common to all the given sequences, provided that the elements of the subsequence are not required to occupy consecutive positions within the original sequences.
If S1 and S2 are the two given sequences then, Z is the common subsequence of S1 and S2 if Z is a subsequence of both S1 and S2.  
Furthermore, Z must be a strictly increasing sequence of the indices of both S1 and S2.  
In a strictly increasing sequence, the indices of the elements chosen from the original sequences must be in ascending order in Z
# Example

S1 = {B, C, D, A, A, C, D}  
S2 = {A, C, D, B, A, C}  
Then, common subsequences are {B, C}, {C, D, A, C}, {D, A, C}, {A, A, C}, {A, C}, {C, D} ….  
Among these subsequences, **{C, D, A, C} is the longest common subsequence.**  
Here we use two appproaches to solve the above problem 
# Discussed solution approaches
**Using simple recursion**  
**Using dynamic programming**  
Readme file for both approaches also available separately naming **readme1.txt** and **readme2.txt** respectively along with .ccp files to give complete description of respective approach.
