#include "Date.h"

Date::Date()
{
}

Date::Date(int tag, int monat, int jahr)
{
	this->tag = tag;
	this->monat = monat;
	this->jahr = jahr;
}

Date::~Date()
{
}

int Date::getTag()
{
	return tag;
}

int Date::getMonat()
{
	return monat;
}

int Date::getJahr()
{
	return jahr;
}
