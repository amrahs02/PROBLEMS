// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str="[{()}]";
//     stack<char> st;
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         if(ch=='('||ch=='{'||ch=='['){
//             st.push(ch);
//         }
//         else{
//             if(!st.empty()){
//                 char ch1=st.top();//wrong 
//                 if(ch1==')'){
//                     st.pop();
//                     if(st.top()=='('){
//                         cout<<"Balanced"<<endl;
//                     }
//                     else{
//                         cout<<"Not 1 Balanced"<<endl;
//                     }
//                 }
//                 else if(ch1=='}'){
//                     st.pop();
//                     if(st.top()=='{'){
//                         cout<<"Balanced"<<endl;
//                     }
//                     else{
//                         cout<<"Not 2Balanced"<<endl;
//                     }
//                 }
//                 else  {
//                     st.pop();
//                     if(st.top()=='['){
//                         cout<<"Balanced"<<endl;
//                     }
//                     else{
//                         cout<<"Not 3 Balanced"<<endl;
//                     }
//                 }
//             }
//         }
//     }
// }




