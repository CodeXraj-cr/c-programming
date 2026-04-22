#include <stdio.h>

int main() {
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], wt[n], tat[n];

    // Input
    for(int i = 0; i < n; i++) {
        printf("Enter Arrival Time and Burst Time for Process %d: ", i + 1);
        scanf("%d %d", &at[i], &bt[i]);
    }

    // Sort by arrival time (FCFS rule)
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(at[i] > at[j]) {
                // swap AT
                int temp = at[i];
                at[i] = at[j];
                at[j] = temp;

                // swap BT
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }

    // Waiting time
    wt[0] = 0;
    for(int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    // Turnaround time
    for(int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }

    // Output
    printf("\nProcess\tAT\tBT\tWT\tTAT\n");
    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], wt[i], tat[i]);
    }

    return 0;
}
