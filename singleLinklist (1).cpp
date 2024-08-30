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
int findmin(){
	if(head == NULL){
		printf("The List is empty");
		return -1;
	}
	int min = head->data;
	struct Node* temp = head;
	while(temp != NULL){
		if(temp->data < min){
			min = temp->data;
		}
		temp = temp->next;
	}
	return min;
}
int findmax(){
	if(head == NULL){
		printf("The List is empty");
		return -1;
	}
	int max = head->data;
	struct Node* temp = head;
	while(temp != NULL){
		if(temp->data > max){
			max = temp->data;
		}
		temp = temp->next;
	}
	return max;
}
float findaverage(){
	int count = 0;
	float sum = 0;
	struct Node* trav = head;
	while(trav != NULL){
		sum = sum + trav->data;
		count++;
		trav = trav->next;
	}
	float average = sum/count;
	return average;
}
float findvariance(int mean){
	double variance = 0;
	int count = 0;
	struct Node* temp = head;
	while(temp != NULL){
		variance = variance + pow((temp->data - mean),2);
		count ++;
		temp = temp->next;
		return variance/count;
	}
}
float findSD(float variance){
	return sqrt(variance);
}
int main(){
	int element;
	int num;
	while(1){
	printf("Enter \n1 to add an element.\n2 to display the list.\n3 to find the max element.\n4 to find the min element.\n5 to find the average.\n6 to find the variance\n7 to exit : ");
	scanf("%d", &element);
	if(element == 1){
		printf("Enter the element: ");
		scanf("%d", &num);
		appendNode(num);
	}
	else if(element==2){
		printf("The elements of the Linked List are:\n ");
		display();
	}
	else if(element==3){
		int max = findmax();
		printf("The max element is: %d", max);
	}
	else if(element == 4){
		int min = findmin();
		printf("The min element is: %d", min);
	}
	else if(element == 5){
		float average = findaverage();
		printf("The average is: %f", average);
	}
	else if(element == 6){
		float mean = findaverage();
		float var = findvariance(mean);
		printf("The variance is: %f", var);
	}
	else if(element == 7){
		float mean = findaverage();
		float var = findvariance(mean);
		float sd = findSD(var);
		printf("The Standard Ddeviation is: %f: ", sd); 
	}
		
}

return -1;
		
}
