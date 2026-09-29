class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
        int n1=a.size();
        int n2=b.size();
        int n=n1+n2;
        int cnt=1;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                if(cnt==k)return a[i];
                cnt++;
                i++;
            }else{
                if(cnt==k)return b[j];
                cnt++;
                j++;
            }
        }
        while(i<n1){
             if(cnt==k)return a[i];
                cnt++;
                i++;
        }while(j<n2){
            if(cnt==k)return b[j];
                cnt++;
                j++;
        }
  }
};
