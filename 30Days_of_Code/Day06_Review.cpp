#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;


int main() {
    int n;
    string s;
    cin >> n;
    cin.ignore();
    string front;
    string back;
    for(int i = 0; i < n; i++){
        getline(cin, s);
        for(int j = 0; j < s.length(); j++){
            if(j % 2 == 0){
                front += s[j];
            }else{
                back += s[j];
            }
        }
        cout << front << ' ' << back << '\n';
        front = "", back = "";
    }
    return 0;
}
