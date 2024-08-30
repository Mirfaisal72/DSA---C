#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
};
struct Node* head = NULL;
struct Node* tail = NULL;

struct Node* createNode(int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	if(newNode == NULL){
		printf("Memory allocation failed\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}
void appendNode(int data){
	struct Node* newNode = createNode(data);
	if(head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
		tail->next = newNode;
		newNode->prev = tail; 
		tail = newNode;
	}
}
void display() {
    struct Node* trav = head;
    while (trav != NULL) {
        printf("%d -> ", trav->data);
        trav = trav->next;
    }
    printf("NULL\n");
}
void insert(){
	int element, node;
	printf("Enter the element you want to insert: ");
	scanf("%d",&element);
	printf("Enter the node after which you want to insert: ");
	scanf("%d",&node);
	struct Node* trav = head;
	while(trav->data != node){
		trav = trav->next;
	}
	struct Node* newNode = createNode(element);
	newNode->next = trav->next;
	newNode->prev = trav;
	if(trav->next != NULL){
		trav->next->prev = newNode;
	}
	trav->next = newNode; 
	if(trav == tail){
		tail = newNode;
	}
}
void deleteNode(int key){
	struct Node* temp = head;
	while(temp != NULL && temp->data != key){
		temp = temp->next;
	}
	if(temp==NULL){
		printf("The key %d is not present in the list\n", key);
		return;
	}
	if(temp->prev != NULL){
		temp->prev->next = temp->next;
	}
	else{
		head = temp->next;
	}
	if(temp->next != NULL){
		temp->next->prev = temp->prev;
	}
	else{
		tail = temp->prev;
	}
	free(temp);
}
int main(){
	appendNode(1);
	appendNode(2);
	appendNode(3);
	appendNode(4);
	appendNode(5);
	appendNode(6);
	appendNode(7);
	appendNode(8);
	display();
	deleteNode(6);
	deleteNode(8);
	deleteNode(1);
	//insert();
	display();
}
