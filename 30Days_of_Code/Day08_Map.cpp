#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    map<string, int> phoneBook;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string key;
        int value;
        cin >> key;
        cin >> value;
        phoneBook[key] = value;
    }
    string name;
    while(cin >> name){
        if(phoneBook[name]){
            cout << name << '=' << phoneBook[name] << '\n';
        }else{
            cout << "Not found\n";
        }
    }
    return 0;
}
