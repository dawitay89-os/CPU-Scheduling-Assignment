
// FCFS
void fcfs(vector<Process> p) {
    int time = 0;
    for(auto &proc : p) {
        if(time < proc.at) time = proc.at;

        proc.ct = time + proc.bt;
        proc.tat = proc.ct - proc.at;
        proc.wt = proc.tat - proc.bt;

        time = proc.ct;

        cout << proc.pid << " CT=" << proc.ct 
             << " TAT=" << proc.tat 
             << " WT=" << proc.wt << endl;
    }
}
