int lonelyinteger(vector<int> a) {
    vector<int> temp;
    temp.push_back(a[0]);
    
    for(int i = 1; i < a.size(); i++){
        bool check_unique = false;    
        for(int j = 0; j < temp.size(); j++){
            if(a[i] == temp[j]){
                temp.erase(temp.begin()+j, temp.begin()+j+1);
                check_unique = true;
                break;
            }
        }
        if(check_unique == true){continue;}
        temp.push_back(a[i]);
    }
    return temp[0];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = lonelyinteger(a);

    fout << result << "\n";

    fout.close();

    return 0;
}