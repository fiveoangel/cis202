#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
/* 
    File: main.cpp 
    Description: this is a program that ouputs a chart of Mountains
    Author: Angel Ruiz
    Email: angelr9165@student.vvc.edu 
    Date: 6/8/2023 
*/
class Mountain {
    public:
    void setName(string mountain);
    string getName();
    void setCountry(string place);
    string getCountry();
    void setElevation(int feet);
    int getElevation();
    void toMeters(int ft);
    double getMeters();
    void print();

    private:
    string name;
    string country;
    int elevation;
    int meters;
};

void Mountain::setName(string mountain){
    name = mountain;
}

string Mountain::getName() {
    return name;
}

void Mountain::setCountry(string place){
    country = place;
}

string Mountain::getCountry() {
    return country;
}

void Mountain::setElevation(int feet){
    elevation = feet;
}

int Mountain::getElevation() {
    return elevation;
}

void Mountain::toMeters(int ft) {
    meters = ft * 1/3.2808;
}

double Mountain::getMeters() {
    return meters;
}

void Mountain::print() {
    cout << left << setw(20) << name << setw(18) << country << setw(18)<< elevation << setw(18) << meters << endl;
}

int main() {

unsigned int i;
int minElevation;
string smallestMountain;
vector<Mountain> mountainList;

//MOUNTAINS
Mountain Chimborazo;
Mountain Matterhorn;
Mountain Olympus;
Mountain Everest;
Mountain Adirondacks;
Mountain Mitchell;
Mountain Zugspitze;

//SET NAMES
Chimborazo.setName("Chimborazo");
Matterhorn.setName("Matterhorn");
Olympus.setName("Olympus");
Everest.setName("Everest");
Adirondacks.setName("Mount Marcy");
Mitchell.setName("Mount Mitchell");
Zugspitze.setName("Zugspitze");

//SET COUNTRIES
Chimborazo.setCountry("Ecuador");
Matterhorn.setCountry("Switzerland");
Olympus.setCountry("Greece");
Everest.setCountry("Nepal");
Adirondacks.setCountry("United States");
Mitchell.setCountry("United States");
Zugspitze.setCountry("Switzerland");

//SET ELEVATIONS
Chimborazo.setElevation(20549);
Matterhorn.setElevation(14692);
Olympus.setElevation(9573);
Everest.setElevation(29029);
Adirondacks.setElevation(5344);
Mitchell.setElevation(6684);
Zugspitze.setElevation(9719);

//TO METERS
Chimborazo.toMeters(20549);
Matterhorn.toMeters(14692);
Olympus.toMeters(9573);
Everest.toMeters(29029);
Adirondacks.toMeters(5344);
Mitchell.toMeters(6684);
Zugspitze.toMeters(9719);

//ADD TO VECTOR
mountainList.push_back(Chimborazo);
mountainList.push_back(Matterhorn);
mountainList.push_back(Olympus);
mountainList.push_back(Everest);
mountainList.push_back(Adirondacks);
mountainList.push_back(Mitchell);
mountainList.push_back(Zugspitze);

cout << "Mountain         " 
<< "   Country         " 
<< "  Elevation (FT)    Elevation(MTRS)" << endl;
cout << "--------------------------------------------------------------------" << endl;
for(i=0; i < mountainList.size(); i++) {
    mountainList.at(i).print();
}

minElevation = mountainList.at(0).getElevation();

for(i=0; i < mountainList.size(); i++) {
    if(mountainList.at(i).getElevation() < minElevation) {
        minElevation = mountainList.at(i).getElevation();
        smallestMountain = mountainList.at(i).getName();
    }
}
cout << endl << "Smallest Mountain Name: " << smallestMountain << endl;
cout << "Smallest Elevation: " << minElevation << endl;

return 0;

}