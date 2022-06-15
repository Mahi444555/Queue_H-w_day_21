//program to impliment the queue with pointer i.e. dynamically 
#include<iostream>
using namespace std;

int *q;     //dynamically we allocating memrory hecne uesd pointer 
int f=-1;
int r=-1;
int n;
void enqueue()
{
    if(r==n-1)  //i.e. rear is at last then it's full
    {
        cout<<endl<<"Sorry queue is full ";
    }
    else{
        if(f== -1 && r==-1) //then firstly set if both at -1 i.e. empty to 0th index
        {
            f=0;
            r=0;
        }
        else{
            r++;
        }
        cout<<endl<<"Enter the element at index: "<<r <<"\t";
        cin>>q[r];
        cout<<endl<<"we queued the element in queue i.e. "<<q[r];
    }
}

void dequeue()
{
    if(f == -1 && r == -1)
    {
        cout<<endl<<"Sorry your queue is empty now...";
    }
    else{
        cout<<endl<<"we dequeued these element : "<<q[f];
        q[f]=0;

        if(f == r)  //both at  f= n-1 & r= n-1 i.e. last then again reset to -1 to again insert items
        {
            r=-1;
            f=-1;
        }
        else{
            f++;
        }
    }
}

void peep()
{
    if(f== -1 && r== -1)
    {
        cout<<endl<<endl<<"queue is empty now...";
    }
    else{
        cout<<endl<<endl<<"peep element is at  "<<f <<"\t"<<q[f];
    }
}

void search()
{
    if(f== -1 && r== -1)
    {
        cout<<endl<<endl<<"queue is empty now...";
    }
    else{
        cout<<endl<<endl<<"Enter the element to be found: ";
        int find,flag=0;
        cin>>find;
        for(int i=f;i<=r;i++)
        {
            if(q[i]==find)
                {
                    cout<<endl<<endl<<"element found at: "<<i<<"  index";
                    flag=1;
                }
                
        }
        if(flag==0)
        cout<<endl<<"not found";
    }
}

void dispaly()
{
    if(f== -1 && r== -1)
    {
        cout<<endl<<endl<<"queue is empty now...";
    }

    else{
        for(int i=f;i<=r;i++)
        cout<<"\t"<<q[i];
    }
}


int main()
{
    int ch;
   // int n;  //size of pointer to be allocates
    cout<<endl<<"enter the pointer size: ";
    cin>>n;

    q=new int[n];   //q=new integer typep[5]  dynamic memory allocation

    do{
            cout<<endl<<endl<<"ENTER THE MENU OF QUEUE";
            cout<<endl<<"Enter 1. enqueue";
            cout<<endl<<"Enter 2. dequeue";
            cout<<endl<<"Enter 3. peep";
            cout<<endl<<"Enter 4. search";
            cout<<endl<<"Enter 5. display";
        cout<<endl<<endl<<"Enter your choice: ";
        cin>>ch;

            switch(ch)
            {
                case 1: 
                    enqueue();
                    break;
                case 2:
                    dequeue();
                    break;
                case 3:
                    peep();
                    break;
                case 4:
                    search();
                    break;
                case 5:
                    dispaly();
                    break;    
            }
    }while(ch>=1 && ch<=5);



}