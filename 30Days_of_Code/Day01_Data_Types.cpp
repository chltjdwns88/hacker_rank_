#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream> // for getline

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i_; double d_; string s_;    
    cin >> i_;
    cin >> d_;
    cin.ignore();
    getline(cin, s_);    
    cout << i_ + i << '\n' << fixed << setprecision(1) << d+d_ << '\n' << s+s_;

    return 0;
}

// cin 은 '\n' 안받음  입력버퍼에 남아있기 때문에 cin.ignore()로 지워줌
// fixed << setprecision(1) 소수점 1자리로