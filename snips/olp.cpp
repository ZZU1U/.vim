#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#define debug(x) cerr << __LINE__ << ": " << (#x) << " = " << (x) << '\n'
#else
#define debug(x)
#endif

#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef long long ll;

template<class T>
ostream& operator<< (ostream& out, vector<T>& v) {
    for (auto& i : v) {
        out << i << ' ';
    }
    return out;
}

const ll INF = 1e9 + 7;

void solve() {

}

int main() {
    #ifdef ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(10);
    #endif
  
    ll t = 1;
    cin >> t;
    if (t == -1) {
        freopen("input.txt", "r", stdin);
        cin >> t;
    }
    for (ll test = 0; test < t; test++) {
        solve();
        cout << '\n';
    }
}

