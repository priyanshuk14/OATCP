#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> generateShortFormsForDictionary(vector<string>& dictionary) {
    unordered_map<string, string> shortFormsMap;

    for (const string& word : dictionary) {
        unordered_set<string> usedShortForms; // To keep track of used short forms
        for (int len = 1; len <= min(4, (int)word.size()); ++len) {
            for (int i = 0; i <= word.size() - len; ++i) {
                string shortForm = word.substr(i, len);
                if (usedShortForms.find(shortForm) == usedShortForms.end()) {
                    shortFormsMap[shortForm] = word;
                    usedShortForms.insert(shortForm);
                } else {
                    shortFormsMap[shortForm] = ""; // Empty string indicates short form is not unique
                }
            }
        }
    }

    return shortFormsMap;
}

int main() {
    vector<string> dictionary1 = {
        "practice", "hover", "mature", "civilian", "appearance",
        "program", "feature", "banish", "damn", "world"
    };

    vector<string> dictionary2 = {
        "marathon", "terminal", "collect", "cart", "reduce",
        "goat", "reform", "national", "cope", "channel", "agency", "paper"
    };

    unordered_map<string, string> shortFormsMap = generateShortFormsForDictionary(dictionary2);

    cout << "Short Forms:\n";
    for (auto& entry : shortFormsMap) {
        if (!entry.second.empty()) {
            cout << entry.first << ": " << entry.second << endl;
        }
    }

    return 0;
}