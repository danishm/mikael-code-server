#include <iostream>
#include <format>
#include <vector>

using namespace std;

class F1Track {

private:
    string name;
    double distance;

public:
    F1Track(string n, double d): name(n), distance(d) {

    }

    double getDistance() {
        return distance;
    }

    string toString() {
        return format("{} ({})", name, distance);
    }
};

class F1Car {

private:

    string driver;
    int number;
    double speed;

public:

    F1Car(int num, string drv, double s)  : number(num), driver(drv), speed(s) {
        cout << "F1Car constructor called " << drv << endl;
    }

    double lapTime(F1Track track) {
        double laptime = (track.getDistance() / speed) * 60.0;
        return laptime;
    }

    string toString() {
        return format("{} {}", number, driver);
    }

    ~F1Car() {
        cout << "F1Car destructor called " << driver << endl;
    }
};

class F1Team {

private:
    string name;
    F1Car& car1;
    F1Car& car2;

public:

    F1Team(string n, F1Car& c1, F1Car& c2) : name(n), car1(c1), car2(c2) {
        cout << "F1Team constructor called " << n << endl;
    }

    string toString() {
        return format("{} | Car 1:{} | Car 2:{}", name, car1.toString(), car2.toString());
    }

    F1Car& getCar1() {
        return car1;
    }

    F1Car& getCar2() {
        return car2;
    }

    ~F1Team() {
        cout << "F1Team destructor called " << name << endl;
    }
};


int main() {

    // Red Bull Team
    F1Car redBullCar1 = F1Car(1, "VER", 206.0);
    F1Car redBullCar2 = F1Car(2, "TSU", 206.0);
    F1Team redbull = F1Team("Red Bull", redBullCar1, redBullCar2);

    F1Car rbCar1 = F1Car(3, "LAW", 204.0);
    F1Car rbCar2 = F1Car(4, "HAD", 204.0);
    F1Team rb = F1Team("RB", rbCar1, rbCar2);

    F1Car alpineCar1 = F1Car(5, "COL", 204.5);
    F1Car alpineCar2 = F1Car(6, "GAS", 204.5);
    F1Team alpine = F1Team("Alpine", alpineCar1, alpineCar2);

    // Creating a track
    F1Track jeddah = F1Track("Jeddah Corniche Circuit", 3.84);

    vector<F1Team> allTeams;
    allTeams.push_back(redbull);
    allTeams.push_back(rb);
    allTeams.push_back(alpine);

    // Lets have a race
    cout << format("Welcome to the race at {}", jeddah.toString()) << endl;
    for(F1Team& team: allTeams) {
        F1Car& car1 = team.getCar1();
        F1Car& car2 = team.getCar2();
        cout << team.toString() << endl;
        cout << "  - " << car1.toString() << " " << car1.lapTime(jeddah) << endl;
        cout << "  - " << car2.toString() << " " << car2.lapTime(jeddah) << endl;
    }

    return 0;
}