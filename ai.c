#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Structure for Decision Tree Node */
struct Node
{
    int id;
    char decision[100];
    struct Node *left;
    struct Node *right;
};

/* Create Node */
struct Node* createNode(int id, char decision[])
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->id = id;
    strcpy(newNode->decision, decision);

    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

/* Insert Node */
struct Node* insertNode(struct Node *root, int id, char decision[])
{
    if(root == NULL)
        return createNode(id, decision);

    if(id < root->id)
        root->left = insertNode(root->left, id, decision);
    else
        root->right = insertNode(root->right, id, decision);

    return root;
}

/* Display Tree (Inorder Traversal) */
void display(struct Node *root)
{
    if(root != NULL)
    {
        display(root->left);
        printf("Node ID: %d | Decision: %s\n", root->id, root->decision);
        display(root->right);
    }
}

/* Search Node */
struct Node* searchNode(struct Node *root, int id)
{
    if(root == NULL || root->id == id)
        return root;

    if(id < root->id)
        return searchNode(root->left, id);
    else
        return searchNode(root->right, id);
}

/* Update Node */
void updateNode(struct Node *root, int id)
{
    struct Node *temp;
    char newDecision[100];

    temp = searchNode(root, id);

    if(temp != NULL)
    {
        printf("Enter new decision: ");
        scanf(" %[^\n]", newDecision);

        strcpy(temp->decision, newDecision);

        printf("Node updated successfully!\n");
    }
    else
    {
        printf("Node not found.\n");
    }
}

/* Find Minimum Node */
struct Node* findMin(struct Node *root)
{
    while(root->left != NULL)
        root = root->left;

    return root;
}

/* Delete Node */
struct Node* deleteNode(struct Node *root, int id)
{
    struct Node *temp;

    if(root == NULL)
        return root;

    if(id < root->id)
        root->left = deleteNode(root->left, id);

    else if(id > root->id)
        root->right = deleteNode(root->right, id);

    else
    {
        if(root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }

        temp = findMin(root->right);
        root->id = temp->id;
        strcpy(root->decision, temp->decision);
        root->right = deleteNode(root->right, temp->id);
    }

    return root;
}

/* Main Function */
int main()
{
    struct Node *root = NULL;

    int choice;
    int id;
    char decision[100];

    while(1)
    {
        printf("\n===== VIDEO GAME AI DECISION TREE =====\n");
        printf("1. Add Node\n");
        printf("2. Delete Node\n");
        printf("3. Update Node\n");
        printf("4. Search Node\n");
        printf("5. Display Tree\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Node ID: ");
                scanf("%d",&id);

                printf("Enter NPC Decision: ");
                scanf(" %[^\n]", decision);

                root = insertNode(root, id, decision);
                printf("Node added successfully!\n");
                break;

            case 2:
                printf("Enter Node ID to delete: ");
                scanf("%d",&id);

                root = deleteNode(root, id);
                printf("Node deleted if it existed.\n");
                break;

            case 3:
                printf("Enter Node ID to update: ");
                scanf("%d",&id);

                updateNode(root, id);
                break;

            case 4:
            {
                struct Node *result;

                printf("Enter Node ID to search: ");
                scanf("%d",&id);

                result = searchNode(root, id);

                if(result != NULL)
                    printf("Found: %s\n", result->decision);
                else
                    printf("Node not found.\n");

                break;
            }

            case 5:
                printf("\nDecision Tree Nodes:\n");
                display(root);
                break;

            case 6:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}