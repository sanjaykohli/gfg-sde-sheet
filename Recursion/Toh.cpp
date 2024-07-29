#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:

    long long toh(int n, int from, int to, int aux) {
        if (n == 1) {
            cout << "move disk 1 from rod " << from << " to rod " << to << endl;
            return 1;
        }
        long long moves = 0;
        moves += toh(n-1, from, aux, to);
        cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
        moves += 1;
        moves += toh(n-1, aux, to, from);
        return moves;
    }
};

int main() {
    int N;
    cin >> N;

    Solution ob;
    cout << ob.toh(N, 1, 3, 2) << endl;

    return 0;
}
