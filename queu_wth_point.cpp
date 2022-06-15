///impliment the queue with pointer
#include<iostream>
using namespace std;

//declare globaly variables to access them anywhere thoughout the program pointer *q and 
int *queue; //pointer type queue it's works like storing as array[5]
int f=-1;          //in queue we delete items from fornt and insert items form rear
int r=-1;       //front and rear will at -1 i.e. our quque is empty now 

void enqueue()
{
    if(r==4)    //i.e. to insert 1stly chck rear is at last or not if yes then queue is full i.e. n-1
    {
        cout<<endl<<"queue is full now you can't insert elements";
    }
    else{
        if(f== -1 && r== -1)    //if it's empty then update the position of front and rear to -1 to 0
        {
            f=0;
            r=0;
        }
        else
        {
            r++;    //adding itesm depends on rear hence r++ and front will as it's 0th index
        }
        cout<<endl<<"enter the element at: "<<r<<" location";
        cin>>queue[r];  //queue is pointer and we storing dyanamically 
    }
}

void dequeue()
{
    if((f== -1) || (f > r))  //in queue we deleting from front f if f is -1 i.e. empty or f > r then -1
    {
        cout<<endl<<"queue is empty now you can't dequeue elements";
    }
    else{
        cout<<endl<<"element at "<<f<<" is dequeued now is: "<<queue[f];
        f++;    //we deleting from front so directly leave index and increment front by +1 i.e. 0 to 1...
    }
}

void peep()
{
    if((f== -1) || (f > r))  //in queue we deleting from front f if f is -1 i.e. empty or f > r then -1
    {
        cout<<endl<<"queue is empty now you can't dequeue elements";
    }
    else{
        cout<<endl<<endl<<"peep element is at"<<f<<"  is : "<<queue[f];
    }
}

void disp()
{
    if((f== -1) || (f > r))  //in queue we deleting from front f if f is -1 i.e. empty or f > r then -1
    {
        cout<<endl<<"queue is empty now you can't dequeue elements";
    }
    
else{
        for(int i=f;i<=r;i++)
        {
            cout<<endl<<endl<<queue[i];
        }
   }
}

int main()
{
    int ch;

//pointer body  queue is pointer and having 5 as size which dyanamically stroing values
 
 queue = new int[5];
    
    do{
        cout<<endl<<"Enter menu of queue: ";
        cout<<endl<<"Enter 1. enqueue";       //enqueu= push or insert
        cout<<endl<<"Enter 2. dequeue";      //dequeue= pop or delete
        cout<<endl<<"Enter 3. peep";
        cout<<endl<<"Enter 4. display";
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

    }

    }while(ch>=1 && ch<=4);
}
