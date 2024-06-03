#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;

        vector<int> weights(n);
        for (int i = 0; i < n; i++) {
            cin >> weights[i];
        }

        int max_difference = 0;

        for (int k = 1; k <= n; k++) {
            if (n % k == 0) {
                int num_trucks = n / k;
                vector<int> total_weights(num_trucks, 0);
                
                for (int i = 0; i < n; i++) {
                    total_weights[i / k] += weights[i];
                }

                int difference = *max_element(total_weights.begin(), total_weights.end()) -
                                 *min_element(total_weights.begin(), total_weights.end());

                max_difference = max(max_difference, difference);
            }
        }

        cout << max_difference << endl;
    }

}
