#include "demo1.h"
#include <QtWidgets/QApplication>
#include "QDebug"
#include "cudaPrint.cuh"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //��ӡ��ʾ��Ϣ
    qDebug() << (QString("this is c++ main"));
    CUDA_Printf(argc, argv);

    return a.exec();
}
