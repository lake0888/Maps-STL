#include <iostream>
#include <map>
#include <string>

using namespace std;

void action(int type, map<string, int> &myMap) {
    string name {" "};
    int answer {0};
    map<string, int>::iterator it;
    switch (type)
    {
    case 1:
        cin >> name >> answer;
        it = myMap.find(name);
        if (it != myMap.end()) {
            answer += myMap.at(name);
            myMap.at(name) = answer;
        } else {
            myMap.insert(pair<string, int>(name, answer));
        }
        break;
    case 2:
        cin >> name;
        it = myMap.find(name);
        if (it != myMap.end()) {
            myMap.erase(it);
        }
        break; 
    case 3:
        cin >> name;
        it = myMap.find(name);
        if (it != myMap.end()) {
            cout << myMap.at(name);
        } else {
            cout << 0;
        }
        
        break;
    }
}

int main() {
    int Q {0}, type {0};
    map<string, int> map;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> type;
        action(type, map);
    }
    return 0;
}