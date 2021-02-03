#include "Date.h"

Date::Date()
{
	jahr = 0;
	monat = 0;
	tag = 0;
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

int Date::zsm()
{
	int zsm = 0;

	zsm = jahr * 10000;
	zsm += monat * 100;
	zsm += tag;
	return zsm;
}
