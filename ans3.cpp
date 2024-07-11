class Solution {
public:
vector<int> finalPrices(vector<int>& prices) {
int n=prices.size();
stack<int>st;
vector<int>ans(n);
for(int i=n-1;i>=0;i--){
while(!st.empty() and prices[st.top()]>prices[i]){
st.pop();
}if(st.empty()){
ans[i]=prices[i];
}else{
ans[i]=prices[i]-prices[st.top()];
}st.push(i);
}return ans;
}
};