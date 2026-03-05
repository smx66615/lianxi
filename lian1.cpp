#include<iostream>
#include<vector>
using namespace std;

int erfen(int* a, int b, int n) {
    int le = 0;
    int ri = n;
    if (b == a[le])return le;
    if (b == a[ri])return ri;
    while (le + 1 < ri) {
        int mid = (le + ri) / 2;
        if (b == a[mid])return mid;
        if (b > a[mid])le = mid;
        else ri = mid;
    }
    return le;
}

void solve() {
    int n, p;cin >> n >> p;
    vector<int> a(n + 1, 0);
    for (int i = 1;i <= n;i++) {
        int te;cin >> te;
        a[i] = a[i - 1] + te;
    }

    for (int i = 0;i < p;i++) {
        int te;cin >> te;
        cout << erfen(a.data(), te, n) + 1 << "\n";
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}