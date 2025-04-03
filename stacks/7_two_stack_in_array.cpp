#include <bits/stdc++.h>
using namespace std;
// implement 2stack using 1 array
class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];

        this->top1 = -1;
        this->top2 = size;
    }
    void push1(int data)
    {
        if (abs(top2 - top1) == 1)
        {
            cout << "Stack OverFlow!" << endl;
            return;
        }
        top1++;

        arr[top1] = data;
    }
    void push2(int data)
    {
        if (abs(top2 - top1) == 1)
        {
            cout << "Stack OverFlow!" << endl;
            return;
        }
        top2--;
        arr[top2] = data;
    }
    void pop1()
    {
        if (arr[top1] == -1)
        {
            cout << "Stack underFlow!" << endl;
            return;
        }
        arr[top1] = 0;
        top1--;
    }
    void pop2()
    {
        if (arr[top2] == size)
        {
            cout << "Stack Underflow!" << endl;
            return;
        }
        arr[top2] = 0;
        top2++;
    }
    int getTop1()
    {
        return arr[top1];
    }
    int getTop2()
    {
        return arr[top1];
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main()
{
    Stack st(8);
    st.print();
    st.push1(1);
    st.print();
    st.push1(2);
    st.print();
    st.push1(3);
    st.print();
    st.push2(4);
    st.print();
    st.push1(5);
    st.print();
    st.push2(6);
    st.print();
    st.push2(7);
    st.print();
    st.push2(8);
    st.print();
    st.push2(86);
    st.print();

    // cout << st.getTop1() << endl;
}