#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Mountain {
    public:
    void setName(string mountain);
    string getName();
    void setCountry(string place);
    string getCountry();
    void setElevation(int feet);
    int getElevation();
    int toMeters();

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

int Mountain::toMeters() {
    meters = elevation/3.2808;
    return meters;
}

int main() {
unsigned int i;
int minElevation;
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
Adirondacks.setName("Mount Marcy - Adirondacks");
Mitchell.setName("Mount Mitchell - Blue Ridge");
Zugspitze.setName("Zugspitze");

//SET COUNTRIES
Chimborazo.setCountry("Ecuador");
Matterhorn.setCountry("Switzerland");
Olympus.setCountry("Greece (Macedonia)");
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

//ADD TO VECTOR
mountainList.push_back(Chimborazo);
mountainList.push_back(Matterhorn);
mountainList.push_back(Olympus);
mountainList.push_back(Everest);
mountainList.push_back(Adirondacks);
mountainList.push_back(Mitchell);
mountainList.push_back(Zugspitze);

minElevation = 0;
for(i=0; i < mountainList.size(); i++) {
    if(mountainList.at(i).getElevation() > minElevation) {
        minElevation = mountainList.at(i);
    }
}

}