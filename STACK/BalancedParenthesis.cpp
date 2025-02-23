#include<iostream>
#include<stack>
 using namespace std;
 bool isBalanced(string str){
     stack<char> s;
     for (char ch : str)
     {
         switch(ch){
            case '(' :
            case '{' :
            case '[' : s.push(ch); break;
            case ')' : if(!s.empty() && s.top()== '(') s.pop(); else return false; break;
            case '}' : if(!s.empty() && s.top()== '{') s.pop(); else return false; break;
            case ']' : if(!s.empty() && s.top()== '[') s.pop(); else return false; break;
         } 
     }
     return s.empty();
 }
 int main()
 {
     string str="([{}])";
     isBalanced(str)? cout<<"BALANCED"<<endl:
                      cout << "NOT BALANCED"<<endl;
                      return 0;
 }