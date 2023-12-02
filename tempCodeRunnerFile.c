#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct node {
    int data;
    struct node* xor_ptr; // XOR of previous and next pointers
};

// Function to perform the XOR operation
struct node* XOR(struct node* a, struct node* b) {
    return (struct node*)((uintptr_t)a ^ (uintptr_t)b);
}

struct node* createnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->xor_ptr = NULL;
    return newnode;
}

struct node* insertAtBeginning(struct node* head) {
    int data;
    printf("Enter Data: ");
    scanf("%d", &data);
    struct node* newnode = createnode(data);
    newnode->xor_ptr = head;
    if (head != NULL) {
        head->xor_ptr = XOR(newnode, head->xor_ptr);
    }
    return newnode;
}

struct node* insertAtEnd(struct node* head) {
    int data;
    printf("Enter Data: ");
    scanf("%d", &data);
    struct node* newnode = createnode(data);

    if (head == NULL) {
        return newnode;
    }

    struct node* prev = NULL;
    struct node* current = head;
    struct node* next;

    while (current != NULL) {
        next = XOR(prev, current->xor_ptr);

        if (next == NULL) {
            newnode->xor_ptr = current;
            current->xor_ptr = XOR(newnode, current->xor_ptr);
            return head;
        }

        prev = current;
        current = next;
    }
    return head;
}



struct node* deleteAtBeginning(struct node* head) {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return head;
    }

    struct node* next = head->xor_ptr;
    free(head);
    if (next != NULL) {
        next->xor_ptr = XOR(next->xor_ptr, head);
    }
    return next;
}

struct node* deleteAtEnd(struct node* head) {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return head;
    }

    struct node* prev = NULL;
    struct node* current = head;
    struct node* next;

    while (current != NULL) {
        next = XOR(prev, current->xor_ptr);

        if (next == NULL) {
            if (prev != NULL) {
                prev->xor_ptr = XOR(prev->xor_ptr, current);
            }
            free(current);

            if (prev == NULL) {
                head = NULL;
            }

            return head;
        }

        prev = current;
        current = next;
    }

    return head;
}

// struct node* insertAtPosition(struct node* head, int position) {
//     if (position <= 0) {
//         printf("Invalid position for insertion.\n");
//         return head;
//     }
//     if (position == 1) {
//         return insertAtBeginning(head);
//     }
//     int data;
//     printf("Enter Data: ");
//     scanf("%d", &data);

//     struct node* newnode = createnode(data);
//     struct node* prev = NULL;
//     struct node* current = head;
//     int currentPos = 1;

//     while (current != NULL && currentPos < position) {
//         struct node* next = XOR(prev, current->xor_ptr);

//         if (next == NULL) {
//             if (currentPos + 1 == position) {
//                 newnode->xor_ptr = current;
//                 current->xor_ptr = XOR(newnode, current->xor_ptr);
//                 return head;
//             } else {
//                 printf("Invalid position for insertion.\n");
//                 return head;
//             }
//         }

//         prev = current;
//         current = next;
//         currentPos++;
//     }

//     if (currentPos == position) {
//         struct node* next = XOR(prev, current->xor_ptr);
//         newnode->xor_ptr = XOR(prev, current);
//         current->xor_ptr = XOR(newnode, XOR(prev, current->xor_ptr));
//         if (next != NULL) {
//             next->xor_ptr = XOR(newnode, XOR(current, next->xor_ptr));
//         }
//     } else {
//         printf("Invalid position for insertion.\n");
//     }
//     return head;
// }

struct node* insertAtPosition(struct node* head, int position) {
    if (position <= 0) {
        printf("Invalid position for insertion.\n");
        return head;
    }
    if (position == 1) {
        return insertAtBeginning(head);
    }
    int data;
    printf("Enter Data: ");
    scanf("%d", &data);

    struct node* newnode = createnode(data);
    struct node* prev = NULL;
    struct node* current = head;
    int currentPos = 1;

    while (current != NULL && currentPos < position) {
        struct node* next = XOR(prev, current->xor_ptr);

        if (next == NULL && currentPos + 1 != position) {
            // If the next node is NULL and the position is not next to the current node,
            // it means the position is invalid.
            printf("Invalid position for insertion.\n");
            free(newnode); // Free the allocated node to avoid memory leaks
            return head;
        }

        prev = current;
        current = next;
        currentPos++;
    }

    if (currentPos == position) {
        struct node* next = XOR(prev, current->xor_ptr);
        newnode->xor_ptr = XOR(prev, current);
        current->xor_ptr = XOR(newnode, XOR(prev, current->xor_ptr));
        if (next != NULL) {
            next->xor_ptr = XOR(newnode, XOR(current, next->xor_ptr));
        }
    } else {
        printf("Invalid position for insertion.\n");
        free(newnode); // Free the allocated node to avoid memory leaks
    }
    return head;
}

struct node* deleteAtPosition(struct node* head, int position) {
    if (position <= 0) {
        printf("Invalid position for deletion.\n");
        return head;
    }

    if (position == 1) {
        return deleteAtBeginning(head);
    }

    struct node* prev = NULL;
    struct node* current = head;
    int currentPos = 1;

    while (current != NULL && currentPos < position) {
        struct node* next = XOR(prev, current->xor_ptr);
        if (next == NULL) {
            if (currentPos + 1 == position) {
                if (prev != NULL) {
                    prev->xor_ptr = XOR(prev->xor_ptr, current);
                }
                free(current);
                return head;
            } else {
                printf("Invalid position for deletion.\n");
                return head;
            }
        }

        prev = current;
        current = next;
        currentPos++;
    }
    if (currentPos == position) {
        struct node* next = XOR(prev, current->xor_ptr);

        if (prev != NULL) {
            prev->xor_ptr = XOR(prev->xor_ptr, XOR(current, next));
        }

        if (next != NULL) {
            next->xor_ptr = XOR(next->xor_ptr, XOR(current, prev));
        }
        free(current);
    } else {
        printf("Invalid position for deletion.\n");
    }
    return head;
}


void traverse(struct node* head) {
    struct node *prev = NULL, *current = head, *next;

    printf("Doubly Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        next = XOR(prev, current->xor_ptr);
        prev = current;
        current = next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;
    int choice;
            printf("======================================================\n\tMEMORY EFFICIENT DOUBLY LINKED LIST\n======================================================");
        printf("\n\nMenu:\n");
        printf("1. Insert at the Beginning\n");
        printf("2. Insert at the End\n");
        printf("3. Insert at a Position\n");
        printf("4. Delete at the Beginning\n");
        printf("5. Delete at the End\n");
        printf("6. Delete at a Position\n");
        printf("7. Traverse the List\n");
        printf("8. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                head = insertAtBeginning(head);
                break;
            case 2:
                head = insertAtEnd(head);
                break;
            case 3:
                {
                    int position;
                    printf("Enter the position: ");
                    scanf("%d", &position);
                    head = insertAtPosition(head, position);
                }
                break;
            case 4:
                head = deleteAtBeginning(head);
                break;
            case 5:
                head = deleteAtEnd(head);
                break;
            case 6:
                {
                    int position;
                    printf("Enter the position: ");
                    scanf("%d", &position);
                    head = deleteAtPosition(head, position);
                }
                break;
            case 7:
                traverse(head);
                break;
            case 8:
                // Exit the program
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}