# Problem statement:-

Hunter(a sniper) is tasked to get rid of the enemy troops in a particular area of high strategic importance. Being an efficient soldier he asks the analyst (you) to tell him the minimum number of bullets that he would require to complete the mission.
You are provided with the intelligence of enemies' number, location and elevation in the form of an array A of size N, where a[i] is the height of the enemy located at the ith position.
Also, every time the bullet hits an enemy its elevation decreases by 1, And it goes on to hit the enemy present at elevation=elevation(currently hit) - 1. 


# Constraints:-
#### It is guaranteed that the sum of n over all test cases does not exceed $10^{5}$.
#### Also,1 <= a[i] <= n  for all i < n .     
#### a[i] $\neq$ a[j] for all ( i,j < n & i $\neq$ j) .


# Input:-
#### Each test contains multiple test cases. The first line contains the number of test cases t (1 <= t <= $10^{4}$). The description of the test cases follows.
#### The first line of the test cases contains an integer n (the number of enemies).
#### The next line contains n integers representing the elevation of enemies.

# Output:-
#### For each test case print the minimum number of bullets that are required by the soldier. 

# Sample test case:-
#### input 
##### 3
###### 3
1 2 3
###### 5
4 5 1 2 3
###### 7
6 4 7 5 1 2 3


#### output
##### 3
##### 4
##### 5


##### In First test case he will need 3 bullets to hit all the enemies.
##### In second case, he will need 3 bullets to hit 5,1&2 and a single bullet to hit 4&3. total 3+1=4
##### In Third case he needs 1 bullet for 6&5, 1 bullet for 4&3 and 3 bullets for 7,1&2 .total 1+1+3=5

