#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to read input
void readInput(int &N, int &M, int &K,
            vector<long long> &L,
            vector<long long> &V,
            vector<vector<int>> &adj) {

    cin >> N >> M >> K;

    L.resize(N);
    V.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> L[i] >> V[i];
    }

    adj.resize(N);

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

// DP computation
vector<long long> computeDP(int N,
                            vector<long long> &L,
                            vector<long long> &V,
                            vector<vector<int>> &adj) {

    vector<long long> dp(N);

    for (int i = 0; i < N; i++) {
        dp[i] = V[i];
    }

    vector<int> order(N);
    for (int i = 0; i < N; i++) order[i] = i;

    sort(order.begin(), order.end(), [&](int a, int b) {
        return L[a] < L[b];
    });

    for (int idx = 0; idx < N; idx++) {
        int u = order[idx];

        for (int v : adj[u]) {
            if (L[v] >= L[u]) {
                long long diff = L[v] - L[u];
                long long penalty = diff * diff;

                dp[v] = max(dp[v], dp[u] + V[v] - penalty);
            }
        }
    }

    return dp;
}

// Get answer
long long getMaxScore(vector<long long> &dp) {
    return *max_element(dp.begin(), dp.end());
}

int main() {
    int N, M, K;
    vector<long long> L, V;
    vector<vector<int>> adj;

    readInput(N, M, K, L, V, adj);

    vector<long long> dp = computeDP(N, L, V, adj);

    long long result = getMaxScore(dp);

    cout << result << endl;

    return 0;
}