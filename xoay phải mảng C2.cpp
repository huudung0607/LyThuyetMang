#include <iostream>
#include <vector>
using namespace std;
int cnt[28];
int a[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    k %= n;
    for (int i = n - k; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < n - k; i++)
    {
        cout << a[i] << " ";
    }
}
