#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}node;

node*head;
node*tail;

int size();
node* create_node(int x);
void insert_s(int x);
void insert_l(int x);
void insert_m(int x,int n);
void delete_s();
void delete_l();
void delete_m(int n);
void reverse();

int main(){
    int x;
    printf("input a number \n");
    scanf("%d",&x);
    printf("\n\n");
    head=create_node(x);
    tail=head;

    insert_s(34);
    insert_l(76);
    insert_l(476);
    insert_m(11,2);
    delete_s();
    delete_l();
    insert_l(908);
    insert_m(564,1);
    delete_m(2);

    for(node*ptr=head;ptr!=NULL;ptr=ptr->link){
        printf("%d \n",ptr->data);
    }

    reverse();
    printf("after reversing linked list is:\n");

    for(node*ptr=head;ptr!=NULL;ptr=ptr->link){
        printf("%d \n",ptr->data);
    }

    return 0;
}


node* create_node(int x){
    node* temp=(node *)malloc(sizeof(node));
    temp->data=x;
    temp->link=NULL;
    return temp;
}

void insert_s(int x){
    node* temp=create_node(x);
    temp->link=head;
    head=temp;
}

void insert_l(int x){
    node* temp=create_node(x);
    tail->link=temp;
    tail=temp;
}

void insert_m(int x,int n){
    node *cur=head;
    node *nxt=head->link;
    int count=1;
    while(count<n&&nxt->link!=NULL){
        cur=nxt;
        nxt=nxt->link;
        count++;
    }

    node* temp=create_node(x);
    temp->link=nxt;
    cur->link=temp;

}

void delete_s(){
    if(head==NULL){
        printf("linked list is empty\n");
    }
    else{
        head=head->link;
    }
}

void delete_l(){
    if(head==NULL){
        printf("linked list is empty\n");
    }
    node* it=head;
    while(it->link!=tail){
        it=it->link;
    }

    it->link=NULL;
    tail=it;
}

void delete_m(int n){
    if(head==NULL)
        printf("linked list is empty\n");
    else if(size()<n+2)
        printf("not possible to delete at position %d\n",n);
    else{
        node *cur=head;
        node *nxt=head->link;
        int count=1;
        while(count<n && nxt->link!=NULL){
            cur=nxt;
            nxt=nxt->link;
            count++;
        }
        cur->link=nxt->link;
    }
}

int size(){
    node* it=head;
    int count=1;
    while(it!=tail){
        it=it->link;
        count++;
    }
    return count;
}

void reverse(){
    node* pre=NULL;
    node* cur=head;
    node* nxt=NULL;

    while(cur!=NULL){
        nxt=cur->link;
        cur->link=pre;
        pre=cur;
        cur=nxt;
    }
    tail=head;
    head=pre;
}