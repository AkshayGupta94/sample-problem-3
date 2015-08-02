
Problem Statement


There are N toilets in a row indexed from 1 to N. At a time, 2 people enter the washroom. The degree of dirtiness of each toilet is 0 initially and it increases by 1 after it is used each time. The 1st person occupies the 1st toilet with the lowest degree of dirtiness moving from 1 to N. The 2nd person occupies the toilet with the lowest degree of dirtiness moving from N to 1. The next two people enter the toilet when the first two people have left. Find the index of toilet and degree of dirtiness for the Mth person. 

Note In case M is odd, the last person walks into the washroom alone and occupies the least dirty toilet moving from 1 to N.

Input Format 
 The first line contains T, the number of test cases. Each test case consists of one line containing N, the number of toliets, and M, the person to enter the toilet, seperated by space.

Output Format 
 The index of the toilet used by M and its degree of dirtiness D. 

Constraints 
1?T?10 
1?N?50000 
1?M?106 
