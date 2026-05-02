
// SJF
void sjf(vector<Process> p) {
    int n = p.size(), time = 0, completed = 0;
    vector<bool> done(n, false);

    while(completed < n) {
        int idx = -1, minBT = 1e9;

        for(int i=0;i<n;i++) {
            if(p[i].at <= time && !done[i] && p[i].bt < minBT) {
                minBT = p[i].bt;
                idx = i;
            }
        }

        if(idx != -1) {
            time += p[idx].bt;
            p[idx].ct = time;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;

            done[idx] = true;
            completed++;

            cout << p[idx].pid << " CT=" << p[idx].ct
                 << " TAT=" << p[idx].tat
                 << " WT=" << p[idx].wt << endl;
        } else {
            time++;
        }
    }
}