//program to impliment the queue using sturcture
#include<iostream>
using namespace std;

struct queue 
{
    int front;
    int rear;
    int queue[5];   //declaring here array of name queue size 5
};
typedef struct queue queue; //updating name

queue q;    //here created variable or object of stucture queue to access it's variabls
int x;
void enqueue()
{
    if(q.rear==4)   //i.e. size-1 : 5-1=4 i.e. full
    {
        cout<<endl<<"your queue is full "<<endl;
    }
    else{
        if(q.front==-1 && q.rear==-1)   //firstly check if both at -1 then increase -1 to 0
        {
            q.front=0;
            q.rear=0;
        }
        else{
          q.rear++;       //we add elemnts from rear so firstly increas rear only add and front will same
        }
        cout<<endl<<"enter the elemnt at : "<<q.rear<<" index"<<endl;
        cin>>x;     //cin>>q.queue[q.rear]; directly 
        q.queue[q.rear]=x;  //i.e. arr[1]=x i.e. any value
    }
}

void dequeue()  //we always deleting from front so check in queue is empty or not if yes cant delete
{
    if((q.front==-1) ||(q.front > q.rear))
    {
        cout<<endl<<"your queue is empty now you can't delete elements "<<endl;
    }
    
    else{
        cout<<endl<<"dequeued element at : "<<q.front<<" is "<<q.queue[q.front]<<endl;
        if(q.front==q.rear)   //when we deleted all elements from queue then set to empty i.e. -1
        {                       //i.e. q.front will at rear i.e. last elemnt then reset to -1 again to add new elemnts again
            q.front=-1;
            q.rear=-1;
        }
        cout<<endl<<"dequeued element at : "<<q.front<<" is "<<q.queue[q.front]<<endl;
        q.front++;  //directly increase index of fornt ie. 0 to 1 to 2 we dequeue previous item index
        

    }
}

void peep()
{
    if((q.front==-1 && q.rear==-1)||(q.front>q.rear))   //f>r if front exceeds rear then it agin -1
    {
        cout<<endl<<"your queue is empty now"<<endl;
    }
    else{
        cout<<endl<<"peep element is at: "<<q.front<<" is : "<<q.queue[q.front]<<endl;
    }
}

void disp()
{
    if((q.front==-1 && q.rear==-1)||(q.front>q.rear))   //f>r if front exceeds rear then it agin -1
    {
        cout<<endl<<"your queue is empty now"<<endl;
    }
    else{
        for(int i= q.front; i<=q.rear;i++)   //i.e. i=0 ; i<= rear i.e. 4 and i++
        {
            cout<<endl<<endl<<q.queue[i]<<endl;
        }
    }
}

void search()
{
    if((q.front==-1 && q.rear==-1)||(q.front>q.rear))   //f>r if front exceeds rear then it agin -1
    {
        cout<<endl<<"your queue is empty now"<<endl;
    }
    else{
        int find, flag =0;
        cout<<endl<<"enter value to be find "<<endl;
        cin>>find;
        for(int j=q.front;j<=q.rear;j++)
        {
            if(q.queue[j]== find)
            {
                cout<<endl<<"we found elemnts at "<<j<<endl;
                flag =1;
            }
             
        } if(flag==0) cout<<endl<<"not found"<<endl;
    }
}


int main()
{
    int ch;
    q.front=-1;
    q.rear= -1;     //always declare front and rear with -1 i.e. empty

    do{
        cout<<endl<<"Enter Menu of Queue: ";
        cout<<endl<<"Enter 1. enqueue";     //same as push and pop operation like stack
        cout<<endl<<"Enter 2. dequeue";
        cout<<endl<<"Enter 3. peep";
        cout<<endl<<"Enter 4. display";
        cout<<endl<<"Enter 5.  search";
        cout<<endl<<"Enter 6. terminate";

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
                    disp();
                    break;
                case 5:
                    search();
                    break;
            }

    }while (ch>=1&&ch<=5);
    
    

}

