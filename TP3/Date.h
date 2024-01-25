#ifndef _DATE_H
#define _DATE_H

class Date {
private:
	short jour;
	short mois;
	int annee;

public :
	Date();
	Date(short jour, short mois, int annee);
	Date(const Date& date);

	~Date();

	short getJour() const{ return jour; }
	short getMois() const{ return mois; }
	int getAnnee() const{ return annee; }

	void setJour(short j) { jour = j; }
	void setMois(short m) { mois = m; }
	void setAnnee(int a) { annee = a; }

	Date operator=(const Date& date);

	bool operator==(const Date& date);
	bool operator!=(const Date& date);
	bool operator<(const Date& date);
	bool operator>(const Date& date);
	bool operator<=(const Date& date);
	bool operator>=(const Date& date);
};

#endif // !_DATE_H
