#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> m;
    m['a'] = 1;
    m['b'] = 2;
    m['c'] = 3;
    m['d'] = 1;
    m['e'] = 2;
    m['f'] = 3;
    m['g'] = 1;
    m['h'] = 2;
    m['i'] = 3;
    m['j'] = 1;
    m['k'] = 2;
    m['l'] = 3;
    m['m'] = 1;
    m['n'] = 2;
    m['o'] = 3;
    m['p'] = 1;
    m['q'] = 2;
    m['r'] = 3;
    m['s'] = 4;
    m['t'] = 1;
    m['u'] = 2;
    m['v'] = 3;
    m['w'] = 1;
    m['x'] = 2;
    m['y'] = 3;
    m['z'] = 4;
    m[' '] = 1;
    int t;
    cin >> t;
    cin.ignore();
    for (int tc = 1; tc <= t; ++tc) {
        string l;
        getline(cin, l);
        int res = 0;
        for (int i = 0; i < l.size(); ++i) {
            res += m[l[i]];
        }
        cout << "Case #" << tc << ": " << res << endl;
    }
    return 0;
}
