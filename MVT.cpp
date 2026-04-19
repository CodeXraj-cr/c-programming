#include <stdio.h>

int main() {
    int totalMemory, n, i;

    // Input total memory
    printf("Enter total memory available (in KB): ");
    scanf("%d", &totalMemory);

    // Input number of processes
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int processSize[n];

    // Input memory required for each process
    for(i = 0; i < n; i++) {
        printf("Enter memory required for process %d (in KB): ", i + 1);
        scanf("%d", &processSize[i]);
    }

    int allocated[n];

    // Initially mark all as not allocated
    for(i = 0; i < n; i++) {
        allocated[i] = 0;
    }

    int remainingMemory = totalMemory;

    // Output header
    printf("\nProcess No.\tProcess Size\tStatus\n");

    // Allocation logic
    for(i = 0; i < n; i++) {
        if(processSize[i] <= remainingMemory) {
            allocated[i] = 1;
            remainingMemory -= processSize[i];

            printf("%d\t\t%d KB\t\tAllocated\n", i + 1, processSize[i]);
        } else {
            printf("%d\t\t%d KB\t\tNot Allocated\n", i + 1, processSize[i]);
        }
    }

    // Final memory status
    printf("\nTotal Memory Available: %d KB\n", totalMemory);
    printf("Remaining Memory: %d KB\n", remainingMemory);

    return 0;
}
