#include <stdio.h>

int main() {
    int pid[15];
    int bt[15];
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter process id of all the processes: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &pid[i]);
    }

    printf("Enter burst time of all the processes: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
    }

    int wt[n];
    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = bt[i - 1] + wt[i - 1];
    }

    printf("Process ID    Burst Time   Waiting Time   Turnaround Time\n");
    float twt = 0.0;
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", pid[i], bt[i], wt[i], bt[i] + wt[i]);
        twt += wt[i];
    }

    printf("Average Waiting Time: %.2f\n", twt / n);

    return 0;
}
