#include <bits/stdc++.h>
using namespace std;

bool isAnagram(const string& str1, const string& str2){
    if (str1.length() != str2.length()) {
        return false;
    }

    string copyStr1 = str1;
    string copyStr2 = str2;

    sort(copyStr1.begin(), copyStr1.end());
    sort(copyStr2.begin(), copyStr2.end());

    return copyStr1 == copyStr2;
}

int main() {
    string word1, word2;

    cout << "Ingrese primera palabra: ";
    cin >> word1;

    cout << "Ingrese segunda palabra: ";
    cin >> word2;

    if (isAnagram(word1, word2)) {
        cout << "Son Anagramaas" << endl;
    } else {
        cout << "No son Anagramas" << endl;
    }
    
    return 0;
}



