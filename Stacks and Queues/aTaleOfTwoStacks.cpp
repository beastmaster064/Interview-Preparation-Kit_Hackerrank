#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
  
    public:
        stack<int> stack_n, stack_o;   
        void push(int x) {
                 stack_n.push(x);         
        }

        void pop() {
            if(stack_o.empty())
                while(!stack_n.empty()){
                    stack_o.push(stack_n.top());
                    stack_n.pop();
                }
            stack_o.pop();    
            
        }

        int front() {
            if(stack_o.empty())
               while(!stack_n.empty()){
                    stack_o.push(stack_n.top());
                    stack_n.pop();
                }
            return stack_o.top();
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


