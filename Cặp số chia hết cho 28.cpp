#include <iostream>
#include <vector>
using namespace std;
int cnt[28];
int a[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        int r = a[i] % 28;
        int ans = (28 - r) % 28; 
        res += cnt[ans]; 
        cnt[r]++;
    }
    cout << res << endl;
}
