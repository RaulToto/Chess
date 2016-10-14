#ifndef CHESS_H
#define CHESS_H

#include <QMainWindow>

namespace Ui {
class chess;
}

class chess : public QMainWindow
{
    Q_OBJECT

public:
    explicit chess(QWidget *parent = 0);
    ~chess();

private:
    Ui::chess *ui;
};

#endif // CHESS_H
