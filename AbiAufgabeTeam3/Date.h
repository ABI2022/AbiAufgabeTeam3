#pragma once
class Date
{
private:
	int tag;
	int monat;
	int jahr;
public:
	Date();
	Date(int tag, int monat, int jahr);
	~Date();
	
	int getTag();
	int getMonat();
	int getJahr();
};

