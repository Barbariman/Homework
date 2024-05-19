#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

// Function to process each line and replace four-letter words
string processLine(const string& line) {
    stringstream ss(line);
    string word;
    vector<string> words;
    vector<char> delimiters;

    // Split the line into words and delimiters
    while (ss >> word) {
        words.push_back(word);
        char nextChar = ss.peek();
        if (!isalpha(nextChar) && nextChar != EOF && nextChar != ' ') {
            delimiters.push_back(nextChar);
            ss.get();
        } else {
            delimiters.push_back(' ');
        }
    }

    // Process each word
    for (string& w : words) {
        if (w.length() == 4) {
            if (isupper(w[0])) {
                w = "Love";
            } else {
                w = "love";
            }
        }
    }

    // Reconstruct the processed line
    string result;
    for (int i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i < delimiters.size()) {
            result += delimiters[i];
        }
    }

    return result;
}

int main() {
    string line;
    cout << "Enter a line of text (or 'quit' to exit):" << endl;

    while (true) {
        getline(cin, line);
        if (line == "quit") {
            break;
        }

        string processedLine = processLine(line);
        cout << processedLine << endl;
        cout << "Enter another line of text (or 'quit' to exit):" << endl;
    }

    return 0;
}
