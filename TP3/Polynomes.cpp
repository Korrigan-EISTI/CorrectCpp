#include "Polynomes.h"

Polynomes::Polynomes(int degree)
{
	for (size_t i = 0; i < degree; i++)
	{
		coeffs.push_back(0);
	}
	coeffs.push_back(1);
}

Polynomes::Polynomes(const Polynomes& poly) : coeffs(poly.getCoeffs())
{
}

Polynomes::~Polynomes()
{
	coeffs.clear();
}

std::string Polynomes::showPolynome()
{
	std::string str = "";
	size_t i = 0;
	for (CoeffsIterator itCoeff = coeffsBegin(); itCoeff != coeffsEnd(); itCoeff++)
	{
		double value = *itCoeff;
		if (i == 0)
			str += std::to_string(value) + " ";
		else
			str += std::string("+ ") + std::to_string(value) + " * x^" + std::to_string(i) + " ";
		i++;
	}
	return str;
}

void Polynomes::derivate()
{
	Coeffs newCoeffients;
	size_t i = 0;
	for (CoeffsIterator itCoeff = coeffsBegin(); itCoeff != coeffsEnd(); itCoeff++, i++)
	{
		if (i != 0)
		{
			double value = *itCoeff;
			value *= i;
			newCoeffients.push_back(value);
		}

	}
	coeffs.clear();
	coeffs = newCoeffients;
}

double Polynomes::calculate(double xValue)
{
	int taille = coeffs.size();
	if (taille == 0) {
		// Si le vecteur de coefficients est vide, le polyn�me est nul.
		return 0.0;
	}

	double resultat = coeffs[0];
	for (int i = 1; i < taille; ++i) {
		resultat = resultat * xValue + coeffs[i];
	}

	return resultat;
}

Polynomes Polynomes::operator=(Polynomes poly)
{
	coeffs.clear();
	for (CoeffsIterator itCoeff = poly.coeffsBegin(); itCoeff != poly.coeffsEnd(); itCoeff++)
	{
		double value = *itCoeff;
		coeffs.push_back(value);
	}
	return *this;
}


Polynomes Polynomes::operator*=(double value)
{
	for (size_t i = 0; i < coeffs.size(); i++)
	{
		coeffs[i] *= value;
	}
	return *this;
}

Polynomes Polynomes::operator*(double value)
{
	for (size_t i = 0; i < coeffs.size(); i++)
	{
		coeffs[i] *= value;
	}
	return *this;
}

Polynomes Polynomes::operator/(double value)
{
	for (size_t i = 0; i < coeffs.size(); i++)
	{
		coeffs[i] /= value;
	}
	return *this;
}

Polynomes Polynomes::operator/=(double value)
{
	for (size_t i = 0; i < coeffs.size(); i++)
	{
		coeffs[i] /= value;
	}
	return *this;
}

Polynomes Polynomes::operator+=(Polynomes poly)
{
	for (size_t i = 0; i < coeffs.size(); i++)
	{
		coeffs[i] += poly.getCoeff(i);
	}
	return *this;
}

Polynomes Polynomes::operator+(Polynomes poly)
{
	for (size_t i = 0; i < coeffs.size(); i++)
	{
		coeffs[i] += poly.getCoeff(i);
	}
	return *this;
}

Polynomes Polynomes::operator-=(Polynomes poly)
{
	for (size_t i = 0; i < coeffs.size(); i++)
	{
		coeffs[i] -= poly.getCoeff(i);
	}
	return *this;
}

Polynomes Polynomes::operator-(Polynomes poly)
{
	for (size_t i = 0; i < coeffs.size(); i++)
	{
		coeffs[i] -= poly.getCoeff(i);
	}
	return *this;
}

