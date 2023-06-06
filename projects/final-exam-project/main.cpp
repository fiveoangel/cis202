#include<iostream>
#include<string>

using namespace std;
class Mountain {
    public:
    void setName(string mountain);
    void setCountry(string place);
    void setElevation(int feet);
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

void Mountain::setCountry(string place){
    country = place;
}

void Mountain::setElevation(int feet){
    elevation = feet;
}

int Mountain::toMeters(){
    meters = elevation/3.2808;
    return meters;
}

int main() {

Mountain Chimborazo;
Mountain Matterhorn;
Mountain Olympus;
Mountain Everest;
Mountain Adirondacks;
Mountain Mitchell;
Mountain Zugspitze;


}