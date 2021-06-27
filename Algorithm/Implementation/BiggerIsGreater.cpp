#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string biggerIsGreater(string w) {
    if(w.size()==0){
        return "no answer";
    }
    int n=w.size();
    int i,indx=0;
    for(i=w.size()-1;i>=0;){
        if(w[i-1]>=w[i]){
            --i;
        }
        else{
            indx=i;
            break;
        }
    }
    
    if(indx<=0){
        return "no answer";        
    }else{
        int pivot=indx-1;
        int swap=-1;
        for(int i=w.size()-1;i>=0;i--){
            if(w[pivot]<w[i]){
                int temp=w[pivot];
                w[pivot]=w[i];
                w[i]=temp;
                break;
            }
        }
        
        int cnt=0;
        reverse(w.begin()+indx,w.end());
    }
    return w;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<biggerIsGreater(s)<<endl;
    }
    return 0;
}