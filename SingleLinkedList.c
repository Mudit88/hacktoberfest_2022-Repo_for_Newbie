#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head, *ptr, *ptr1, *new_node;

struct node *Create_node();
struct node *insert_beg();
struct node *insert_end();
struct node *insert_pos();
struct node *delete_beg();
struct node *delete_end();
struct node *delete_pos();
void display();

int main()
{
    int ch, value;
    head = NULL;

    while (1)
    {
        printf("----------MENU---------\n");
        printf(" 1.Display the list \n 2.Insertion in the beginning\n 3.Insertion in the end\n 4.Insertion in the specified position\n 5.Deletion in the beginning\n 6.Deletion in the end\n 7.Deletion in the specified position\n 8.Exit from the program\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            display();
            break;

        case 2:
            insert_beg();
            break;

        case 3:
            insert_end();
            break;

        case 4:
            insert_pos();
            break;

        case 5:
            delete_beg();
            break;

        case 6:
            delete_end();
            break;

        case 7:
            delete_pos();
            break;

        case 8:
            exit(0);
            break;
        }
    }
}

struct node *create_node()
{
    new_node = (struct node *)malloc(sizeof(struct node *));
    int value;
    if (new_node == NULL)
    {
        printf("overflow!");
    }
    else
    {
        printf("Enter the value of node: ");
        scanf("%d", &value);
        new_node->data = value;
        printf("\n\n");
    }
    return new_node;
}

struct node *insert_beg()
{
    new_node = create_node();
    if (head == NULL)
    {
        head = new_node;
        new_node->next = NULL;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}

struct node *insert_end()
{
    new_node = create_node();
    if (head == NULL)
    {
        head = new_node;
        new_node->next = NULL;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = new_node;
        new_node->next = NULL;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("Empty List.\n\n");
    }
    else
    {
        ptr = head;

        while (ptr != NULL)
        {
            printf("-<%d>-", ptr->data);
            ptr = ptr->next;
        }

        printf("\n\n");
    }
}

struct node *delete_beg()
{
    if (head == NULL)
    {
        printf("Empty list. nothing to be deleted.");
    }
    else
    {

        head = head->next;
    }
}

struct node *delete_end()
{
    if (head == NULL)
    {
        printf("Empty list. nothing to be deleted.");
    }
    else
    {
        ptr = head;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = NULL;
    }
}

struct node *insert_pos()
{
    ptr = head;
    int pos;
    printf("Enter the position where node is to be inserted: ");
    scanf("%d", &pos);
    new_node = create_node();
    if (head == NULL)
    {
        head = new_node;
        new_node->next = NULL;
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}

struct node *delete_pos()
{
    ptr = head;
    if (head == NULL)
    {
        printf("Empty list. nothing to be deleted.");
    }
    else
    {
        int pos;
        printf("Enter the position where node is to be deleted: ");
        scanf("%d", &pos);
        for (int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }
        ptr1 = ptr->next;
        ptr->next = ptr1->next;
    }
}