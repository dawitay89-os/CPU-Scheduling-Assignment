// SRTF
void srtf(vector<Process> p) {
    int n = p.size(), time = 0, completed = 0;

    for(auto &proc : p)
        proc.remaining = proc.bt;

    while(completed < n) {
        int idx = -1, minRT = 1e9;

        for(int i=0;i<n;i++) {
            if(p[i].at <= time && p[i].remaining > 0 && p[i].remaining < minRT) {
                minRT = p[i].remaining;
                idx = i;
            }
        }

        if(idx != -1) {
            p[idx].remaining--;
            time++;

            if(p[idx].remaining == 0) {
                p[idx].ct = time;
                p[idx].tat = p[idx].ct - p[idx].at;
                p[idx].wt = p[idx].tat - p[idx].bt;

                completed++;

                cout << p[idx].pid << " CT=" << p[idx].ct
                     << " TAT=" << p[idx].tat
                     << " WT=" << p[idx].wt << endl;
            }
        } else {
            time++;
        }
    }
}