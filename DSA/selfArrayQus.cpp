

#include <iostream>
#include <stdio.h>
using namespace std;
class ArrayDsaImproved
{
private:
    int *ptr;
    int capacity;
    int lastindex;

public:
    ArrayDsaImproved(int);
    ~ArrayDsaImproved();
    bool isEmpty();
    void append(int);
    void atSpecific(int, int);
    bool isFull();
    void edit(int, int);
    void deletIndex(int);
    void getSpecificIndex(int);
    int countElement();
    int ArrayDsaImproved::findElement(int);
};

ArrayDsaImproved::ArrayDsaImproved(int size)
{
    if (size > 0)
    {
        capacity = size;
        lastindex = -1;
        ptr = new int[capacity];
    }
    ptr = NULL;
}

bool ArrayDsaImproved::isEmpty()
{
    return lastindex == -1;
}
bool ArrayDsaImproved::isFull()
{
    return lastindex == capacity - 1;
}
ArrayDsaImproved::~ArrayDsaImproved()

{
    delete[] ptr;
}
int ArrayDsaImproved::countElement()
{
    return lastindex + 1;
}
void ArrayDsaImproved::append(int data)
{

    if (lastindex == capacity - 1)
    {
        cout << "Array is full / overflow ";
    }
    else
    {
        ++lastindex;
        ptr[lastindex] = data;
    }
}
void ArrayDsaImproved::atSpecific(int index, int data)
{
    if (index < 0 || index > lastindex + 1)
    {
        cout << endl
             << "invalid index";
    }
    else if (lastindex == capacity - 1)
    {
        cout << "overflow";
    }
    else
    {
        for (int i = lastindex + 1; i > index; i--)
        {
            ptr[i] = ptr[i - 1];
        }
        ptr[index] = data;
        lastindex++;
    }
}
void ArrayDsaImproved::edit(int index, int data)
{
    if (index <= lastindex && index >= 0)
    {
        ptr[index] = data;
    }
    else
    {
        cout << "invalid index";
    }
}
void ArrayDsaImproved::getSpecificIndex(int index)
{
    if (index <= lastindex && index >= 0)
    {
        cout << ptr[index];
    }
    else
    {
        cout << "invalid index";
    }
}
void ArrayDsaImproved::deletIndex(int index)
{
    if (index >= 0 && index <= lastindex)
    {
        for (int i = index; i < lastindex; i++)
        {
            ptr[index] = ptr[index + 1];
        }
        lastindex--;
    }
}
int ArrayDsaImproved::findElement(int element)
{
    for (int i = 0; i <= lastindex; i++)
    {
        if (ptr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    return 0;
}
