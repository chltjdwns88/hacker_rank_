#include <iostream>
#include <sstream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    private:
        stack<char> st;
        queue<char> qu;
    public:
        void pushCharacter(char temp){
            st.push(temp);
        }
        void enqueueCharacter(char temp){
            qu.push(temp);
        }
        char popCharacter(){
            char temp = st.top();
            st.pop();
            return temp;
        }
        char dequeueCharacter(){
            char temp = qu.front();
            qu.pop();
            return temp;
        }
};
int main() {
    string s;
    getline(cin, s);
    
    Solution obj;
    
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}