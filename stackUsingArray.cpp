#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int size;
    int *arr;

public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    int getTop()
    {
        if (top > -1 && top <= size)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }
    void push(int item)
    {
        top++;
        size++;
        arr[top] = item;
    }
    void pop()
    {
        if (!empty())
        {
            top--;
            size--;
        }
    }
    int getSize()
    {
        return size;
    }
    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.pop();
    std::cout << "The top element is: " << stack.getTop();

    return 0;
}