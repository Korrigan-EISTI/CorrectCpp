#include "TP1.h"

Finance::Finance(double interet)
{
	m_tauxInteret = 1 + interet;
}

double Finance::choisirProbleme(TypeProbleme probleme, int valeurPlacee, size_t annee, int valeurVoulue)
{
	switch (probleme) {
	case TAUX_INTERETS:
		return previsionInteret(valeurPlacee, annee);
		break;
	case DEPASSE:
		return nombreAnneeAtteindreCertaineValeur(valeurPlacee, valeurVoulue);
		break;
	default:
		break;
	}
}

double Finance::previsionInteret(int valeurPlacee, size_t annee)
{
	double valeur(valeurPlacee);
	for (size_t i = 0; i < annee; i++)
	{
		valeur *= m_tauxInteret;
	}
	return valeur;
}

int Finance::nombreAnneeAtteindreCertaineValeur(int valeurPlacee, int valeurVoulue)
{
	if (valeurPlacee > valeurVoulue)
		return 0;

	double valeur(valeurPlacee);
	int annee(0);
	while (valeur < valeurVoulue)
	{
		valeur *= m_tauxInteret;
		annee++;

	}
	return annee;
}