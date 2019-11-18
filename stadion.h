#include <iostream>
using namespace std;

class Stadion
{

private:
    int count_of_spectators;
    string name;
    int lighting_power;

public:
    int count_of_football_matches_per_year;
    string country;

    Stadion(int count_of_spectators, string name, int lighting_power, int year_of_foundation, int size_of_field, int count_of_football_matches_per_year, string country);
    Stadion();
    ~Stadion();

    void setCountOfSpectators(int count_of_spectators);
    void getCountOfSpectators();
    void setName(string name);
    void getName();
    void setLightingPower(int lighting_power);
    void getLightingPower();
    void setYearOfFoundation(int year_of_foundation);
    void getYearOfFoundation();
    void setSizeOfField(int size_of_field);
    void getSizeOfField();
    void getInfo(Stadion obj);
    void setCountOfFootballMatchesPerYear(int count_of_football_matches_per_year);
    void getCountOfFootballMatchesPerYear();
    void setCountry(string country);
    void getCountry();

protected:
    int year_of_foundation;
    int size_of_field;
};