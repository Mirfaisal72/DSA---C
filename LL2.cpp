#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node{
	int data;
	struct Node* next; // for referencing the tail of one element with the other we use pointers
};
//Global head and tail pointers
struct Node* head = NULL; // the head and tail is going to contain dynamically alloted nodes thats why we use pointers 
struct Node* tail = NULL;

//Function to create a new node
struct Node* createNode(int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // for dynamic allocation of nodes we use pointers
	if(newNode == NULL){
		printf("Memory allocation failed\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
//Function to append the elements 
void appendNode(int data){
	struct Node* newNode = createNode(data);
	if(head == NULL){
		head = newNode;
		tail = newNode;
	}
	else{
		tail->next = newNode;
		tail = newNode;
	}
}
// function to display elements
void display(){
	struct Node* trav = head;
	while(trav!=NULL){
		printf("%d -> ",trav->data);
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
	trav->next = newNode;
	if(trav == tail){
		tail = newNode;
	}	
}
void deleteNode(int key){
	struct Node* temp = head; // pointer to traverse the list
	struct Node* prev = NULL; // to keep the track of previous node
	//if the node to be deleted is the head node
	if(temp != NULL && temp->data == key){
		head = temp->next;//change the head
		free(temp); // free the memory of old head
		if(head == NULL){ // if the list is empty 
			tail == NULL; //Update the tail to NULL
		}
		return;	
	}
	//search for the node to be deleted
	while(temp != NULL && temp->data != key){
		prev = temp;
		temp = temp->next;
	}
	// if the key was not present in the list
	if(temp == NULL){
		printf("The key %d is not present in the list.\n", key);
		return;		
	}
	//Unlink the node from the linked list
	prev->next = temp->next;
	if(temp == tail){// if the node to be deleted is the tail
		tail = prev; //update the tail
	}
		free(temp); //free the memory of the deleted node
	}
void removeAllInstances(int key){
	struct Node* temp = head; // pointer to traverse the list
	struct Node* prev = NULL; // to keep the track of previous node
	
	while (temp != NULL) {
        if (temp->data == key) {
            if (temp == head) { // If the node to be deleted is the head
                head = temp->next; // Update the head
                free(temp); // Free the old head
                temp = head; // Update temp to the new head
                if (head == NULL) { // If the list is now empty, what if the list had only one node
                    tail = NULL; // Update the tail to NULL
                    return;
                }
            } else { // if the node to be deleted was other than head
                prev->next = temp->next; // Unlink the node
                if (temp == tail) { // If the node to be deleted is the tail
                    tail = prev; // Update the tail
                }
                free(temp); // Free the memory of the deleted node
                temp = prev->next; // Update temp to the next node
            }
        } else {
            prev = temp; // Update prev to the current node
            temp = temp->next; // Update temp to the next node
        }
    }
}
int main(){
	appendNode(1);
	appendNode(2);
	appendNode(3);
	appendNode(1);
	appendNode(5);
	appendNode(6);
	appendNode(1);
	appendNode(8);
	display();
	//insert();
//	display();
	removeAllInstances(1);
	display();
}
