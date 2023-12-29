#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
	int n;
	cin >> n;
	int c[n], a[n], b[n];
	for (int i = 0; i < n; i++)
		cin >> c[i];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	long long ans = 0, last_len = 0;
	for (int i = 1; i < n; i++) {
		long long cur_len = c[i] + 1LL + abs(a[i] - b[i]);
		if (a[i] != b[i])
			cur_len = max(cur_len, c[i] + 1LL + last_len - abs(a[i] - b[i]));
		ans = max(ans, cur_len);
		last_len = cur_len;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
