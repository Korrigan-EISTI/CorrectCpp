#include "Date.h"

Date::Date() : jour(1), mois(1), annee(1970)
{
}

Date::Date(short j, short m, int a) : 
	jour(j), mois(m), annee(a)
{
}

Date::Date(const Date& date) :
	jour(date.getJour()),
	mois(date.getMois()),
	annee(date.getAnnee())
{

}

Date::~Date()
{
}

Date Date::operator=(const Date& date)
{
	jour = date.getJour();
	mois = date.getMois();
	annee = date.getAnnee();

	return *this;
}

bool Date::operator==(const Date& date)
{
	if (jour == date.getJour() && mois == date.getMois() && annee == date.getAnnee()) return true;
	return false;
}

bool Date::operator!=(const Date& date)
{
	if (jour != date.getJour() || mois != date.getMois() || annee != date.getAnnee()) return true;
	return false;
}

bool Date::operator<(const Date& date)
{
	if (annee < date.getAnnee() && mois < date.getMois() && jour < date.getJour()) return true;
	return false;
}

bool Date::operator<=(const Date& date)
{
	if (annee <= date.getAnnee() && mois <= date.getMois() && jour <= date.getJour()) return true;
	return false;
}

bool Date::operator>(const Date& date)
{
	if (annee > date.getAnnee() && mois > date.getMois() && jour > date.getJour()) return true;
	return false;
}

bool Date::operator>=(const Date& date)
{
	if (annee >= date.getAnnee() && mois >= date.getMois() && jour >= date.getJour()) return true;
	return false;
}