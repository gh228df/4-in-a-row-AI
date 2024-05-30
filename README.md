# Connect 4 / 4 in the row AI

The goal of this project is to solve the classic Connect 4 game played on a 6 by 7 board. The AI is designed to consistently win when it plays first or to play optimally as the second player. If the first player makes a mistake, the AI can secure a win or at least force a draw.

The initial board evaluation is 2, indicating that the first player can force win in 40 moves.

# Installation

```g++ 4rbst.cpp -o 4rbst -O3 -s```<br>
```clang++ 4rbst.cpp -o 4rbst -O3 -s```<br>
```./4rbst```

# Features

The AI game solver guarantees optimal play by completely solving the game. By utilizing hashing, the RAM usage for calculating the first move can reach approximately 26GB.

Pre-calculated data for the first 4 moves for both players can be found in the AIn.bin file. Integrating this file with the main program ensures optimal performance. Additionally, new moves will be cached in the AIn.bin file.

# AIn.bin encoding

Cache Size: The first 64 bits indicate the size of the cache.<br>
Cached Positions: Following the cache size, positions for both players are stored as 64-bit unsigned variables <br>
Best Moves: The next part of the file contains best moves represented as 8-bit unsigned variables.<br>
Evaluation: The remaining part of the file contains board evaluation represented as 8-bit signed variables.<br>
