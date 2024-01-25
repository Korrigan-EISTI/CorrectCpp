#pragma once

class Finance {
public:
	enum TypeProbleme {
		TAUX_INTERETS,
		DEPASSE
	};
public:
	Finance(double interet);

	double choisirProbleme(TypeProbleme prbl, int valeurPlacee, size_t annee, int valeurVoulue);
	double previsionInteret(int valeurPlacee, size_t annee);
	int nombreAnneeAtteindreCertaineValeur(int valeurPlacee, int valeurVoulue);

private:
	double m_tauxInteret;
};
