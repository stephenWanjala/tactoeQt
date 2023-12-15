//
// Created by wanjala on 12/15/23.
//

#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QWidget>
#include <QPushButton>

class TicTacToe : public QWidget {
    Q_OBJECT

public:
    explicit TicTacToe(QWidget *parent = nullptr);

    private slots:
        void handleButtonClick();

private:
    enum class Player { None, X, O };
    Player currentPlayer;
    QVector<QPushButton*> buttons;
    QVector<Player> board;

    void resetGame();
    bool checkWin();
    bool checkDraw();
};

#endif // TICTACTOE_H

