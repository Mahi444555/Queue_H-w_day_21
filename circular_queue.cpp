/*implimenting circular queue using pointers : enqueue() dequeue() peep() display() search() 
having two points front and rear from front we remove the items and from rear we insert items 
only rear will update it's index front as it is after -1 to 0 then rear -1 0 1 2 .. n-1
*/
#include<iostream>
using namespace std;

//declare pointer gloabaly to used it throughout the program to store or works like array
int *q; //pointer instead of queue[5] 
int f=-1;    //declaring front and rear as globaly
int r=-1;
int n;
void enqueue()
{
    if((r == n-1 && f == 0) || (f == r+1))   //i.e. when queue is full when rear is at last (n-1) and front will at 0th index or front will exact one step ahed of rear i.e. f==r+1 imagin circular 
    {
        cout<<endl<<"your queue is full ";
    }
    else{
        if(f == -1 && r==-1)    //if both at -1 (empty) set to 0 then only rear will update in ese part
        {
            f=0;
            r=0;
        }
        else if(r == n-1)    //again check in circular queu if rear is at last then set at 0 again
        {
            r=0;
        }
        else{
            r++;
        }
    cout<<endl<<"Enter the element at: "<<r;
    cin>>q[r];
    cout<<endl<<"we enqueued element is: "<<q[r];
    }
}

void dequeue()
{
    if(f==-1 && r== -1)
    {
        cout<<endl<<"Sorry, your queue is empty we can't remove any element from it  ";
    }
    else{
        cout<<endl<<"we dequeued these element  "<<q[f];
        //q[f]=0;

        if(f == r)   //these condition only true when we delete all itms and front reach at last n-1 thne we reset to -1 both until and unless we can't insert any new elemnt in queue.
        {
            f=-1;
            r=-1;
        }
        else if(f== n-1)    //if we deleted all items and front will at n-1 location then again reset it to 0
        {
           f=0;    //to add new items in it again 
        }
        else{
            f++;
        }
    } 
}

void peep()
{
    if(f== -1 && r==-1)
    {
        cout<<endl<<"your queue is empty has no elements ";
    }
    else {
        cout<<endl<<endl<<"peep elements is at  "<< f <<"\t"<<q[f];
    }
}
// void search()
// {
//     return; 
// }

void disp()
{
     if(f== -1 && r==-1)
    {
        cout<<endl<<"your queue is empty has no elements ";
    }
    else{
        for(int i=f;i<=r;i++)
        cout<<"\t"<<q[i];
    }
}


int main()
{
int ch;
// f=-1;
// r=-1;   //i.e. our queue is empty now
cout<<endl<<"enter n:";
cin>>n;
q=new int[n];   // 'q' pointer dynamically allocated 
do{
            cout<<endl<<"ENTER QUEUE MENU: "<<endl;
            cout<<endl<<"Enter 1. enqueue";
            cout<<endl<<"Enter 2. dequeue";
            cout<<endl<<"Enter 3. peep";
           // cout<<endl<<"Enter 4.  search";
            cout<<endl<<"Enter 4. display";
    cout<<endl<<"Enter your choice : ";
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
        // case 4:
        //     search();
        //     break;
        case 4:
            disp();
            break;

         }
    }while(ch>=1 && ch<=4);

}