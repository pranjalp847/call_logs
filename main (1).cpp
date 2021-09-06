#include <iostream>
using namespace std;
void print();
void reverse();
struct node
{
    unsigned long long int data;
    string name;
    int date;
    int _time;
    node* next;
};
node* head=NULL;
int sum=1;
void insert(unsigned long long int x,string name,int date,int _time)
{
    node* temp = new node();
    node* t;
    temp->data=x;
    temp->name=name;
    temp->date=date;
    temp->_time=_time;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        t=head;
        while(t->next!=NULL)
        {
           t=t->next; 
        }
        t->next=temp;
    }
    reverse();
    print();
    reverse();
}
void reverse()
{
    node* t1=NULL;
    node* t2=NULL;
    while(head!=NULL)
    {
      t2=head->next;
      head->next=t1;
      t1=head;
      head=t2;
    }
    head=t1;
}
void print()
{
    cout << "Call Logs" << endl;
    int i;
   node* t;
   t=head;
   
   for(i=0;i<sum;i++)
   {
       cout << t->data << " "<< t->name << " "<< t->date << " "<< t->_time << " " << endl;
       t=t->next;
   }
}
void print1()
{
    cout << "Call Logs" << endl;
    int i;
   node* t;
   t=head;
   
   for(i=0;i<10;i++)
   {
       cout << t->data << endl;
       t=t->next;
   }
}
void reverse1()
{
    int i;
    node* t1=NULL;
    node* t2=NULL;
    for(i=0;i<10;i++)
    {
      t2=head->next;
      head->next=t1;
      t1=head;
      head=t2;
    }
    head=t1;
}
int main()
{
    int n,i;
    unsigned long long int x,y;
    string name,name1;
    int date,date1;
    int _time,_time1;

     for(i=0;i<sum;i++)
        {
          cout << "Enter the number | name | date | time" << endl;
          cin >> x;
          cin >> name;
          cin >> date;
          cin >> _time;
          insert(x,name,date,_time);
          sum++;
          if(sum>=11&&x==-1)
          {
              break;
          }
        }
        if(sum>10)
        {
            reverse1();
            for(i=0;i<100;i++)
            {
                cin >> y;
                cin >> name1;
                cin >> date1;
                cin >> _time1;
              node* temp=new node();
              temp->data=y;
              temp->name=name1;
              temp->date=date1;
              temp->_time=_time1;
              temp->next=NULL;
              temp->next=head;
              head=temp;
              print1();
              sum++;
              if(y==-1)
              {
                  break;
              }
            }
        }
     return 0;
}

