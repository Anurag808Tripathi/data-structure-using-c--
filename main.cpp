// A linked list program to insert a node at the beginning.

#include <stdlib.h>
#include <stdio.h>    */

struct Node {

int data;
struct Node* next;

};
struct Node* head;
void insert(int x)
{
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;

}

void Print(){
struct Node* temp = head;
printf("List is : ");
while(temp!= NULL)
{
    printf(" %d",temp->data);
    temp= temp->next;
}
printf("\n");

}

int main() {

head = NULL; // empty list;
printf("how many numbers ? \n ");
int n,i,x;
scanf ("%d",&n);
for (i=0;i<n;i++)
{
    printf("Enter the number \n");
    scanf("%d",&x);
    insert(x);
    Print();
}

}



// inserting the element at the iTH position in a linked list

/*
struct Node{

int data ;
struct Node* next;
};
struct Node* head;

Node* temp2 = head;
void print(){
Node* temp = head;
while (temp != NULL) {

    printf("%d ",temp-> data );
    temp = temp->next;
}

printf("\n");
}
void Insert(int data, int n){
Node* temp1= new Node();
temp1 ->data = data;
temp1->next = NULL;
if(n==1) {
    temp1->next = head;
    head = temp1;
    return;

}

Node* temp2 = head;
for(int i=0;i<n-2;i++){
    temp2 = temp2->next;
}
    temp1->next =temp2->next;
    temp2->next = temp1;
}
int main(){
head = NULL;
Insert(2,1);
Insert(3,2);
Insert(4,1);
Insert(5,2);
print();


}
*/


// Linked List: Delete a node at nth position
/*
struct Node {
int data ;
struct Node* next;
};
struct Node* head; // global
void Insert( int x)

{
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;

}



// insert an integer at the end of list
/*
void print(){
struct Node* temp = head;
printf("List is : ");
while(temp!= NULL)
{
    printf(" %d",temp->data);
    temp= temp->next;
}
printf("\n");

}
  // print all elements in the list
void Delete(int n)
{
    struct Node* temp1 = head ;
    if(n==1){
        head = temp1->next; // head now points to second node
        free(temp1);
        return;
    }
    int i;
    for (i = 0;i<n-2;i++)
        temp1 = temp1->next;  // temp 1 points to (n-1)th position

    struct Node* temp2 = temp1->next; // nth node
    temp1->next = temp2->next; // (n+1)th node
    free(temp2); // delete temp 2;
}

int main()
{
    head = NULL;// empty list
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);   // List (2,4,6,5)
    print();
    int n;
    printf("Enter a postion\n");
    scanf("%d", &n);
    Delete(n);
    print();

}
*/









// Reverse a linked list :::
/*

struct Node{

int data;
 Node* next;

};
Node* Insert(Node* head,int data){
    Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data; temp->next = NULL;
    if (head == NULL) head = temp;
    else {
        Node* temp1 = head;
        while(temp1->next!= NULL) temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;
}

    void Print(Node* head){
    while(head != NULL) {
      printf("%d ",head->data);
    head = head->next;
    }

    }
struct Node* Reverse(struct Node* head){
struct Node *current,*prev,*next;
current = head;
prev= NULL;
while(current!=NULL)
{
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
}
head = prev;
return head;
}


int main()
{
    struct Node* head = NULL; // local variables
    head = Insert(head,2);  // Insert: struc Node* Insert(struct Node* head, int data)
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,8);
    Print(head);
    head =Reverse(head);
    Print(head);
}

   */


 //  Printitng Linked List using recursion
/*
struct Node {

int data;
struct Node* next;

};

void Print(struct Node* p)
{
    if(p == NULL) return; // Exit Condition

    Print(p->next); // Recursive Call
     printf("%d ",p->data); // first print the value in the node
}

struct Node* Insert(Node* head , int data){
   Node *temp = (struct Node*)malloc(sizeof(struct Node));
   temp->data = data;
   temp->next = NULL;
   if(head == NULL) head = temp;
   else{
    Node* temp1 = head;
    while(temp1->next != NULL) temp1 = temp1->next;
    temp1->next = temp;
   }
return head;
}

int main()
{
    struct Node* head = NULL; // local variable
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,5);
    Print(head);
}
*/


// Doubly linked list:: transvering , and also in recursive order
/*
struct Node {
int data;
struct Node* next;
struct Node* prev;

};
struct Node* head ; // global variable pointer to head node Node

struct Node* GetNewNode(int x)
{
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
   (*newNode).data = x;
   (*newNode).prev = NULL;
   (*newNode).next = NULL;
   return newNode;
}
void InsertAtHead(int x){
    struct Node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    void Print() {

    struct Node* temp = head;
    printf("forward: ");
    while(temp != NULL)  {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    }
    void ReversePrint(){

    struct Node* temp = head;
    if(temp == NULL) return; // empty list , exit
    // Going to last Node
    while(temp->next != NULL){
        temp = temp->next;
    }
    // Transversing backward using prevoius pointer
    printf("Reverse: ");
    while(temp != NULL) {
        printf("%d",temp->data);
        temp = temp->prev;
    }
    printf("\n");
    }




int main()
{
head = NULL;  // empty list
InsertAtHead(2); Print(); ReversePrint();
InsertAtHead(4); Print(); ReversePrint();
InsertAtHead(6); Print(); ReversePrint();
}
*/


    //    Stacks:: Array based implementation to store integer in a stack
/*
 #define MAX_SIZE 101
 int A[MAX_SIZE];
 int top = -1;
 void Push(int x)
{
    if(top == MAX_SIZE -1){
        printf("Error: stack is overflow\n");
        return;
    }
    A[++top]= x;
}
 void pop()
 {
     if (top==-1)
     {
         printf("Error: No element to pop\n");
         return;
     }
     top--;
 }
 void Print(){

 int i;
 printf("Stack: ");
 for (i=0; i<=top;i++)
    printf("%d ",A[i]);
 printf("\n");

 }
 int main()
 {
     Push(2);Print();
     Push(5);Print();
     Push(10);Print();
     pop();Print();
     Push(12);Print();
 }
*/

// Stack - Linked list implementation
/*
struct Node{

int data;
struct Node* link;

};
 struct Node* top = NULL;
 void Push(int x){
 struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
 temp->data = x;
 temp->link = top;
 top = temp;

 }
 void Pop()
 {
     struct Node *temp;
     if (top == NULL ) return;
     temp = top ;
     top = top->link;
     free(temp);
 }
 void Print()
 {

 }

int main()
{
    Push(2);
    Pop();
}

*/


// Using stack to reverse a string and linked list
/*
#include<iostream>
#include<stack> // stack from standard template library (STL)
#include<string.h>
using namespace std;
void Reverse(char *C , int n)
{

 stack<char> S;
 //loop for push
 for (int i =0;i<n;i++){
    S.push(C[i]);
 }
//loop for pop
for(int i = 0;i<n;i++){
    C[i] = S.top(); // overwrite the character at index 1
    S.pop(); // perform pop
}
}

int main()
{
    char C[51];
    printf("Enter a string: ");
    gets(C);
    Reverse(C,strlen(C));
    printf("Output = %s",C);
}
*/

// Binary search tree implementation in C++
/*
#include <iostream>
using namespace std;
struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;


};
BstNode* GetNewNode(int data) {

   BstNode* NewNode = new BstNode();
   NewNode->data = data;
   NewNode->left = NewNode->right = NULL;
   return NewNode;

}
// Function to insert in bst, returns address of root Node
BstNode* Insert(BstNode* root, int data) {

    if(root == NULL) { // empty tree
        root = GetNewNode(data);

    }
    else if (data <= root->data){
            root->left = Insert(root->left,data);

    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;
}


bool Search(BstNode* root,int data) {
    if(root == NULL)
        return false;
    else if (root->data == data)
        return true;
    else if(data <= root-> data)
        return Search(root->left,data);
    else return Search(root->right,data);

}



int main() {
BstNode* root = NULL; // creating an empty tree
root = Insert(root,15);
  root = Insert(root,10);
  root = Insert(root,20);
root =   Insert(root,25);
  root = Insert(root,8);
  root = Insert(root,12);

   int number;
   cout << "Enter number to be searched\n";
   cin >>number;
   if(Search(root,number) == true)
    cout<<"Found\n";
   else cout<<"Not Found\n";

}

*/
