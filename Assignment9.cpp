/*
Queues are frequently used in computer programming, and a typical example is the creation of a job queue by an operating system.
If the operating system does not use priorities, then the jobs are processed in the order they enter the system.
Write C++ program for simulating job queue. Write functions to add job and delete job from queue.
*/


/*
Queues are frequently used in computer programming, and a typical example is the creation of a job queue by an operating system.
If the operating system does not use priorities, then the jobs are processed in the order they enter the system.
Write C++ program for simulating job queue. Write functions to add job and delete job from queue.
*/


#include <iostream>
using namespace std;

struct Node{
	int time;
	int job;
	Node *next;
};

class Priority_Queue{
	Node *front;
	public:
	void insert_job(int,int);
	void delete_job();
	void display();
	Priority_Queue(){
		front = NULL;
	}
};

void Priority_Queue :: insert_job(int job, int time)                    //Function to insert an element in the priority queue
{
	Node *q, *temp = new Node();
	temp->job = job;
	temp->time = time;
	if(front == NULL || time < front->time){
		temp->next = front;
		front = temp;
	}
	else{
		q = front;
		while(q->next != NULL && q->next->time <= time){
			q = q->next;
		}
		temp->next = q->next;
		q->next = temp;
	}
}

void Priority_Queue :: delete_job()                                             //Function to delete element from priority queue
{
	Node *temp;
	if(front == NULL){
		cout<<"\nQueue Underflow!\n";
	}
	else{
		temp = front;
		cout<<"\nDeleted Job is : "<<temp->job<<"\n";
		front = front->next;
		delete(temp);
	}
}

void Priority_Queue :: display()                                        //Function to display elements of Priority Queue
{
	Node *temp = front;
	if(temp == NULL){
		cout<<"\nQueue Is Empty!\n";
	}
	else{
		cout<<"\nThe Queue is :\n";
		cout<<"Job\tTime\n";
		while(temp!=NULL){
			cout<<temp->job<<"\t"<<temp->time<<"\n";
			temp = temp->next;
		}
	}
}

int main(){
	Priority_Queue obj;
	int t=1, job, time, ch;
	while(t){
		cout<<"\nEnter Any One Choice :\n";
		cout<<"1. Insert Value in Priority Queue\n";
		cout<<"2. Delete Value from Priority Queue\n";
		cout<<"3. Display the Priority Queue\n";
		cout<<"4. Exit.\n";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\nEnter The Job Number : ";
				cin>>job;
				cout<<"Enter its Time Value : ";
				cin>>time;
				obj.insert_job(job,time);
			break;

			case 2:
				obj.delete_job();
			break;

			case 3:
				obj.display();
			break;

			case 4:
				t=0;
			break;

			default:
				cout<<"Wrong Input!";
			break;
		}
	}
	return 0;
}
