#include <iostream>
#include <string>

using namespace std;

class Hero 
int main()
{
    string name;
    int level;
    cin >> name;
    cin >> level;
    Hero s1 (name,level);
    cout << s1.getName() << " " << s1.getLevel() << endl;
}    