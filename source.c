//Double Link List with Strings 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <stddef.h>
#include <string.h>
#include "myLibrary.h"
#include "myLibrary.c"

 
 
int main()
{
    int i,choice;
    while (1) {
    	int n=0;
    	char str[30];
 
        printf("\n\t1  Adding at front of the list\n");
        printf("\t2  Adding at any position the list\n");
        printf("\t3  Adding end of the list\n");
        printf("\t4  Search in list\n");
        printf("\t5  To see list\n");
        printf("\t6  To exit list\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
        
        if(choice==1)
        {
        	printf("How many times you add at front: ");
        	scanf("%d",&n);
        	for( i=0;i<n;++i)
        	{
        		printf("please enter name:");
        		scanf("%s",str);
        		insertAtFront(str);
			}
		}
		
 		else if(choice==2)
        {
        	printf("How many times you add at any position: ");
        	scanf("%d",&n);
        	for( i=0;i<n;++i)
        	{
        		printf("please enter name:");
        		scanf("%s",str);
        		insertAtPosition(str);
			}
		}
		
		else if(choice==3)
        {
        	printf("How many times you add at end: ");
        	scanf("%d",&n);
        	for(i=0;i<n;++i)
        	{
        		printf("please enter name:");
        		scanf("%s",str);
        		insertAtEnd(str);
			}
		}
		
		else if(choice==4) //bunu yapmadým yapýcamm
        {
        	printf("How many times you look for list: ");
        	scanf("%d",&n);
        	for(i=0;i<n;++i)
        	{
        		printf("\nplease enter name:");
        		scanf("%s",str);
        		int a=searchlist(&start,str);
        		if(a>0)
        		{
        			printf("Congrulations(: String found and its index number is: %d",a);
				}
			}
		}
		
		else if(choice==5)
        {
        	traverse();
		}
		
		else if(choice==6)
        {
			exit (1);
		}
		
		else 
        {
        	printf("Unvalid choice, please try again!");
		}
	
    }
    return 0;
}

