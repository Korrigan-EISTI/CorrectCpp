#include "Point3D.h"

Point3D::Point3D() : 
	x(MAX_DOUBLE), 
	y(MAX_DOUBLE), 
	z(MAX_DOUBLE) 
{

}

Point3D::Point3D(double fx, double fy) :
	x(fx), y(fy), z(MAX_DOUBLE)
{

}

Point3D::Point3D(double fx, double fy, double fz) : 
	x(fx), y(fy), z(fz)
{

}

Point3D::Point3D(const Point3D& point) :
	x(point.getX()), y(point.getY()), z(point.getZ())
{

}

Point3D::~Point3D() 
{
}

bool Point3D::compare(const Point3D& point) 
{
	if (x == point.getX() && y == point.getY() && z == point.getZ())
		return true;
	return false;
}