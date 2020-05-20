#include <iostream>
#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
#include <string> 

using namespace std;

class Edge {
    public:
    vector<pair<int, int>> Edges;
    void AddEdge(int m, int n) {Edges.push_back(make_pair(m, n));}
    bool IsEdge(int m, int n) {
        if (find(Edges.begin(), Edges.end(), make_pair(m, n)) != Edges.end()) return true;
        return false;
    }
};


void comb(int N, int K)
{
    string bitmask(K, 1); // K leading 1's
    bitmask.resize(N, 0); // N-K trailing 0's

    // print integers and permute bitmask
    do {
        for (int i = 0; i < N; ++i) // [0..N-1] integers
        {
            if (bitmask[i]) cout << " " << i;
        }
        cout << endl;
    } while (prev_permutation(bitmask.begin(), bitmask.end()));
}

int main(int argc, char const *argv[]) {
    cout << "Hello World" << endl;
    Edge e();
    comb(6, 3);
}