#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *tail=NULL;
int getlength(){
	struct node *ptr = tail->next;
	int l=0;
	while(ptr != tail){
		l++;
		ptr = ptr->next;
	}
	l++;
	return l;
}
void insbeg(){
	int d;
	cout<<"Enter the data to be inserted in the beginning"<<endl;
	cin>>d;
	struct node *newnode = new node;
	if(tail==NULL){
	newnode->data = d;
	tail = newnode;
	tail->next = newnode;
	}
	else{
		newnode->data = d;
		newnode->next = tail->next;
		tail->next = newnode;
	}
}
void insend(){
	int d;
	if(tail==NULL){
		cout<<"List is empty"<<endl;
	}
	else{
		cout<<"Enter the data to be inserted at the end"<<endl;
		cin>>d;
		struct node *newnode = new node;
		newnode->data = d;
		newnode->next = tail->next;
		tail->next = newnode;
		tail = newnode;
	}
}
void insafter(){
	if(tail==NULL){
		cout<<"The list is empty"<<endl;
	}
	else{
		int d,pos;
		cout<<"Enter the data to be inserted"<<endl;
		cin>>d;
		cout<<"Enter the position after which you want to insert"<<endl;
		cin>>pos;
		struct node *newnode = new node;
		struct node *ptr = tail->next;
		for(int i=0;i<pos-1;i++){
			ptr = ptr->next;
		}
		newnode->data = d;
		newnode->next = ptr->next;
		ptr->next = newnode;
	}
}
void del(){
	int len = getlength();
	if(tail==NULL){
		cout<<"List is empty"<<endl;
	}else{
		int pos;
		cout<<"Enter the position at which you want to delete"<<endl;
		cin>>pos;
		if(pos==1 && tail->next == tail ){
			cout<<"The deleted element is "<<tail->data<<endl;
			tail = NULL;
			cout<<"The list is empty now"<<endl;
		}
		else if(pos==1){
			cout<<"The deleted element is "<<tail->next->data<<endl;
			tail->next = tail->next->next;
			cout<<tail->next->data;
		}else if(pos==len){
			struct node *current = tail->next;
			struct node *prev = tail->next;
			while(current->next!=tail->next){
				prev = current;
				current = current->next;
			}
			prev->next = tail->next;
			tail = prev;
			cout<<"The deleted element is "<<current->data<<endl;
		}else{
			struct node *ptr = tail->next;
			struct node *nextnode;
			for(int i=0;i<pos-2;i++){
				ptr = ptr->next;
			}
			nextnode = ptr->next;     
			ptr->next = nextnode->next;  
			cout<<"The deleted element is "<<nextnode->data<<endl;
		}
	}
}
void search(){
	if(tail==NULL){
		cout<<"List is empty"<<endl;
	}else{
		int d,flag=0,i=0;
		cout<<"Enter the value to be searched"<<endl;
		cin>>d;
		struct node *ptr = tail->next;
		while(ptr->next!=tail->next){
			if(ptr->data==d){
				cout<<"Item found at position "<<i+1<<endl;
				flag=0;
				break;
			}else{
				flag=1;
			}
			i++;
			ptr = ptr->next;
		}
		if(ptr->data==d && flag!=0){
			cout<<"Item found at position "<<i+1<<endl;
		}
		else if(flag==1){
			cout<<"Item not found"<<endl;
		}
	}
}
void display(){
	if(tail==NULL){
		cout<<"List is empty"<<endl;
	}else{
		cout<<"The elements of list are:"<<endl;
		struct node *ptr = tail->next;
		while(ptr != tail){
			cout<<ptr->data<<"<==>";
			ptr = ptr->next;
		}
		cout<<ptr->data<<endl;
	}
}
int main(){
	insbeg();
	insbeg();
	insbeg();
	del();
	insend();
	insafter();
	display();
	search();
	return 0;
}
