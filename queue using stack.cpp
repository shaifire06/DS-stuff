#include <iostream>
#include <stack>
using namespace std;
void enqueue(stack<int> &st, int data)
{
    st.push(data);
}
int deque_queue(stack<int> &st1, stack<int> &st2)
{

    if (st1.empty() && st2.empty()) 
    {
        cout << "queue is emplty" << endl;
        return -1;
    }
    if (st2.empty())
    {
        while (!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
    }
    int x=st2.top();
    st2.pop();
    return x;
}

int main()
{
    stack<int> st1, st2;

    enqueue(st1, 10);
    enqueue(st1, 20);
    enqueue(st1, 30);
    enqueue(st1, 40);
    cout<<deque_queue(st1, st2)<<endl;
    cout<<deque_queue(st1, st2)<<endl;
    cout<<deque_queue(st1, st2)<<endl;
    cout<<deque_queue(st1, st2)<<endl;
    cout<<deque_queue(st1, st2)<<endl;

    return 0;
}
