#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j;
    double e;
    string t;

    cin >> j;
    cin >> e;
    cin.ignore();
    getline(cin, t);

    cout << i + j << endl;
    cout << fixed << setprecision(1) << d + e << endl;
    cout << s << t << endl;
}
