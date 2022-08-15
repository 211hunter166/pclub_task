# Problem statement:-

A sniper is tasked to get rid of the enemy troops in a particular area of high strategic importance. Being an efficient soldier he asks the analyst (you) to tell him the minimum number of bullets that he would require to complete the mission.
You are provided with the intelligence of enemies' number, location and elevation in the form of an array A of size N, where a[i] is the height of the enemy located at the ith position.
Also, every time the bullet hits an enemy its elevation decreases by 1, And it goes on to hit the enemy present at elevation=elevation(currently hit) - 1. 


# Constraints:-
#### It is guaranteed that the sum of n over all test cases does not exceed 10^5.
#### Also, $ 1 \le  $ a[i] \le n $  $  for all i < n .     
#### a[i] not equal to a[j] for all i < n .


# Input:-
#### Each test contains multiple test cases. The first line contains the number of test cases t (1<=t <= 10^3). The description of the test cases follows.
#### The first line of the test cases contains an integer n (the number of enemies).
#### The next line contains n integers representing the elevation of enemies.

# Output:-
#### For each test case print the minimum number of bullets that are required by the soldier. 
