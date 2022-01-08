#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    string temp;
    int max = 0;
    while(n != 0){
        temp += (n%2==0 ? '0' : '1');
        n /= 2;
    }
    int count = 0;
    for(int i = 0; i < temp.length(); i++){
        if(temp[i] == '1'){count++;}
        else{count = 0;}
        if(max < count){max = count;}
    }
    cout << max;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
