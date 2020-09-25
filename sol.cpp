#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		char s[n], u[n];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> u[i];
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (u[i] == 'N') {
				continue;
			} else if (s[i] != u[i]) {
				i++;
			} else {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
