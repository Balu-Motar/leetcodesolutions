class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int c[m+n];
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(a[i]<b[j]) c[k++]=a[i++];
            else c[k++]=b[j++];
        }
        if(i==m){
            while(j<n){
                c[k++]=b[j++];               
            }
        }
        else{
              while(i<m){
                 c[k++]=a[i++];              
            }
           
        }
        for(int i=0;i<m+n;i++)
        {
            a[i]=c[i];
        }
        
    }
};
