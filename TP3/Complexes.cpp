#include "Complexes.h"

Complexes::Complexes() :
	m_real(MAX_DOUBLE), m_imaginary(MAX_DOUBLE)
{
}

Complexes::Complexes(double real, double imaginary) :
	m_real(real), m_imaginary(imaginary)
{
}

Complexes::Complexes(const Complexes& number) :
	m_real(number.getRealPart()), m_imaginary(number.getImaginaryPart())
{
}

Complexes::~Complexes()
{
}

Complexes Complexes::operator=(const Complexes& number)
{
	m_real = number.getRealPart();
	m_imaginary = number.getImaginaryPart();
	return *this;
}

Complexes Complexes::operator+(const Complexes& number)
{
	m_real += number.getRealPart();
	m_imaginary += number.getImaginaryPart();
	return *this;
}

Complexes Complexes::operator+=(const Complexes& number)
{
	m_real += number.getRealPart();
	m_imaginary += number.getImaginaryPart();
	return *this;
}

Complexes Complexes::operator-(const Complexes& number)
{
	m_real -= number.getRealPart();
	m_imaginary -= number.getImaginaryPart();
	return *this;
}

Complexes Complexes::operator-=(const Complexes& number)
{
	m_real -= number.getRealPart();
	m_imaginary -= number.getImaginaryPart();
	return *this;
}

Complexes Complexes::operator*=(const Complexes& number)
{
	double realPartMultiplication = (m_real * number.getRealPart()) - (m_imaginary * number.getImaginaryPart());
	double imPartMultiplication = (m_real * number.getImaginaryPart()) + (m_imaginary * number.getRealPart());
	m_real = realPartMultiplication;
	m_imaginary = imPartMultiplication;
	return *this;
}

Complexes Complexes::operator*(const Complexes& number)
{
	double realPartMultiplication = (m_real * number.getRealPart()) - (m_imaginary * number.getImaginaryPart());
	double imPartMultiplication = (m_real * number.getImaginaryPart()) + (m_imaginary * number.getRealPart());
	m_real = realPartMultiplication;
	m_imaginary = imPartMultiplication;
	return *this;
}

Complexes Complexes::operator/(const Complexes& number)
{
	double dem = (number.getRealPart() * number.getRealPart()) + (number.getImaginaryPart() * number.getImaginaryPart());
	Complexes newNumber(number.getRealPart() / dem, number.getImaginaryPart() / dem);
	return *this * newNumber;
}

Complexes Complexes::operator/=(const Complexes& number)
{
	double dem = (number.getRealPart() * number.getRealPart()) + (number.getImaginaryPart() * number.getImaginaryPart());
	Complexes newNumber(number.getRealPart() / dem, number.getImaginaryPart() / dem);
	return *this * newNumber;
}