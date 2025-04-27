vector<int> solve(vector<int> arr, vector<int> queries) {
    vector<int> res;
    for (int d : queries) {
        deque<int> dq;
        vector<int> max_in_window;
        
        for (int i = 0; i < arr.size(); i++) {
            while (!dq.empty() && dq.front() <= i - d)
                dq.pop_front();
            while (!dq.empty() && arr[dq.back()] <= arr[i])
                dq.pop_back();
            dq.push_back(i);
            if (i >= d - 1)
                max_in_window.push_back(arr[dq.front()]);
        }
        
        int min_of_max = *min_element(max_in_window.begin(), max_in_window.end());
        res.push_back(min_of_max);
    }
    return res;
}
