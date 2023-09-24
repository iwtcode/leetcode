int maxProfit(int* prices, int pricesSize){
    int min=prices[0], ans=0;
    for(int i=0; i<pricesSize; i++) {
        min = prices[i] < min ? prices[i] : min;
        ans = prices[i]-min > ans ? prices[i]-min : ans;
    }
    return ans;
}