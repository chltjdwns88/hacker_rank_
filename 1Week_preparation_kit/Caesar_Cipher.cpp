string caesarCipher(string s, int k) {
    string temp = "";
    int temp_k = k % 26;
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if('a' <= c && c <= 'z'){
            if('z' < c + temp_k){
                temp += ('a' + (c + temp_k - 'z' - 1));
            }else{
                temp += (c+temp_k);
            }
        }else if('A' <= c && c <= 'Z'){
            if('Z' < c + temp_k){
                temp += ('A' + (c + temp_k - 'Z' - 1));
            }else{
            temp += (c+temp_k);
            }
        }else{
            temp += c;
        }
    }
    return temp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}