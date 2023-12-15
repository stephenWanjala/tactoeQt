#include <QApplication>

#include "TicTactoe.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    TicTacToe game;
    game.show();

    return QApplication::exec();
}
