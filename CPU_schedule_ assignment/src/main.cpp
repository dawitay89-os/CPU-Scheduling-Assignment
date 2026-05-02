#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// STRUCT
struct Process {
    string pid;
    int at, bt, ct=0, tat=0, wt=0, remaining=0;
};
// MAIN
int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);

    cout << "Enter PID AT BT:\n";
    for(int i=0;i<n;i++)
        cin >> p[i].pid >> p[i].at >> p[i].bt;

    sort(p.begin(), p.end(), [](Process a, Process b){
        return a.at < b.at;
    });

    cout << "\n--- FCFS ---\n";
    fcfs(p);

    cout << "\n--- SJF ---\n";
    sjf(p);

    cout << "\n--- SRTF ---\n";
    srtf(p);

    cout << "\n--- Round Robin ---\n";
    roundRobin(p);

    cout << "\n--- Banker's Algorithm ---\n";
    bankers();

    return 0;
}