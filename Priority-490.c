#include <stdio.h>

#define MAX 100

struct PriorityQueue {
    int data;
    int priority;
};

struct PriorityQueue pq[MAX];
int size = 0;

// Insert an element
void insert(int data, int priority)
{
    if (size == MAX)
    {
        printf("Priority Queue is full!\n");
        return;
    }

    pq[size].data = data;
    pq[size].priority = priority;
    size++;

    printf("Element inserted successfully.\n");
}

// Delete element with highest priority
void deleteHighestPriority()
{
    if (size == 0)
    {
        printf("Priority Queue is empty!\n");
        return;
    }

    int i, highest = 0;

    // Find the highest priority element
    for (i = 1; i < size; i++)
    {
        if (pq[i].priority < pq[highest].priority)
        {
            highest = i;
        }
    }

    printf("Deleted element: %d\n", pq[highest].data);

    // Shift remaining elements
    for (i = highest; i < size - 1; i++)
    {
        pq[i] = pq[i + 1];
    }

    size--;
}

// Display the priority queue
void display()
{
    if (size == 0)
    {
        printf("Priority Queue is empty!\n");
        return;
    }

    printf("\nElement\tPriority\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\t%d\n", pq[i].data, pq[i].priority);
    }
}

int main()
{
    int choice, data, priority;

    while (1)
    {
        printf("\n--- PRIORITY QUEUE ---\n");
        printf("1. Insert\n");
        printf("2. Delete Highest Priority\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &data);

                printf("Enter priority: ");
                scanf("%d", &priority);

                insert(data, priority);
                break;

            case 2:
                deleteHighestPriority();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}


