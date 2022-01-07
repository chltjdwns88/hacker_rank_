#include <sstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);
        arr[i] = arr_item;
    }
    
    for(int i = n-1; i >= 0; i--){
        cout << arr[i] << ' ';
    }

    return 0;
}