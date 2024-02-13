#include <bits/stdc++.h>
using namespace std;
template <class T>
class Stack
{
private:
    T *stkArr;
    int top;
    T size;

public:
    Stack(T sze)
    {
        size = sze;
        top = -1;
        stkArr = new T[size];
    }
    T Pop();
    void Push(T x);
};
template <class T>
T Stack<T>::Pop()
{
    if (top == -1)
    {
        cout << "UnderFlow Empty" << endl;
    }
    T x = 0;
    x = stkArr[top];
    top--;
    return x;
}
template <class T>
void Stack<T>::Push(T x)
{
    if (top == size - 1)
    {
        cout << "Overflow stack full" << endl;
    }
    top++;
    stkArr[top] = x;
}
int main()
{
    Stack<int> s(1);
    s.Pop();
    return 0;
}
/*
1> There is template<class T> at every function and <T> after className like void Stack<T>::Push(T x); like this
2> and we already know if we want to write function outside of class so we use this way || int Stack::Push(int s){//code};
3> convert every data type into T
4>during initialization of object declare there data type also like Stack<double>or<int>or<float>or<char> s(7or2.2or2,3for'c'); etc.
*/