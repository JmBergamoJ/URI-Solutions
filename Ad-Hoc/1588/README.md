# URI Online Judge | 1588
## Help the Federation
By Bruno Adami, Universidade de São Paulo - São Carlos BR Brazil
Timelimit: 1
The football federation hired you to organize the scoreboard of the tournament. You will receive a list with some past matches and you must sort the teams accordingly. A win grants 3 points, a draw 1 point and if the team lost it receives nothing.

Read carefully the regulation on how the scoreboard should be organized: First comes the team with more points. Then if there is a draw, the team with more wins should come first. If there is still a draw, the team with more goals should come first. At last, if none of the above sorting criterias is fulfilled, the team that comes first in the input should appear first.

Given the teams and the games, sort them and output the scoreboard.

## Input

In the first line, there is an integer T (T ≤ 100), that indicates the number of test cases.

In the first line of each test case we have two numbers, N (2 ≤ N ≤ 20* or 2 ≤ N ≤ 100**) and M (1 ≤ M ≤ 100* or 1 ≤ M ≤ 1000**), indicating how many teams are in the championship and how many matches were already played. The next N lines contain the team names. They are all unique and contain only lowercase letters of the English alphabet. The following M lines contain the match information with the following format: X teamA Y teamB, indicating that the teamA played against the teamB and the first scored X goals and the second Y goals.The strings have size between 1 and 20 and the number of goals of a team during a match will be between 0 and 100. A team never plays with itself, but it can play any number of times with another team.

*for around 90% of the test cases;
**for the other cases.

## Output

Output the sorted scoreboard team names, one per line. It is not necessary to print anything between the test cases!

Sample Input|	Sample Output
|-|-|
3|palmeiras
2 2|santos
palmeiras|b
santos|a
1 palmeiras 2 santos|b
2 palmeiras 0 santos|a
2 2|d
b|c
a|
1 a 1 b|
1 b 1 a|
4 7|
b|
a|
c|
d|
2 a 1 b|
1 b 1 a|
2 c 3 a|
4 b 2 d|
0 b 1 c|
1 b 0 c|
7 d 1 b|