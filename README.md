# Connect 4 / 4 in the row AI

The goal of this project is to solve the classic Connect 4 game played on a 6 by 7 board. The AI is designed to consistently win when it plays first or to play optimally as the second player. If the first player makes a mistake, the AI can secure a win or at least force a draw.

The initial board evaluation is 2, indicating that the first player can force win in 40 moves.

# Installation

```g++ 4rbst.cpp -o 4rbst -O3 -s```<br>
```clang++ 4rbst.cpp -o 4rbst -O3 -s```<br>
```./4rbst```

# Features

AI guarantees to play optimally by completely solving the game. Solving Connect 4 for the first time may take up to about 300 seconds using the SPEED preset while using 12GB of memory or about 450 seconds with MEMORY_SAVE preset which uses 4.2GB of system memory.

Solving the game is not required because pre-calculated data for the first 4 moves for both players can be found in the AIn.bin file. Additionally, new moves will be cached in the AIn.bin file.

4rbst is the base game engine, it only computes one best move, while 4rbst2 computes all of the best moves for a given position, and then selects a random one to play. It also runs about twice as slow as the base one.

# AIn.bin encoding

Cache Size: The first 32 bits indicate the size of the cache.<br>
Cached Positions: Following the cache size, positions for both players are stored as 49-bit unsigned variables <br>
Best Moves: In the same variable the best move is stored as a 3-bit unsigned integer shifted by 52 bits or as a 7 bit number for the 4rbst2.<br>
Evaluation: The remaining part of the variable contains board evaluation represented as 8-bit signed variable shifted by 56 bits.<br>
