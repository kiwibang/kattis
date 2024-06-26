#include <bits/stdc++.h>
using namespace std;

int main() {
    bool res[12];
    string input;
    int diff[8] = {0, 2, 4, 5, 7, 9, 11, 12};
    const string notes[25] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B", "C"};
    vector<string> scales[12];
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 8; ++j) {
            scales[i].push_back(notes[i + diff[j]]);
        }
    }
    for (int i = 0; i < 12; ++i) {
        res[i] = true;
    }
    while (cin >> input) {
        if (input == "END") {
            break;
        }
        for (int i = 0; i < 12; ++i) {
            if (find(scales[i].begin(), scales[i].end(), input) == scales[i].end()) {
                res[i] = false;
            }
        }
        if (cin.peek() == '\n') {
            bool first = true;
            for (int i = 0; i < 12; ++i) {
                if (res[i] == true) {
                    if (!first) {
                        cout << " ";
                    }
                    cout << notes[i];
                    first = false;
                }
                res[i] = true;
            }
            cout << endl;
        }
    }
    return 0;
}
