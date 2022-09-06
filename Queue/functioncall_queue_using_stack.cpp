#include "bits/stdc++.h"
using namespace std;


class queue1{ //beacuse queue is already included in bits/stdc++
    stack<int> s1;
  


    public:
    void push(int x){
        s1.push(x);
    }


    int pop(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }

        int item=pop();
        s1.push(x);
        return item;
    }

    bool empty(){
         if(s1.empty() ){
            cout<<"queue is empty";
            return true;
        }
        return false;
    }
};



int main(){
    queue1 q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.pop();

    return 0;

}