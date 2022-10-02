#include<iostream>
using namespace std;

class node
{
	public:
		char data;
		node *next;
		
};

class list
{
	public:
		int len;
		node *head;
		
		list()
		{
			head= NULL;
			len = 0;
			
		}
		
		void get_character();
		void display_characters();
		void display_word(int n);
		
		
};

void list::get_character()
{
	int start=1;
	node *temp;
	
	do
	{
		temp = new node;
		
		cout<<"Enter character : ";
		cin>>temp->data;
		cout<<"\n";
		
		temp->next = NULL;
		
		if(head==NULL)
		{
			head=temp;
			
		}
		else
		{
			node *ptr=head;
			
			while(ptr->next!=NULL)
			{
				ptr = ptr->next;
				
			}
			ptr->next = temp;
			
		}
		len++;
		cout<<"Press 1 to add more characters : ";
		cin>>start;
		cout<<"\n";
		
	}while(start==1);
	
	cout<<"Total characters : "<<len<<endl;
	cout<<"\n\n";
	
}

void list::display_characters()
{
	node *ptr = head;
	
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" -> ";
		ptr=ptr->next;
		
	}
	cout<<"NULL";
}

void list::display_word(int n)
{
	node *ptr=head;
	
	while(ptr!=NULL)
	{
	    for(int i=0;i<n;i++)
		{
			if(ptr!=NULL)
			{
				
			    cout<<ptr->data;
			    ptr = ptr->next;
		    }
		    
		}
		cout<<" ";
		
	}
}


int main()
{
	int n;
	
	list l;
	l.get_character();
	l.display_characters();
	cout<<"\n\n";
	
	cout<<"Enter no of charaters in single word : ";
	cin>>n;
	
	cout<<"\n___________ Words _________________\n\n";
	
	l.display_word(n);

	
	return 0;
	
}
