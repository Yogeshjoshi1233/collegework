#include <stdio.h>
#include <stdlib.h>

struct listNode {
    int data;
    struct listNode *next;
};

typedef struct listNode ListNode;
typedef ListNode* ListNodePtr;

/* Function Prototypes */
void insert(ListNodePtr *sPtr, int value);
void printList(ListNodePtr currentPtr);
void deleteNode(ListNodePtr *sPtr, int value);
int isEmpty(ListNodePtr sPtr);
void deletionAtEnd(ListNodePtr *sPtr);

/* Main Function */
int main() {
    ListNodePtr startPtr = NULL;
    int choice, value;

    do {
        printf("\n1. Insert a value\n");
        printf("2. Print the list\n");
        printf("3. Delete a value\n");
        printf("4. Delete at End\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insert(&startPtr, value);
            printList(startPtr);
            break;

        case 2:
            printList(startPtr);
            break;

        case 3:
            if (!isEmpty(startPtr)) {
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(&startPtr, value);
                printList(startPtr);
            } else {
                printf("List is empty.\n");
            }
            break;

        case 4:
            deletionAtEnd(&startPtr);
            printList(startPtr);
            break;

        case 5:
            printf("Program Ended.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}

/* Insert in Sorted Order */
void insert(ListNodePtr *sPtr, int value) {

    ListNodePtr newNode = (ListNodePtr)malloc(sizeof(ListNode));

    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    ListNodePtr previousPtr = NULL;
    ListNodePtr currentPtr = *sPtr;

    /* Find location to insert */
    while (currentPtr != NULL && value > currentPtr->data) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->next;
    }

    /* Insert at beginning */
    if (previousPtr == NULL) {
        newNode->next = *sPtr;
        *sPtr = newNode;
    }
    /* Insert in middle or end */
    else {
        previousPtr->next = newNode;
        newNode->next = currentPtr;
    }

    printf("Value inserted.\n");
}

/* Delete specific value */
void deleteNode(ListNodePtr *sPtr, int value) {

    if (*sPtr == NULL) {
        printf("List is empty.\n");
        return;
    }

    ListNodePtr currentPtr = *sPtr;
    ListNodePtr previousPtr = NULL;

    /* If first node contains value */
    if (currentPtr->data == value) {
        *sPtr = currentPtr->next;
        free(currentPtr);
        printf("Value deleted.\n");
        return;
    }

    /* Search for value */
    while (currentPtr != NULL && currentPtr->data != value) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->next;
    }

    /* If value found */
    if (currentPtr != NULL) {
        previousPtr->next = currentPtr->next;
        free(currentPtr);
        printf("Value deleted.\n");
    }
    else {
        printf("Value not found.\n");
    }
}

/* Delete last node */
void deletionAtEnd(ListNodePtr *sPtr) {

    if (*sPtr == NULL) {
        printf("List is empty.\n");
        return;
    }

    ListNodePtr currentPtr = *sPtr;
    ListNodePtr previousPtr = NULL;

    /* If only one node */
    if (currentPtr->next == NULL) {
        free(currentPtr);
        *sPtr = NULL;
        printf("Last node deleted.\n");
        return;
    }

    /* Traverse to last node */
    while (currentPtr->next != NULL) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->next;
    }

    previousPtr->next = NULL;
    free(currentPtr);
    printf("Last node deleted.\n");
}

/* Print List */
void printList(ListNodePtr currentPtr) {

    if (currentPtr == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("List: ");

    while (currentPtr != NULL) {
        printf("%d -> ", currentPtr->data);
        currentPtr = currentPtr->next;
    }

    printf("NULL\n");
}

/* Check if empty */
int isEmpty(ListNodePtr sPtr) {
    return sPtr == NULL;
}