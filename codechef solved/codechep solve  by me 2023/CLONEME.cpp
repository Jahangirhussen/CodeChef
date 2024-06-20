#include <bits/stdc++.h>

using namespace std;

string check_similarity(const vector<int>& arr, int a, int b, int c, int d) {
    vector<int> subarr1(arr.begin() + a - 1, arr.begin() + b);
    vector<int> subarr2(arr.begin() + c - 1, arr.begin() + d);

    sort(subarr1.begin(), subarr1.end());
    sort(subarr2.begin(), subarr2.end());

    int mismatches = 0;
    for (size_t i = 0; i < subarr1.size(); i++) {
        if (subarr1[i] != subarr2[i])
            mismatches++;
    }

    if (mismatches <= 1)
        return "YES";
    else
        return "NO";
}

// Main function to solve the problem
void solve() {
    // Read the number of test cases
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        // Read the number of elements in the array and the number of queries
        int N, Q;
        cin >> N >> Q;

        // Read the input array
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        for (int q = 0; q < Q; q++) {
            // Read each query
            int a, b, c, d;
            cin >> a >> b >> c >> d;

            string result = check_similarity(arr, a, b, c, d);
            cout << result << endl;
        }
    }
}

int main() {
    // Run the solve function
    solve();

    return 0;
}
