# Skyscrapers Puzzle Solver

This project is a command-line solver for the Skyscrapers puzzle, implemented in C. The Skyscrapers puzzle is a logic game played on a grid, where each cell contains a building of a certain height. The goal is to fill the grid so that each row and column contains buildings of unique heights, and the clues around the grid indicate how many buildings are visible from that direction.

## Features

- Solves 4x4 Skyscrapers puzzles
- Validates input and handles errors gracefully
- Efficient backtracking algorithm for finding solutions
- Modular codebase with utility functions for string manipulation and grid operations

## Usage

### Compilation

To compile the project, run:

```sh
make
```

This will produce an executable named `skyscrapers`.

### Running

To solve a puzzle, run the executable with the clues as a single string argument, separated by spaces. The clues should be provided in the following order:

1. Top clues (left to right)
2. Bottom clues (left to right)
3. Left clues (top to bottom)
4. Right clues (top to bottom)

**Example:**

```sh
./skyscrapers "2 2 1 3 2 2 3 1 1 2 2 3 3 2 1 2"
```

If a solution exists, the program will print the solved grid. Otherwise, it will print `Error`.

## File Structure

```
src/                    - Source code files
├── skyscraper.c       - Main function and input parsing
├── puzzle.c           - Puzzle solving logic and grid printing
├── valid.c, valid2.c  - Validation functions for clues
└── utils.c, utils2.c, utils3.c - Utility functions
libs/skyscraper.h      - Header file with function prototypes and constants
Makefile               - Build instructions
```

## Example Output

```
1 3 4 2
4 2 1 3
3 4 2 1
2 1 3 4
```

## Dependencies

- Standard C library

## License

This project is provided for educational purposes.

## Author

Developed by nands93.
