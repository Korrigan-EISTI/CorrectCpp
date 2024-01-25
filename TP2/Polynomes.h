#ifndef _POLYNOMES_H
#define _POLYNOMES_H
#include <vector>
#include <string>

class Polynomes {
	typedef std::vector<double> Coeffs;
	typedef std::vector<double>::iterator CoeffsIterator;
public:
	Polynomes(int degre = 0);
	Polynomes(const Polynomes& poly);

	~Polynomes();


	int getDegre() const { return coeffs.size() - 1; }
	double getCoeff(size_t i) const { return coeffs[i]; }
	Coeffs getCoeffs() const { return coeffs; }
	void setCoeff(size_t i, double value) { if (coeffs.size() > i) coeffs[i] = value; }

	CoeffsIterator coeffsBegin() { return coeffs.begin(); }
	CoeffsIterator coeffsEnd() { return coeffs.end(); }

	void derivate();
	double calculate(double xValue);

	std::string showPolynome();

	Polynomes operator=(Polynomes point);

private:
	Coeffs coeffs;
};

#endif // !_POLYNOMES_H

