#include <QtGui>
#include "processImage.h"

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF_8"));
    ProcessImage process;
    process.resize(640,480);
    process.show();

    return app.exec();
}
