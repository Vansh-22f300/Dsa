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
};

// check for redundant bracjet
bool checkRedundantBratcket(string s)
{
    stack<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            st.push(ch);
        else if (ch == ')')
        {
            int operatorCount = 0;
            while (st.size() != 0 && st.top() != '(')
            {
                char temp = st.top();
                if (temp == '+' || temp == '-' || temp == '*' || temp == '/')
                    operatorCount++;
                st.pop();
            }
            st.pop();
            if (operatorCount == 0)
                return 1;
        }
    }
    return 0;
}
bool checkRedundantBracket(string s)
{
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch =='('|| ch =='+'||ch =='-'||ch =='*'||ch =='/'){
            st.push(ch);
        }
        else if(ch==')'){
            int operatorcount=0;
            while(st.size()!=0&&st.top()!='('){
                char temp=st.top();
                if (temp == '+' || temp == '-' || temp == '*' || temp == '/')
                    operatorcount++;
                st.pop();

            }
            st.pop();
            if (operatorcount == 0)
                return 1;
        }
    }
    return 0;

}

int main()
{
    string str = "((a+b)*(a+b))";
    int ans=checkRedundantBracket(str) ;
    if(ans==0)cout<<"redundant not present";
    else{
        cout<<"Redundatnt present";
    }
    return 0;
}
