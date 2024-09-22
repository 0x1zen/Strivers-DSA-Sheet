#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
class stImpl{
    int st[10];
    int top;
    public:
    stImpl(){
        top=-1;
    }
    void push(int x){
        if(top>=10){
            cout<<"Max Size Reached";
        }
        top=top+1;
        st[top]=x;
    };
    void pop(){
        if(top==-1){
            cout<<"No Value present";
        }
        top=top-1;

    };
    int size(){
        return top+1;
    };
    int getTop(){
        if(top==-1){
            cout<<"No value present";
        }
        return st[top];
    };
};
int main()
{
    stImpl st;
    st.push(10);
    cout<<"size before";
    cout<<st.size();
    cout<<"size after";
    st.pop();
    cout<<st.size();
    st.push(30);
    st.push(10);
    cout<<st.getTop();
 return 0;
}