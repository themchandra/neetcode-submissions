class MinStack {

private:
    vector<int> st;
    vector<int> minSt;
public:
    MinStack() {
    }
    
    void push(int val) {
        if (((minSt.empty()) or (val <= minSt.back()))) {
            minSt.push_back(val);
        }

        st.push_back(val);
    }
    
    void pop() {
        if (st.empty()){
            return;
        }

        if (st.back() == minSt.back()){
            minSt.pop_back();
        }
        st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return minSt.back();
        
    }
};
