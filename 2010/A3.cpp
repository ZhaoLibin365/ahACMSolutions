
#include<bits/stdc++.h>

using namespace std;

int main() {
    string a, b;

    while (getline(cin, a)) {
        getline(cin, b);
        transform(a.begin(), a.end(), a.begin(), _tolower);
        transform(b.begin(), b.end(), b.begin(), _tolower);

        int ans = 0;
        for (auto p = b.find(a); p != string::npos; p = b.find(a, p + a.size())) {
            ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}