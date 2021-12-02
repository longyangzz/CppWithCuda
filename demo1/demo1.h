#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_demo1.h"

class demo1 : public QMainWindow
{
    Q_OBJECT

public:
    demo1(QWidget *parent = Q_NULLPTR);

private:
    Ui::demo1Class ui;
};
