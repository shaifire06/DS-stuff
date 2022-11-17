#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top = -1;
    char *s;

    void push(char x)
    {
        if (top >= size - 1)
        {
            cout << "stack overflowed" << endl;
        }
        else
        {
            top++;
            s[top] = x;
            cout << x << " pushed into stack" << endl;
        }
    }

    int pop()
    {
        if (top <= -1)
        {
            cout << "stack overflowed" << endl;
            return -1;
        }
        else
        {
            cout << "the popped element is " << s[top] << endl;
            top--;
            return s[top];
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            cout << "yes stack is empty" << endl;
            return true;
        }
        else
        {
            cout << "No stack is not empty" << endl;
            return false;
        }
    }
    void isFull()
    {
        if (top == size - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            cout << "stack is not full" << endl;
        }
    }

    void display()
    {
        if (top >= 0)
        {
            for (int i = 0; i <= top; i++)
            {
                cout << s[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "stack is empty" << endl;
        }
    }
    void peek()
    {
        if (top < 0)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << "the element is " << s[top] << endl;
        }
    }
    int isoperator(char x)
    {
        if (x == '+' || x == '-' || x == '*' || x == '/')
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    int pre(char c)
    {
        if (c == '+' || c == '-')
        {
            return 1;
        }
        else if (c == '*' || c == '/')
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }

    int stackTop()
    {
        return s[top];
    }
};
char *convert(char *infix)
{
    Stack st;
    char *postfix = new char[20];
    int i = 0, j = 0;
    while (i != '\0')
    {
        cout << "hi0" << endl;
        if (st.isoperator(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {

            if (st.pre(infix[i]) > st.pre(st.s[st.top]))
            {
                st.push(infix[i++]);
            }
            else
            {
                postfix[j++] = st.pop();
            }
        }
    }
    while (!st.isEmpty())
    {
        cout << "hi" << endl;
        postfix[j++] = st.pop();
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    Stack st;
    char infix[] = {"1+3+3-32*2+344"};
    st.size=20;
    st.s=new char[20];
    st.push('#');
    st.display();
    char *postfix = convert(infix);
    cout << postfix;
    return 0;
}
