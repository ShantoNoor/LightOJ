#include <iostream>
using namespace std;

template <typename T, int stack_size>
class Stack
{
    int top = 0;
    T ara[stack_size];
public:
    void push(T a)
    {
        if(top >= stack_size)
        {
            cout << "Error: Stack is FULL!" << endl;
            exit(1);
        }
        else
        {
            ara[top] = a;
            top++;
        }
        
    }
    T pop()
    {
        if(top == 0)
        {
            cout << "Error: Stack is EMPTY!" << endl;
            exit(1);
        }
        else
        {
            top--;
            return ara[top];
        }
    }
    T stackTop()
    {
        if(top == 0)
        {
            cout << "Error: Stack is EMPTY!" << endl;
            exit(1);
        }
        else
        {
            return ara[top-1];
        }
    }
    int getTop()
    {
        return top;
    }
    bool isEmpty() { return top == 0; }
    bool isFull() { return top >= stack_size; }
    T peek(int i)
    {
        if(top - i > -1)
            return ara[top-i];
        else
        {
            cout << "Invalid Index : ";
            return -1;
            cout << endl;
        }
    }
    void beEmpty() { top = 0; }
};

int main()
{
	int t; cin >> t;

	Stack<string, 101> back, front;
	string cmd, url = "http://www.lightoj.com/";

	for (int i = 0; i < t; i++)
	{
		url = "http://www.lightoj.com/";
		cout << "Case " << i+1 << ":" << endl;
		cin >> cmd;
		while(1)
		{
			if(cmd == "VISIT")
			{
				back.push(url);
				cin >> url;
				cout << url << endl;
				front.beEmpty();
			}
			else if(cmd == "BACK")
			{
				if(!back.isEmpty())
				{
					front.push(url);
					url = back.pop();
					cout << url << endl;
				}
				else
					cout << "Ignored" << endl;
			}
			else if(cmd == "FORWARD")
			{
				if(!front.isEmpty())
				{
					back.push(url);
					url = front.pop();
					cout << url << endl;
				}
				else
					cout << "Ignored" << endl;
			}
			else if(cmd == "QUIT")
			{
				break;
			}
			cin >> cmd;
		}

		back.beEmpty();
		front.beEmpty();
	}

	return 0;
}