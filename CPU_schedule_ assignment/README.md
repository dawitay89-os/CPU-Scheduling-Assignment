# CPU Scheduling and Deadlock Avoidance

##  Description

This project implements CPU Scheduling algorithms and Banker’s Algorithm using C++.

# Algorithms Included

* First Come First Serve (FCFS)
* Shortest Job First (SJF - Non Preemptive)
* Shortest Remaining Time First (SRTF)
* Round Robin (Time Quantum = 2)
* Banker’s Algorithm (Deadlock Avoidance)

##  Input Format

* First line: number of processes (n)
* Next lines: Process ID, Arrival Time, Burst Time

# Example:

4
P1 0 7
P2 2 4
P3 4 1
P4 5 4

After scheduling input, the program will ask for Banker’s Algorithm input:

- Number of processes and resources (n m)
- Allocation matrix
- Max matrix
- Available resources
##  Output

* Waiting Time (WT)
* Turnaround Time (TAT)
* Safe sequence (Banker’s Algorithm)

# How to Run


 Prerequisites
*   A C++ compiler (like `g++` via MinGW on Windows or GCC on Linux/Mac).

Compilation Steps
1.  Open your terminal or command prompt.
2.  Navigate to the `src` directory:
    ```bash
    cd path/to/cpu-scheduling-assignment/src
    ```
3.  Compile the code using g++:
    ```bash
    g++ main.cpp -o scheduler
    ```

 Execution Steps
*   **On Windows**:
    ```bash
    scheduler.exe
    ```
*   **On Linux/Mac**:
    ```bash
    ./scheduler
    ```

 How to Use the Program
Once the program starts, a menu will appear.

1.  **Testing Scheduling Algorithms**:  
    *   Enter the number of processes.
    *   Enter Process ID, Arrival Time, and Burst Time for each process.
    *   The program will display the Completion Time, Turnaround Time, Waiting Time, and their averages.

2.  **Testing Banker's Algorithm**:
    *   Enter the number of processes and resources.
    *   Input the Available resources, Allocation matrix, and Max matrix.
    *   The program will determine if the system is in a safe state and print the Safe Sequence.


##  Project Structure

cpu-scheduling-assignment/
│
├── README.md
├── src/
├── input/
├── output/
└── screenshots/

## Screenshots

 Scheduling Output
![Scheduling](screenshots/scheduling_output.png)

 Banker's Algorithm Output
![Banker](screenshots/bankers_output.png)

## Author 
Student Name: [Birtukan Behailu]
ID: 1601139
Course: Operating Systems
