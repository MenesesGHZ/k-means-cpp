#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point{
    private:
        float x=0.0,
	      y=0.0;
        int colorRGB[3]={0,0,0};
    public:
        Point(float,float);
        int* get_color();
        float get_x();
        float get_y();
	float getDistance(Point &);
	void set_x(float);
        void set_y(float);
        void info();
        bool operator==(const Point &) const;
        bool operator!=(const Point &) const;
	friend std::ostream &operator<<(std::ostream &, const Point &);
}

#endif
