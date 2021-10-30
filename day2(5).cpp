//Author: Sahil Anand
//Problem Link: https://www.interviewbit.com/problems/repeat-and-missing-number-array/
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int dup,miss;
    int m[A.size()+1]={0};
    for(auto val : A){
        m[val]++;
    }
    for(int i=1;i<=A.size();i++){
        if(m[i]==0){
            miss=i;
        }
        else if(m[i]>1){
            dup=i;
        }
    }
    vector<int>res={dup,miss};
    return res;
}
