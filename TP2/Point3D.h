#ifndef _POINT3D_H
#define _POINT3D_H

#include <string>
#include <limits>

#define MAX_DOUBLE std::numeric_limits<double>::max() 

class Point3D {
public:
	Point3D();
	Point3D(double fx, double fy);
	Point3D(double fx, double fy, double fz);
	Point3D(const Point3D& point);

	~Point3D();

	double getX() const { return x; }
	double getY() const { return y; }
	double getZ() const { return z; }

	void setX(double fx) { x = fx; }
	void setY(double fy) { y = fy; }
	void setZ(double fz) { z = fz; }

	std::string showPoint() const { return std::string("(") + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")"; }

	bool compare(const Point3D& point);
private:
	double x;
	double y;
	double z;
};

#endif


