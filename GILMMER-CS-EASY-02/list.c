#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct ListNode{
    struct ListNode* next;
    int data;
} Node;
Node* get_node(int val){
    Node* node = malloc(sizeof(Node));
    node -> data = val;
    node -> next = NULL;
    return node;
}
void insert_head(Node* head,int val){
    Node* node = get_node(val);
    Node* head_next = head -> next;
    head -> next = node;
    node -> next = head_next;
}
void insert_tail(Node* head,int val){
    Node* temp = head;
    while(temp->next){
        temp = temp -> next;
    }
    temp -> next = get_node(val);
}
int find(Node* head,int val){
    int distance = 0;
    Node* temp = head -> next;

    while(temp){
        distance++;
        if(temp -> data == val)
            return distance;
        temp = temp -> next;
    }
    return 0;//false
}
bool remove_ele(Node* head,int n){
    if(n <= 0) return false;
    Node* temp = head -> next;
    Node* pre_temp = head;
    for(int i = 0;i < n - 1;i++){
        temp = temp -> next;
        pre_temp = pre_temp -> next;
        if(!temp){
            return false;
        }
    }
    pre_temp -> next = temp -> next;
    free(temp);
    return true;
}
void reverse(Node** head){
    Node *pre_temp = *head;
    Node *temp = (*head) -> next;
    Node *next_temp = temp -> next;
    while(true){
        if(!next_temp){
            temp -> next = pre_temp;
            break;
        }
        temp -> next = pre_temp;
        pre_temp = temp;
        temp = next_temp;
        next_temp = next_temp -> next;
    }
    (*head) -> next = NULL;
    *head = temp;
    
}
int main(){
    Node* head = malloc(sizeof(Node));
    Node* node = get_node(0);
    head -> next = node;
    return 0;
}