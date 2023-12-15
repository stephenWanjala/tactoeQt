//
// Created by wanjala on 12/15/23.
//

#include "TicTactoe.h"

#include <QGridLayout>
#include <QMessageBox>

TicTacToe::TicTacToe(QWidget *parent)
    : QWidget(parent), currentPlayer(Player::X), buttons(9), board(9, Player::None) {
    QGridLayout *gridLayout = new QGridLayout(this);

    for (int i = 0; i < 9; ++i) {
        buttons[i] = new QPushButton(this);
        buttons[i]->setFixedSize(100, 100);
        buttons[i]->setFont(QFont("Arial", 24));
        connect(buttons[i], &QPushButton::clicked, this, &TicTacToe::handleButtonClick);
        gridLayout->addWidget(buttons[i], i / 3, i % 3);
    }

    resetGame();
}

void TicTacToe::handleButtonClick() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    int index = buttons.indexOf(button);

    if (board[index] == Player::None) {
        board[index] = currentPlayer;
        button->setText(currentPlayer == Player::X ? "X" : "O");

        if (checkWin()) {
            QMessageBox::information(this, "Game Over", currentPlayer == Player::X ? "Player X wins!" : "Player O wins!");
            resetGame();
        } else if (checkDraw()) {
            QMessageBox::information(this, "Game Over", "It's a draw!");
            resetGame();
        } else {
            currentPlayer = (currentPlayer == Player::X) ? Player::O : Player::X;
        }
    }
}

void TicTacToe::resetGame() {
    for (int i = 0; i < 9; ++i) {
        buttons[i]->setText("");
        board[i] = Player::None;
    }

    currentPlayer = Player::X;
}

bool TicTacToe::checkWin() {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i * 3] != Player::None && board[i * 3] == board[i * 3 + 1] && board[i * 3] == board[i * 3 + 2]) {
            return true; // Row win
        }
    }

    // Check columns
    for (int i = 0; i < 3; ++i) {
        if (board[i] != Player::None && board[i] == board[i + 3] && board[i] == board[i + 6]) {
            return true; // Column win
        }
    }

    // Check diagonals
    if (board[0] != Player::None && board[0] == board[4] && board[0] == board[8]) {
        return true; // Main diagonal win
    }

    if (board[2] != Player::None && board[2] == board[4] && board[2] == board[6]) {
        return true; // Anti-diagonal win
    }

    return false;
}


bool TicTacToe::checkDraw() {
    // Check if the game is a draw (no empty cells left)
    return !board.contains(Player::None);
}
