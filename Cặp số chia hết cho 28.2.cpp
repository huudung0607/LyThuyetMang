#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <climits>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    long long count[28] = { 0 };
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i] % 28]++;
    }
    long long result = 0;
    for (int i = 0; i <= 14; i++) {
        if (i == 0 || i == 14) {
            result = result + (count[i] * (count[i] - 1) / 2);
        }
        else {
            result = result + count[i] * count[28 - i];
        }
    }
    cout << result;
    return 0;
}
