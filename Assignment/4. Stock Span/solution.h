#include<stack>

int* stockSpan(int *price, int size)  {
    
	
    int* span = new int[size];
    
    stack<int> st;
    st.push(0);
    span[0] = 1;
    
    for( int i = 1; i < size; i++) {
        
        while(!st.empty() && price[i]>price[st.top()] ) {
            st.pop();
        }
        
        if(st.empty()) {
            span[i] = i + 1;
        }
        else {
            span[i] = i - st.top();
        }
        
        st.push(i);
    }
    
    return span;
}