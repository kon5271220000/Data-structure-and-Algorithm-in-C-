#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node* head = NULL;

void InsertNewNode(int newData){
    struct node* newNode = (struct  node*) malloc(sizeof(struct node));
    newNode->data = newData;
    head->next = newNode;
    newNode->next = NULL;
}

void PrintLinkedList(){
    struct node* ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout<< ptr->data << "->";
        ptr = ptr->next;
    }
    
    
}

int main(){
    InsertNewNode(1);
    InsertNewNode(2);
    InsertNewNode(3);
    InsertNewNode(4);
    InsertNewNode(5);
    cout << "linked list:" << endl;
    PrintLinkedList();
    return 0;
}