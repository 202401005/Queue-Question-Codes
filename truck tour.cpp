int truckTour(vector<vector<int>> petrolpumps) {
    int total = 0, curr = 0, start = 0;
    for (int i = 0; i < petrolpumps.size(); i++) {
        total += petrolpumps[i][0] - petrolpumps[i][1];
        curr += petrolpumps[i][0] - petrolpumps[i][1];
        if (curr < 0) {
            start = i + 1;
            curr = 0;
        }
    }
    return start;
}
