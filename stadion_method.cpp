#include <iostream>
using namespace std;

void Stadion::setCountOfSpectators(int count_of_spectators1)
{
	count_of_spectators = count_of_spectators1;
}

void Stadion::getCountOfSpectators()
{
	cout << "count_of_spectators: " << count_of_spectators << endl;
}

void Stadion::setName(string name1)
{
	name = name1;
}

void Stadion::getName()
{
	cout << "name: " << name << endl;
}

void Stadion::setLightingPower(int lighting_power1)
{
	lighting_power = lighting_power1;
}

void Stadion::getLightingPower()
{
	cout << "lighting_power: " << lighting_power << endl;
}

void Stadion::setYearOfFoundation(int year_of_foundation1)
{
	year_of_foundation = year_of_foundation1;
}

void Stadion::getYearOfFoundation()
{
	cout << "year_of_foundation: " << year_of_foundation << endl;
}

void Stadion::setSizeOfField(int size_of_field1)
{
	size_of_field = size_of_field1;
}

void Stadion::getSizeOfField()
{
	cout << "size_of_field: " << size_of_field << endl;
}

void Stadion::setCountOfFootballMatchesPerYear(int count_of_football_matches_per_year1)
{
	count_of_football_matches_per_year = count_of_football_matches_per_year1;
}

void Stadion::getCountOfFootballMatchesPerYear()
{
	cout << "count_of_football_matches_per_year: " << count_of_football_matches_per_year << endl;
}

void Stadion::setCountry(string country1)
{
	country = country1;
}

void Stadion::getCountry()
{
	cout << "country: " << country << endl;
}

void Stadion::getInfo(Stadion obj)
{
	obj.getCountOfSpectators();
	obj.getName();
	obj.getLightingPower();
	obj.getYearOfFoundation();
	obj.getSizeOfField();
	obj.getCountOfFootballMatchesPerYear();
	obj.getCountry();
}

Stadion::Stadion() {}

Stadion::Stadion(int count_of_spectators, string name, int lighting_power, int year_of_foundation, int size_of_field, int count_of_football_matches_per_year, string country)
{
	setCountOfSpectators(count_of_spectators);
	setName(name);
	setLightingPower(lighting_power);
	setYearOfFoundation(year_of_foundation);
	setSizeOfField(size_of_field);
	setCountry(country);
	setCountOfFootballMatchesPerYear(count_of_football_matches_per_year);
}

Stadion::~Stadion()
{
	cout << "Blow up the stadion " << endl;
}