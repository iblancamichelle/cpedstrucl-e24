#include<iostream>
#include<conio.h>
using namespace std;

int choice, num, count(0);
class LinkedList{
    struct Node {			//declaration structure Node	
        int x;			
        Node *next;			 //node pointer *next
    };

public:
    LinkedList(){
        head = NULL;
    }

    void addValue(int val){			
        Node *n = new Node();   		
        n->x = val;             	
        n->next = head;         	
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;				
        int ret = n->x;					

        head = head->next;				
        delete n;						
        return ret;
    }
    
private:
    Node *head; 
};



int main(){
	
	LinkedList list;
	do{
	cout<<"\nMAIN MENU";
	cout<<"\n[1] Linked List";
	cout<<"\n[2] Pop";
	cout<<"\n[3] Display";
	cout<<"\n[4] EXIT";
	
	cout<<"\nEnter choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
				cout<<"Enter number:";
				cin>>num;
				list.addValue(num);
				count++;
				break;		
		case 2:
				if (count > 0){
					list.popValue();}
				else{
					cout<<"\n EMPTY" << endl; }
				count--;
				
				break;
				
		case 3:	if (count>0){
				for (int i=0; i<count; i++)
					cout<<list.popValue() << " " << endl ;}
			break;
			
		case 4: return 0; break;
		                                                           
		default: cout<<"Wrong input. Try again!";
				 
	}
	
	} while(choice<4);
}
