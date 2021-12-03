void plusMinus(vector<int> arr) {
    int length = arr.size();
    double positive = 0.0;
    double negative = 0.0;
    double zero = 0.0;
    for(int i = 0; i < length; i++){
        if(arr[i] > 0){
            positive += 1.0;
        }else if(arr[i] < 0){
            negative += 1.0;
        }else{
            zero += 1.0;
        }
    }
    printf("%.6f\n", positive / double(length));
    printf("%.6f\n", negative / double(length));
    printf("%.6f\n", zero / double(length)); 
}

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

    plusMinus(arr);

    return 0;
}