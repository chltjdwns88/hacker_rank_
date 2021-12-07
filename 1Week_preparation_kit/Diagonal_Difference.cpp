int diagonalDifference(vector<vector<int>> arr) {
    int sum1 = 0;
    int sum2 = 0;
    int index1 = 0;
    int index2 = arr.size() - 1;
    for(int i = 0; i < arr.size(); i++){
        sum1 += arr[i][index1++];
        sum2 += arr[i][index2--];
    }
    return abs(sum1 - sum2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));
    }
}