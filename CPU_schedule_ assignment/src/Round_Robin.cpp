
// ROUND ROBIN
void roundRobin(vector<Process> p, int q=2) {
    queue<int> ready;
    int n = p.size(), time = 0;
    vector<int> remaining(n);

    for(int i=0;i<n;i++)
        remaining[i] = p[i].bt;

    vector<bool> inQueue(n, false);
    int completed = 0;

    while(completed < n) {
        for(int i=0;i<n;i++) {
            if(p[i].at <= time && !inQueue[i]) {
                ready.push(i);
                inQueue[i] = true;
            }
        }

        if(!ready.empty()) {
            int i = ready.front(); ready.pop();

            int exec = min(q, remaining[i]);
            remaining[i] -= exec;
            time += exec;

            for(int j=0;j<n;j++) {
                if(p[j].at <= time && !inQueue[j]) {
                    ready.push(j);
                    inQueue[j] = true;
                }
            }

            if(remaining[i] > 0) {
                ready.push(i);
            } else {
                p[i].ct = time;
                p[i].tat = p[i].ct - p[i].at;
                p[i].wt = p[i].tat - p[i].bt;
                completed++;

                cout << p[i].pid << " CT=" << p[i].ct
                     << " TAT=" << p[i].tat
                     << " WT=" << p[i].wt << endl;
            }
        } else {
            time++;
        }
    }
}

