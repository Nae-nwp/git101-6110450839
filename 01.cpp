#include <iostream>
#include <string>
using namespace std;

class Hero {
private:
    string name;
    int level;

public:
    Hero(string name_h, int level_h){
        name = name_h;
        level = level_h;
    }

    string getName() {
        return name;
    }
    int getLevel() {
        return level;
    }
};

int main(){}