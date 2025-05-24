#include <stdio.h>
#include <stdlib.h>

struct lnode{
    int data;
    struct lnode*prev;
    struct lnode*next;
};

typedef struct lnode node;

node*head=NULL;
node*tail=NULL;

void insertatbeg(int val){
    node*newNode=(node*)malloc(sizeof(node));
    if(newNode==NULL){
        printf("Out of Memory !");
        return;}

    newNode->data=val;
    if(head==NULL){
        newNode->next=NULL;
        newNode->prev=NULL;
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        newNode->prev=NULL;

    }
    printf("\nInserted !");
}

void display(){
    if(head==NULL){
        printf("\nList is empty ! ");
        return;
    }

    printf("\nElements in the list from head are : ");
    node*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void displayRev(){
    node*temp=tail;
    if(temp==NULL){
        printf("\nList is empty ! ");
        return;
    }

    printf("\nElements in the list from tail are : ");

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
}

void insertatpos(int pos,int val){
    node*temp=head;
    if(temp==NULL || pos==0){
        insertatbeg(val);
        return;
        }
    node*newNode=(node*)malloc(sizeof(node));
    if(newNode==NULL){
        printf("Out of Memory !");
        return;}
    newNode->data=val;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;

        }
    newNode->next=temp->next;
    if(temp->next==NULL)
        tail=newNode;
    else
        temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
    printf("\nThe data %d is Inserted at Position %d",val,pos);
}

void delatpos(int pos){
    if(head==NULL){
        printf("List is Empty ! No Possible Deletion ");
        return;
    }
    node*temp=head;
    node*prev;
    if(pos==0){
            head=head->next;
            if(head==NULL){
                tail=NULL;
                head=NULL;
                printf("\nDeleted ! ");
                return;
            }
        head->prev=NULL;
        free(temp);
        printf("Node at Position 0 is Deleted Successfully");
        return;
    }


    for(int i=0;i<pos;i++){
        prev=temp;
        temp=temp->next;
        if(temp==NULL){
            printf("\nOut of Bound Deletion ");
            return;
        }
    }

    prev->next=temp->next;
    if(temp->next==NULL)
        tail=temp->prev;
    else
        temp->next->prev=prev;
    free(temp);
    printf("\nData is deleted Successfully ! Display the data to Confirm ");

}

/*void readatpos(int pos){
    if(head==NULL){
        printf("List is Empty ! ");
        return;
    }
    node*temp=head;
        for(int i=0;i<pos;i++){
            temp=temp->next;
            if(temp==NULL){
            printf("Out of Bound reading !");
            return;
        }

    }
    printf("The data at Position %d is %d ",pos,temp->data);
}

void delatend(){
     if(head==NULL){
        printf("List is Empty ! No Possible Deletion ");
        return;
    }
    node*temp=head;
    node*prev;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }

prev->next=NULL;
free(temp);
printf("End Node has been Deleted Successfully !");
return;
}

void insertatend (int val){
    if(head==NULL){
        insertatbeg(val);
        return;
    }
    node*newNode=(node*)malloc(sizeof(node));
    if(newNode==NULL){
        printf("Out of Memory !");
        return;
        }
    newNode->data=val;
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
temp->next=newNode;
newNode->next=NULL;
printf("Successfully Insertd at End ! ");
}

void searchdata(int val){
    if(head==NULL){
        printf("List is Empty ! ");
        return;
    }int i=0;
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            printf("The Value %d is Found at Index %d\n",val,i);
            return;
        }
    temp=temp->next;i++;
}
printf("The value %d is not found ! \n",val);

}

void updatebydata(int oldv,int newv){
    if(head==NULL){
        printf("List is Empty!\n");
        return;
    }
    node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        if(temp->data==oldv){
            temp->data=newv;
            printf("Updated %d by %d !\n",oldv,newv);
            return;
        }
    }
    printf("Value %d not found !!!\n",oldv);
}*/
// Value Declaration
int cho,pos,val,sdata,oldv,newv;

int main(){

    insertatpos(0,2);
    delatpos(0);

    display();
    displayRev();

    return 0;
}
