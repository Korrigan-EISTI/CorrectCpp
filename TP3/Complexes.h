#ifndef _COMPLEXES_H
#define _COMPLEXES_H

#include <limits>

#define MAX_DOUBLE std::numeric_limits<double>::max()

class Complexes {
public:
	Complexes();
	Complexes(double real, double imaginary);
	Complexes(const Complexes& number);

	~Complexes();

	double getRealPart() const{ return m_real; }
	double getImaginaryPart() const{ return m_imaginary; }

	void setRealPart(double real) { m_real = real; }
	void setImaginaryPart(double im) { m_imaginary = im; }

	Complexes operator=(const Complexes& number);
	Complexes operator+(const Complexes& number);
	Complexes operator-(const Complexes& number);
	Complexes operator*(const Complexes& number);
	Complexes operator/(const Complexes& number);

	Complexes operator+=(const Complexes& number);
	Complexes operator-=(const Complexes& number);
	Complexes operator*=(const Complexes& number);
	Complexes operator/=(const Complexes& number);

private:
	double m_real;
	double m_imaginary;
};

#endif // !_COMPLEXES_H

