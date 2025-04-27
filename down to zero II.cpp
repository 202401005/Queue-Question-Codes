int downToZero(int n) {
    vector<int> moves(n + 1, -1);
    queue<int> q;
    q.push(n);
    moves[n] = 0;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        if (x == 0) break;

        if (moves[x - 1] == -1) {
            moves[x - 1] = moves[x] + 1;
            q.push(x - 1);
        }

        for (int i = 2; i * i <= x; ++i) {
            if (x % i == 0) {
                int next = max(i, x / i);
                if (moves[next] == -1) {
                    moves[next] = moves[x] + 1;
                    q.push(next);
                }
            }
        }
    }

    return moves[0];
}
