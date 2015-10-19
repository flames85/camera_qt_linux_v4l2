#ifndef PROCESSIMAGE_H
#define PROCESSIMAGE_H

#include <QtGui>
#include "videodevice.h"

class ProcessImage : public QWidget
{
    Q_OBJECT
public:
    ProcessImage(QWidget *parent=0);
    ~ProcessImage();

private:
    QPainter *painter;
    QLabel *label;
    QImage *frame;
    //QPixmap *frame;
    QTimer *timer;
    int rs;
    uchar *pp;
    uchar * p;
    unsigned int len;
    int convert_yuv_to_rgb_pixel(int y, int u, int v);
    int convert_yuv_to_rgb_buffer(unsigned char *yuv, unsigned char *rgb, unsigned int width, unsigned int height);
    VideoDevice *vd;

private slots:
    void paintEvent(QPaintEvent *);
    void display_error(QString err);


};

#endif
