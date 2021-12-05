string timeConversion(string s) {
    string temp_s[3] = {};
    int index = 0;
    for(char c : s){
        if(c == 'A'){           
            int temp_Ai = stoi(temp_s[0]);
            if(temp_Ai == 12){
                temp_s[0] = "00";                
            }
            break;
            
        }else if(c == 'P'){
            if(temp_s[0] == "12")
            {
                break;
            }
            int temp_i = stoi(temp_s[0]);
            temp_i += 12;
            temp_s[0] = to_string(temp_i);
            break;
        }
        if(c == ':'){
            index++;
            continue;
        }
        temp_s[index] += c;
        
    }
    return temp_s[0] + ':' + temp_s[1] + ':' + temp_s[2];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}