URI Online Judge | 2493

# Jogo do Operador

By João Marcos Salvanini Bellini de Moraes, IFSULDEMINAS BR Brazil

Timelimit: 1

Samu Elmito loves creating peculiar games to challenge his friends. This time, he made a game called "Jogo do Operador" (Operation Game), in which he creates basic expresssions and each player must choose an expression and fill the gap with the correct operation to validate it. The players may choose 1 out of 3 operations: addition, subtraction and multiplication. However, if the player thinks there's no operation among the 3 operations that validates the expression, he can anwser Impossible.

Your task is simple: given the expressions and the players' answer, determine which players won't proceed to the next phase of the game.

## Input

The input consists of an integer T (2 ≤ T ≤ 50) that indicates the number of expression and the number of players. Each test case consists of T expressions like "X Y=Z", indicating that X operation Y (0 ≤ X, Y ≤ 103) is equal to Z (-103 ≤ Z ≤ 106), followed by T players and his respective answers like "N E R", with N being the player's name (up to 50 characters and no blank spaces), E being the index of the chosen expression (1 ≤ E ≤ T) and R the answer (+, -, * or I, indicating Impossible). Read input until EOF.

## Output

For each test case, if every player can proceed, print "You Shall All Pass!"; if no player can proceed, print "None Shall Pass!"; otherwise, print, in lexicographical order and between blank spaces, the name of the players who gave the wrong answer and won't proceed to the next phase.

Input Sample|	Output Sample
|-|-|
3|Aline Samuel
8 4=5|None Shall Pass!
2 5=5
1 3=4
Samuel 2 +
Abner 3 +
Aline 1 *
2
1 2=-1
0 7=7
Luiz 2 -
Absolut 1 +