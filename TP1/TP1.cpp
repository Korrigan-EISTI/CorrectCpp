#include <iostream>
#include <string>
#include "TP1.h"

int main(int argc, char** argv) 
{
	Finance f(0.045);
	int a(0), m(0);

	std::cout << "Entrer une ann�e et un montant \n";
	std::cin >> a;
	std::cin >> m;
	std::cout << std::string("Dans ") + std::to_string(a) + " ann�e, vous poc�derez " + std::to_string(f.choisirProbleme(Finance::TAUX_INTERETS, m, a, 0)) + "euros\n";
	
	std::cout << "Entrer une montant plac� et un montant � d�passer \n";
	std::cin >> a;
	std::cin >> m;
	std::cout << std::string("Dans ") + std::to_string((int)f.choisirProbleme(Finance::DEPASSE, a, 0, m)) + " ann�e, vous poc�derez " + std::to_string((double)m) + "euros\n";
}