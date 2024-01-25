// TP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "Permutation.h"
#include "Point3D.h"
#include "Polynomes.h"

int main()
{
	/* Tests exo 1 */
	int a, b;
	std::cout << "Entrez deux nombres à permuter\n";
	std::cin >> a;
	std::cin >> b;
	int tmpA = a, tmpB = b;
	Permutation p;
	p.permuterPassageEnParamètres(a, b);
	std::cout << "a = "+ std::to_string(a) + " et b = " + std::to_string(b) + "\n";

	a = tmpA; b = tmpB;
	p.permuterPassageEnPointeur(&a, &b);
	std::cout << "a = " + std::to_string(a) + " et b = " + std::to_string(b) + "\n";

	a = tmpA; b = tmpB;
	p.permuterPassageAdresse(a, b);
	std::cout << "a = " + std::to_string(a) + " et b = " + std::to_string(b) + "\n";

	/* Test Exo 2 */
	Point3D point1(1, 2, 3);
	Point3D point2(4, 5, 6);

	std::cout << "Le point 1 est : " + point1.showPoint() + " et le point 2 est : " + point2.showPoint() + "\n";
	
	if (point1.compare(point2))
		std::cout << "Les deux points sont egaux\n";
	else
		std::cout << "Les deux points ne sont pas egaux\n";
		
	/* Test Exo 3 */
	Polynomes poly(2);
	poly.setCoeff(0, 2); poly.setCoeff(1, 1); poly.setCoeff(2, 3);

	std::cout << "Le polynome est : " + poly.showPolynome() + "\n";
	std::cout << "La valeur avec 1 est : " + std::to_string(poly.calculate(1)) + "\n";
	std::cout << "Le degré est : " + std::to_string(poly.getDegre()) + "\n";

	poly.derivate();
	std::cout << "La dervivée est  : " + poly.showPolynome() + "\n";
}