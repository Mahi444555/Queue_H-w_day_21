#include<iostream>
using namespace std;

int *q;
int f=-1;
int r=-1;
int n;

void enqueue()
{
    if((r == n-1 && f == 0) || (f == r+1))
    {
        cout<<endl<<"your queue is full ";
    }
    else{
        if(f==-1 && r==-1)
        {
            f=0;
            r=0;
        }
        else if(r==n-1) 
        {
            r=0;        //if rear is at last then again set to 0 i.e. circular rotation
        }
        else {
            r++;
        }
        cout<<endl<<"enter element at: "<<r;
        cin>>q[r];
        cout<<endl<<"queued element is : "<<q[r];
    }
}

void dequeue()
{
    if(f==-1 && r== -1) 
    {
        cout<<endl<<"both at -1 sorry your queue is empty now...";
    }
    else{
        cout<<endl<<"we dequeued element is "<<q[f];

        if(f== n-1)
        {
            f=0;    //if we deleted all elemnts and front is at last again reset it to 0
        }
        else{
            f++;
        }
    }
}

void peep(){
if(f==-1 && r== -1) 
    {
        cout<<endl<<"both at -1 sorry your queue is empty now...";
    }
    else{
        cout<<endl<<"peeped item is "<<q[f];
    }
}


void search()
{
if(f==-1 && r== -1) 
    {
        cout<<endl<<"both at -1 sorry your queue is empty now...";
    }
    else{
        cout<<endl<<"enter no to be found: ";
        int N,flag=0;
        cin>>N;
        for(int i=f;i<=r;i++)
        {
            if(N==q[i])
            cout<<endl<<"yes founded at: "<<i;
            flag=1;
        }
        if(flag==0)
        cout<<endl<<"not found";
    } 
    
}

void dispaly()
{
    if(f==-1 && r== -1) 
    {
        cout<<endl<<"both at -1 sorry your queue is empty now...";
    }
    else{
        for(int i=f;i<=r;i++)
        {
            cout<<"\t"<<q[i];
        }
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