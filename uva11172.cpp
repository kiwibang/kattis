#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (a == b) {
            cout << "=" << endl;
        } else if (a > b) {
            cout << ">" << endl;
        } else {
            cout << "<" << endl;
        }
    }
    return 0;
}
