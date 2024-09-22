#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
class qImpl{
    int q[4];
    int start;
    int end;
    int currSize;
    public:
    qImpl(){
        currSize=0;
        start=-1;
        end=-1;
    }
    void push(int x){
        if(currSize>=4){
            cout<<"Size limit reached";
        }
        if(currSize==0){
        start=start+1;    
        }
        end =end+1;
        q[end]=x;
        currSize=currSize+1;
    }
    void pop(){
        currSize=currSize-1;
        start=start+1;
    }
    int top(){
        return q[start];
    }
    int size(){
        return currSize;
    }
};
int main()
{
    qImpl qu;
    qu.push(10);
    qu.push(20);
    qu.push(45);
    cout<<qu.size();
    cout<<endl;
    cout<<qu.top();
    cout<<endl;
    qu.pop();
    cout<<qu.size();
    cout<<endl;
    cout<<qu.top();
 return 0;
}