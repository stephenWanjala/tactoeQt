# Tic-Tac-Toe Game

This repository contains a simple implementation of a Tic-Tac-Toe game with a graphical user interface (GUI) using C++ and the Qt framework.

## Getting Started

### Prerequisites

- C++ compiler with support for C++23
- Qt 6 or later

### Building and Running

1. Clone the repository:

    ```bash
    git clone https://github.com/stephenWanjala/tactoeQt.git
    cd tactoe
    ```

2. Build the project:

    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```

3. Run the executable:

    ```bash
    ./tactoe
    ```

## How to Play

- Launch the game.
- Click on the cells to make your move (X or O).
- The game will notify you when a player wins or if it's a draw.

## Folder Structure

- `tactoe/`: Contains the source code.
    - `main.cpp`: Entry point of the application.
    - `TicTactoe.cpp` and `TicTactoe.h`: Implementation of the Tic-Tac-Toe game.
- `CMakeLists.txt`: CMake configuration file.
- ...


## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
