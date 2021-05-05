#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> edges; // Lista sąsiedztwa grafu
vector<int> colors; // Kolory wierzchołków, colors[x] - kolor wierzchołka x (0 albo 1), gdy -1 to wierzchołek nie jest pokolorowany

bool dfs(int u, int color)
{
    colors[u] = color;
    //for (int i = 0; i < (int) edges[u].size(); ++i) {
    //    int v = edges[u][i];
    for (int v: edges[u]) {
        if (colors[v] == -1) {
            // if (!dfs(v, color == 0 ? 1 : 0)) {
            if (!dfs(v, !color)) {
                return false;
            }
        } else {
            if (colors[v] == color) {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    edges.assign(1 + n, vector<int>());
    while (m--) {
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    colors.assign(1 + n, -1);
    cout << (dfs(1, 0) ? "TAK" : "NIE") << endl;
    return 0;
}