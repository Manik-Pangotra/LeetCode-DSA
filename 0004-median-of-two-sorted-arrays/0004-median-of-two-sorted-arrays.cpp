class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int x=n1+n2;
        int arr[x];
        for(int i=0;i<n1;i++){
            arr[i]=nums1[i];
        }
        for(int i=0;i<n2;i++){
            arr[n1+i]=nums2[i];
        }
        int a=x/2;
        sort(arr,arr+x);
        if(x%2!=0){
            return arr[x/2];
        }
        else{
            return (arr[x/2]+arr[(x/2)-1])/2.0;
        }
    }
};