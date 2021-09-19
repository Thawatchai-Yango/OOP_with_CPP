/*
 * OBJECT ORIENTED PROGRAMMING
 * thawatchai Yango
 * ASSIGNMENT 12
 * 203074
 */
#include<iostream>
#include<deque>
#include<stdlib.h>
using namespace std;

class DeQueue
{
public:
    deque<int> push(deque<int>);
    deque<int>pop(deque<int>);
    void display(deque<int>);
};
deque<int> DeQueue::push(deque<int> d)
{
    int no,ch;
    do
    {
        cout<<"\nAt which position you want to push the element";
        cout<<"\n1.Front\n2.Rear\n";
        cin>>ch;
        cout<<"\nEnter the element in Dequeue : ";
        cin>>no;
        switch(ch)
        {
        case 1:
            d.push_front(no);
            break;
        case 2:
            d.push_back(no);
            break;
        default:
            cout<<endl<<"Invalid\n";
            break;
        }
        cout<<"\nDo You Want To Add Another Element (1/0) :";
        cin>>ch;
    }while(ch==1);
    return d;
}
deque<int> DeQueue::pop(deque<int> d)
{
    int ch;
    do
    {
        if(d.empty())
            cout<<"\nDequeue is empty\n";
        else
        {
            cout<<"\nAt which position you want to pop element";
            cout<<"\n1.Front\n2.Rear\n";
            cin>>ch;
            switch(ch)
            {
            case 1:
                d.pop_front();
                break;
            case 2:
                d.pop_back();
                break;
            default:
                cout<<endl<<"Invalid\n";
                break;
            }
        }
        cout<<"\nDo You Want To Delete Another Element (1/0) :";
        cin>>ch;
    }while(ch==1);
    return d;
}
void DeQueue::display(deque<int> d)
{
    deque<int>::iterator it=d.begin();
    cout<<"\nDisplayin Dequeue\n";
    if(d.empty())
        cout<<"\nDequeue is empty\n";
    else
        for(;it!=d.end();it++)
            cout<<" "<<*it;
}
int main()
{
    DeQueue d1;
    deque<int> d;
    int ch;
    do
    {
        cout<<"\n1.push element\n2.pop element\n3.display\n4.exit\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            d= d1.push(d);
            break;
        case 2:
            d=d1.pop(d);
            break;
        case 3:
            d1.display(d);
            break;
        case 4:
            exit(0);
            break;
        }
        cout<<"\nDo you want to continue? (1/0):";
        cin>>ch;
    }while(ch==1);
    return 0;
}
/*

  ***OUTPUT***

1.push element
2.pop element
3.display
4.exit^Z
[1]+  Stopped                 ./a.out
student@B4L0106:~/203049$ g++ Ass12_203049.cpp
student@B4L0106:~/203049$ ./a.out

1.push element
2.pop element
3.display
4.exit
1

At which position you want to push the element
1.Front
2.Rear
1

Enter the element in Dequeue : 12

Do You Want To Add Another Element (1/0) :1

At which position you want to push the element
1.Front
2.Rear
1

Enter the element in Dequeue : 11

Do You Want To Add Another Element (1/0) :1

At which position you want to push the element
1.Front
2.Rear
2

Enter the element in Dequeue : 13

Do You Want To Add Another Element (1/0) :0

Do you want to continue? (1/0):1

1.push element
2.pop element
3.display
4.exit
2

At which position you want to pop element
1.Front
2.Rear
2

Do You Want To Delete Another Element (1/0) :0

Do you want to continue? (1/0):1

1.push element
2.pop element
3.display
4.exit
3

Displayin Dequeue
 11 12
Do you want to continue? (1/0):1

1.push element
2.pop element
3.display
4.exit
1

At which position you want to push the element
1.Front
2.Rear
3

Enter the element in Dequeue : 13

Invalid

Do You Want To Add Another Element (1/0) :1

At which position you want to push the element
1.Front
2.Rear
2

Enter the element in Dequeue : 13

Do You Want To Add Another Element (1/0) :1

At which position you want to push the element
1.Front
2.Rear
2

Enter the element in Dequeue : 14

Do You Want To Add Another Element (1/0) :0

  Do you want to continue? (1/0):1

  1.push element
  2.pop element
  3.display
  4.exit
  3

  Displayin Dequeue
   11 12 13 14

Do you want to continue? (1/0):0

  */


