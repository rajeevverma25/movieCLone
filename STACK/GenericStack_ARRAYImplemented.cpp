#include<iostream>
using namespace std;
template <typename T>
class stack{
    T* arr;
    int t;
    int n; 
     
    public:
        stack(int n){
            arr=new T[n];
            t=-1;
            this->n=n;
        }
        void push(T data){
              if(t==n-1)
              {
               return ;   
              }
              t=t+1;
              arr[t]=data;
        }
        void pop(){
            if(t!=-1){
                return;
            }
            t=t-1;
        }
        T top(){
            cout<<arr[t]; 
        }
        bool empty(){
             return t==-1;
        }
        int size(){
             return t+1;
        }
};
int main()
{
    stack<int> s[5];
    cout<<"size : "<<s.size()<<endl;
    cout<<"isEmpty ? "<<s.empty()<<endl;
    s.push[10];
    s.push[20];
    s.push[30];
    s.push[40];
    s.push[50];
     cout<<"size : "<<s.size()<<endl;
     cout<<"top : "<<s.top()<<endl;
     cout<<"isEmpty ? "<<s.empty()<<endl;
    s.pop();
     cout<<"size : "<<s.size()<<endl;
    cout<<"top "<<s.top()<<endl;
    return 0;
}