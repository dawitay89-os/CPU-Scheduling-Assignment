// BANKER
void bankers() {
    int n, m;
    cout << "\nEnter processes and resources: ";
    cin >> n >> m;

    vector<vector<int>> alloc(n, vector<int>(m));
    vector<vector<int>> maxm(n, vector<int>(m));
    vector<int> avail(m);

    cout << "Enter Allocation Matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> alloc[i][j];

    cout << "Enter Max Matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> maxm[i][j];

    cout << "Enter Available Resources:\n";
    for(int j=0;j<m;j++)
        cin >> avail[j];

    vector<vector<int>> need(n, vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            need[i][j] = maxm[i][j] - alloc[i][j];

    vector<bool> finish(n,false);
    vector<int> safeSeq;

    while(safeSeq.size() < n) {
        bool found = false;

        for(int i=0;i<n;i++) {
            if(!finish[i]) {
                bool ok = true;

                for(int j=0;j<m;j++)
                    if(need[i][j] > avail[j])
                        ok = false;

                if(ok) {
                    for(int j=0;j<m;j++)
                        avail[j] += alloc[i][j];

                    safeSeq.push_back(i);
                    finish[i] = true;
                    found = true;
                }
            }
        }

        if(!found) {
            cout << "System is NOT SAFE\n";
            return;
        }
    }

    cout << "System is SAFE\nSequence: ";
    for(int i : safeSeq)
        cout << "P" << i << " ";
    cout << endl;
}


