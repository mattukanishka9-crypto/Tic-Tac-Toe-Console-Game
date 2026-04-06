# Tic-Tac-Toe-Console-Game
Tic Tac Toe Game in C++

A simple console-based Tic Tac Toe game implemented in C++. This project allows two players to play against each other on the same computer. It demonstrates the use of C++ basics like loops, functions, arrays, and conditional statements.

Table of Contents
Features
Demo
Installation
How to Play
Code Structure
Contributing
License
Features
Two-player game (Player X and Player O)
Input validation to prevent overwriting moves
Display of game board after each move
Detects win, lose, or draw conditions
Simple and interactive console interface
Demo

Here’s an example of how the game looks in the console:     |     |     
  X  |  O  |  X  
_____|_____|_____
     |     |     
  O  |  X  |  O  
_____|_____|_____
     |     |     
  X  |     |     

Installation
1. Clone the repository:
   git clone https://github.com/<your-username>/<repository-name>.git

2.Navigate to the project folder: 
   cd <repository-name>

3. Compile the program using g++ (or any C++ compiler):
   g++ tic_tac_toe.cpp -o tic_tac_toe

4. Run The Executable:
    ./tic_tac_toe

 How to Play
1. Player X starts first, followed by Player O.
2. Enter the number corresponding to the cell where you want to place your mark:

 1 | 2 | 3
 4 | 5 | 6
 7 | 8 | 9

3. The game will display the board after each move.
4. First player to get 3 marks in a row (horizontally, vertically, or diagonally) wins.
5. If all cells are filled without a winner, the game is a draw.

- Code Structure
tic_tac_toe.cpp – Main program file containing:
Function to display the board
Function to check for a winner
Function to handle player moves
Main game loop
Contributing

-Contributions are welcome! Feel free to:

Add AI player
Enhance UI with colors
Improve input validation
Refactor code for better readability

Author:
KANISHKA 

 
