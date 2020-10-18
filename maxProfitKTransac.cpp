You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

Design an algorithm to find the maximum profit. You may complete at most k transactions.


class Solution {
public:
    int scaffold(vector<int> prices, vector<int>& vis, int size ){
        int max =0;
        int min = INT_MAX;
        int real_min_i = INT_MIN;
        int min_i = INT_MIN, max_i = INT_MIN;
        for(int i=0;i<size;++i){
            if(vis[i]!=1){
                if(prices[i]<min){
                    min = prices[i];
                    min_i = i;
                }
                if(max < prices[i]-min){
                    max = prices[i]-min;
                    real_min_i = min_i;
                    max_i = i;
                }
            }
        }
        //cout<<min_i<<"::"<<max_i<<endl;
        //cout<<real_min_i<<"::"<<max<<endl<<endl;
        if(real_min_i!=INT_MIN && max_i!=INT_MIN){
            vis[real_min_i] = 1;
            vis[max_i] = 1;
        }
            
        return max;
    }
    int maxProfit(int k, vector<int>& prices) {
        int out = 0;
        const int size = prices.size();
        vector<int> vis(size,0);
        while(k){
            --k;
            out+= scaffold(prices,vis,size);
        }
        return out;
    }
};
