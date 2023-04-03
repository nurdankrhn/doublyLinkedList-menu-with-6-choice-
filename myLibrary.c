#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <stddef.h>
#include <string.h>
#include "myLibrary.h"

struct node* start = NULL;
void traverse()
{
    // List is empty
    if (start == NULL) {
        printf("\nList is empty\n");
        return;
    }
    // Else print the Data
    struct node* temp;
    temp = start;
    while (temp != NULL) {
        printf("Name = %s\n", temp->str);
        temp = temp->next;
    }
}
 
void insertAtFront(char *str)
{
 
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
	temp->str=(char *) malloc( (strlen(str) + 1));
	strcpy(temp->str, str);
    temp->prev = NULL;
 
    temp->next = start;
    start = temp;
}
 
void insertAtEnd(char *str)
{
    struct node *temp, *trav;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->str=(char *) malloc( (strlen(str) + 1));
	strcpy(temp->str, str);
    temp->prev = NULL;
    temp->next = NULL;
    temp->next = NULL;
    trav = start;
 
    if (start == NULL) {
 
        start = temp;
    }
 
    else {
        while (trav->next != NULL)
            trav = trav->next;
        temp->prev = trav;
        trav->next = temp;
    }
}
 
void insertAtPosition(char *str)
{
    int pos, i = 1;
    struct node *temp, *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->str=(char *) malloc( (strlen(str) + 1));
	strcpy(newnode->str, str);
    newnode->next = NULL;
    newnode->prev = NULL;
 
    printf("\nEnter position : ");
    scanf("%d", &pos);
     
 
    if (start == NULL) {
        start = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
    }
 
    else if (pos == 1) {
    
        newnode->next = start;
        newnode->next->prev = newnode;
        newnode->prev = NULL;
        start = newnode; 


    }
 

    else {
    temp = start;
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
    }
}

int searchlist(struct node **start,char *str)
{
	struct node *temp=*start;
	int pos=0;
	 while(strcmp(temp->str,str)!=0 && temp->next!=NULL){
	 	pos++;
	 	temp=temp->next;
	 	
	}	
	if(strcmp(temp->str,str)==0)
	{
	 	return(pos+1);
	}
	else
		printf("Error!!! There is no string like that\n");
}
