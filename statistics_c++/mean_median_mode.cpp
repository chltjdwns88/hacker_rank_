#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

double find_mean(vector<int> temp){
    long long sum = 0;
    for(int i = 0; i < temp.size(); i++){
        sum += temp[i];
    }
    return double(double(sum) / temp.size());
}
 
double find_median(vector<int> temp){
    if(temp.size() % 2 == 0){
        int mean_index = temp.size() / 2;
        double temp_return = temp[mean_index-1] + temp[mean_index];
        temp_return = temp_return / 2;
        return temp_return;
    }else{
        int mean_index = temp.size() / 2;
        return temp[mean_index];
    }
}

int find_mode(vector<int> temp){
    map<int, int> temp_map;
    for(int i = 0; i < temp.size(); i++){
        if(temp_map.find(temp[i]) == temp_map.end()){
            temp_map.insert({temp[i],1});
        }else{
            temp_map[temp[i]]++;
        }
    }
    map<int, int>::iterator iter;
    iter = temp_map.begin();
    int max = iter->second;
    int max_key = iter->first;
    iter++;
    for(; iter != temp_map.end(); iter++){
        if(iter->second > max){
            max = iter->second;
            max_key = iter->first;
            continue;
        }
    }
    return max_key;
}

int main() {
    int array_length, temp;
    cin >>array_length; cin.ignore();
    
    vector<int> v;
    for(int i = 0; i < array_length; i++){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    double mean_num = find_mean(v);
    double median_num = find_median(v);
    int mode_num = find_mode(v);
    cout << mean_num << '\n';
    cout << median_num << '\n';
    cout << mode_num << '\n';
    return 0;
}
