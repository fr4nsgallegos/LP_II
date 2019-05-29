//#include "stdafx.h"
#include "Circle.h"


Circle::Circle(string pcolor, int pradio, int px, int py):Figure(pcolor)
{
	color = pcolor;
	radio = pradio;
	center->set_xy(px, py);
}


Circle::~Circle()
{
	delete center;
}

void Circle::draw(QPainter * painter)
{

    painter->drawEllipse(center->getx(),center->gety(),radio,radio);

}
Point * Circle::getCenter()
{
    return center;
}
