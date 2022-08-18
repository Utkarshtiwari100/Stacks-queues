#include<stack>
 bool isBalanced(string expression) {
     
     stack<char> st;
     
     for(auto& ch : expression) {
         
         if(ch=='(' || ch=='{' || ch=='[') {
             st.push(ch);
         }
         else {
             
             while(!st.empty() && ( (ch==')' && st.top()=='(' ) || ( ch=='}' && st.top()=='{' ) || ( ch==']' && st.top()=='[' ) )) {
                 st.pop();
             }
             
             
         }
     }
     return st.empty() ? 1 : 0;
     
 }


// bool isBalanced(string expression) 
// {
//     stack<char> s;
    
//     for (int i = 0 ; i < expression.length(); i++) {
        
//         char ch = expression[i];
        
//         if ( (ch == '[') || (ch == '{') || (ch == '(') ) {
//             s.push(ch);
//         }
//         else {
//             if( !s.empty()) {
                
//                 char top = s.top();
                
//                 if ( ( ch == ']' && top == '[' ) || ( ch == '}' && top == '{' ) || ( ch == ')' && top == '(' ) ) {
//                     s.pop();
//                 }
//                 else {
//                     return false;
//                 }
                
//             }
//             else {
//                 return false;
//             }
//         }
        
//     }
    
//     return s.empty() ? true : false;
    
// }