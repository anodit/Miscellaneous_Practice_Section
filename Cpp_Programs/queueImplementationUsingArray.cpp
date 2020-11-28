#include <iostream>
#define N 10
using namespace std;

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear == N-1)
    {
        cout<<"Queue is Full :";
    }
    else if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
    }
    else
    {
        queue[++rear] = x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is Empty :";
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void display()
{
    int i = front;
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is Empty :";
    }
    else
    {
        cout<<"Elements in a Queueu : ";
        while(i<=rear)
        {
            cout<<queue[i]<<" ";
            i++;
        }
        cout<<endl;
    }
    
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    dequeue();
    display();

    return 0;
}