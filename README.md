# Connect 4 / 4 in the row AI

Target of this project is to solve classic connect 4 game with 6 by 7 board. AI can always win a game if it starts first, or play optimally as the second player. If the first player makes a mistake, AI can win or at least draw the game. 

Evaluation of the board in the beginning is 1 (Which means that the first player can win in 41 move)

# Installation

```g++ 4rbst.cpp -o 4rbst -O3 -s```
or
```clang++ 4rbst.cpp -o 4rbst -O3 -s```

# Features

AI completely solves the game, thus always playing optimally. Due to hashing, ram usage for calculating the first move can be around 26gb. I have precalculated first 4 moves for both players in AIn.bin file, you can put it alongside the main program to get optimal performance.
