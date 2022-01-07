#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string N_temp;
    getline(cin, N_temp);

    // int N = stoi(ltrim(rtrim(N_temp)));
    int N;
    cin >> N;
    if(N % 2 != 0 || (6 <= N && N <= 20)){ cout << "Weird";}
    else{cout << "Not Weird";}
    
    
    return 0;
}