void miniMaxSum(vector<int> arr) {
    int length = arr.size();
    long long sum1 = 0;
    long long sum2 = 0;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < length - 1; i++){
        sum1 += arr[i];
    }
    for(int i = 1; i < length; i++){
        sum2 += arr[i];
    }
    cout << sum1 << " " << sum2;
    
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}