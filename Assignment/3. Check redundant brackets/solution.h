#include<stack>

bool checkRedundantBrackets(string &expression) {
    stack<char> st;
    int count = 0;
    
    for(char& ch : expression) {
        
        if(ch==')') {
            count = 0;
            
            while(!st.empty() && st.top()!='(') {
                count++;
                st.pop();
            }
            st.pop();
            
            if(count==0 || count==1) {
                return true;
            }
        }
        else {
            st.push(ch);
        }
    }
    return false;
}



// bool checkRedundantBrackets(string expression) {
    
//     stack<char> st;
//     int count = 0;

//     for(auto& ch : expression) {
// 	 	// count = 0;
        
//         if(ch != ')')
//         {
//             st.push(ch);
//         }
//         else
//         {
//             count = 0;
        

//             while (!st.empty() && st.top()!='(') {
//                 st.pop();
//                 count++;
//             }
//             st.pop();
           
//                 if(count==0||count==1)
//                 {
//                     return true;
//                 }
               
//             }
        
//     }
//  return false;
  
// }