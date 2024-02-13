#include <bits/stdc++.h>
using namespace std;
class StackOverflow : exception
{
};
class StackUnderflow : exception
{
};
class Stack
{
private:
    int *stkArr;
    int top;
    int size;

public:
    Stack(int sze)
    {
        size = sze;
        top = -1;
        stkArr = new int[size];
    }
    void Push(int x)
    {
        if (top == size - 1)
            throw StackOverflow();
        top++;
        stkArr[top] = x;
    }
    int Pop()
    {
        if (top == -1)
            throw StackUnderflow();
        return stkArr[top--];
    }
};
int main()
{
    try
    {
        Stack s(1);
        // s.Pop();

        s.Push(3);
        // s.Push(3);
    }
    catch (StackOverflow s)
    {
        cout << "stack fully filled" << endl;
    }
    catch (StackUnderflow s)
    {
        cout << "stack empty hai" << endl;
    }

    return 0;
}