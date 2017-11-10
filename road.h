#ifndef ROAD_H
#define ROAD_H

#include <QtCore>
#include <QtWidgets>
#include "trafficlight.h"
#include "commonenum.h"
class road
{
public:
    static QPainterPath getLeft(region approach);
    static QPainterPath getThrough(region approach,int lane);
    static QPainterPath getRight(region approach);
protected:
    static QPainterPath get_1_1();
    static QPainterPath get_1_2();
    static QPainterPath get_1_3();
    static QPainterPath get_1_4();
    static QPainterPath get_1_5();
    static QPainterPath get_2_1();
    static QPainterPath get_2_2();
    static QPainterPath get_2_3();
    static QPainterPath get_2_4();
    static QPainterPath get_2_5();
    static QPainterPath get_3_1();
    static QPainterPath get_3_2();
    static QPainterPath get_3_3();
    static QPainterPath get_3_4();
    static QPainterPath get_3_5();
    static QPainterPath get_4_1();
    static QPainterPath get_4_2();
    static QPainterPath get_4_3();
    static QPainterPath get_4_4();
    static QPainterPath get_4_5();
private:
    static QPainterPath draw_1_1();
    static QPainterPath draw_1_2();
    static QPainterPath draw_1_3();
    static QPainterPath draw_1_4();
    static QPainterPath draw_1_5();
    static QPainterPath draw_2_1();
    static QPainterPath draw_2_2();
    static QPainterPath draw_2_3();
    static QPainterPath draw_2_4();
    static QPainterPath draw_2_5();
    static QPainterPath draw_3_1();
    static QPainterPath draw_3_2();
    static QPainterPath draw_3_3();
    static QPainterPath draw_3_4();
    static QPainterPath draw_3_5();
    static QPainterPath draw_4_1();
    static QPainterPath draw_4_2();
    static QPainterPath draw_4_3();
    static QPainterPath draw_4_4();
    static QPainterPath draw_4_5();
};

#endif // ROAD_H
