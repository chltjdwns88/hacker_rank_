void stdDev(vector<int> arr) {
    double mean_num = accumulate(arr.begin(), arr.end(), 0);
    mean_num = mean_num / arr.size();
    double sum = 0;
    for(int i = 0; i < arr.size(); i++){
        double temp_num = arr[i] - mean_num;
        sum = sum + (temp_num * temp_num);
    }
    sum = sum / arr.size();
    double index = 0.0;
    while(true){
        if(index*index > sum){break;}
        index++;
    }
    index--;
    while(true){
        if(index*index > sum){break;}
        index += 0.1;
    }
    index -= 0.1;
    cout << index;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string vals_temp_temp;
    getline(cin, vals_temp_temp);

    vector<string> vals_temp = split(rtrim(vals_temp_temp));

    vector<int> vals(n);

    for (int i = 0; i < n; i++) {
        int vals_item = stoi(vals_temp[i]);

        vals[i] = vals_item;
    }

    stdDev(vals);

    return 0;
}