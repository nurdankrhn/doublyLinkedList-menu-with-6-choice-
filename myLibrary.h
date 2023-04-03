#ifndef myLibrary
#define myLibrary
struct node {
	char *str;
    int info;
    struct node *prev, *next;
};

void traverse();
void insertAtFront(char *str);
void insertAtEnd(char *str);
void insertAtPosition(char *str);
int searchlist(struct node **start,char *str);



#endif
