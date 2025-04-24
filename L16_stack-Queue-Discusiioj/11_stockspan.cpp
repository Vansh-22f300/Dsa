#include<bits/stdc++.h>
#include <stack>
class Pair{
    public:
        int price;
        int span;
};
    class StockSpanner {
    public:
        stack<Pair>s;
        StockSpanner() {
            
        }
        
        int next(int price) {
            int x=1;
            while (!s.empty() && price>=s.top().price) {
                x+=s.top().span;
                s.pop();
            }
            
            s.push(Pair(price, x));  // ✅ push a Pair object
            return x;
        }
    };
    
    /**
     * Your StockSpanner object will be instantiated and called as such:
     * StockSpanner* obj = new StockSpanner();
     * int param_1 = obj->next(price);
     */