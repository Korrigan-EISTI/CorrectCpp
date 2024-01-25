#include <iostream>
#include <string>
#include "TP1.h"

int main(int argc, char** argv) 
{
	Finance f(0.045);
	int a(0), m(0);

	std::cout << "Entrer une année et un montant \n";
	std::cin >> a;
	std::cin >> m;
	std::cout << std::string("Dans ") + std::to_string(a) + " année, vous pocéderez " + std::to_string(f.choisirProbleme(Finance::TAUX_INTERETS, m, a, 0)) + "euros\n";
	
	std::cout << "Entrer une montant placé et un montant à dépasser \n";
	std::cin >> a;
	std::cin >> m;
	std::cout << std::string("Dans ") + std::to_string((int)f.choisirProbleme(Finance::DEPASSE, a, 0, m)) + " année, vous pocéderez " + std::to_string((double)m) + "euros\n";
}