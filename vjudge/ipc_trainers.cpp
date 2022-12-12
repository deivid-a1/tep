#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        LL N,D; cin>>N>>D;
        priority_queue<vector<LL>,vector<vector<LL>>,greater<vector<LL>> > pq;
        for(int i=0;i<N;i++){
            LL d,l,s; cin>>d>>l>>s;
            pq.push(vector<LL>{d,l,s});
        }
        
        priority_queue<pair<LL,LL>> available;
        LL d = 1;
        while(d <= D){
            while(pq.top()[0] == d){
                available.push(make_pair(pq.top()[2],pq.top()[1]));
                pq.pop();
            }
            if(!available.empty()){
                pair<LL,LL> top = available.top();available.pop();
                if(top.second > 1){
                    available.push({top.first,top.second - 1});
                }
            }
            d++;
        }
        
        LL ans = 0;
        while(!available.empty()){
            pair<LL,LL> top = available.top();available.pop();
            ans += top.first*top.second;
        }
        cout<<ans<<"\n";
    }
    return 0;
}