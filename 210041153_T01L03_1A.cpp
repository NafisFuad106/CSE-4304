#include<iostream>

using namespace std;

int top = -1;

void push(int x, int Stack[], int maxsize)
{
    if((top+1) == maxsize)
        cout << "Overflow" << endl;
    else
    {
        top++;
        Stack[top] = x;
    }
}
void pop()
{
    if(top == -1)
        cout << "Underflow" << endl;
    else
        top--;
}

bool isEmpty()
{
    if(top == -1)
        return true;
    else
        return false;
}

bool isFull(int maxsize)
{
    if((top + 1) == maxsize)
        return true;
    else
        return false;
}

int Size()
{
    return top + 1;
}

int Top(int Stack[])
{
    return Stack[top];
}

void printStackElement(int Stack[])
{
    int i = 0;
    int x = top;
    while(x != -1)
    {
        cout << Stack[i] << " ";
        i++;
        x--;
    }
}

int main()
{
    int stack_size;
    cin >> stack_size;

    int Stack[stack_size];

    int n, num;
    while(true)
    {
        cin >> n;
        if(n == -1)
            break;
        else
        {
            switch(n)
            {
            case 1:

                cin >> num;
                push(num, Stack, stack_size);
                if((top+1) <= stack_size)
                    printStackElement(Stack);
                break;

            case 2:

                pop();
                printStackElement(Stack);
                break;

            case 3:
                if(isEmpty())
                    cout << "true" << endl;
                else
                    cout << "false" << endl;
                break;

            case 4:
                if(isFull(stack_size))
                    cout << "true" << endl;
                else
                    cout << "false" << endl;
                break;

            case 5:
                cout << Size() << endl;
                break;

            case 6:
                cout << Top(Stack) << endl;
                break;
            }
        }
    }


    return 0;
}
