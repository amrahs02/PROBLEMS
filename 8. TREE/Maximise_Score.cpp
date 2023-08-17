// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int len;
//         cin>>len;
//         int arr[len];
//         for(int i=0;i<len;i++){
//             cin>>arr[i];
//         }
//         int res1,res2,res3,res4;
//         int arr1[len-1];
//         int arr2[len-1];
//         vector<int> v3;
//         for(int i=0;i<len-1;i++){
//             res1 = abs(arr[i+1]-arr[i]);
//             arr1[i]=res1;
//         }
//         for(int i=1;i<len;i++){
//             res2 = abs(arr[i]-arr[i-1]);
//             arr2[i]= res2;
//         }
//         for(int i=0;i<len;i++){
//             int res3 = max(arr1[i],arr2[i]);
//             v3.push_back(res3);

//         }
//         res4 = *min_element(v3.begin(),v3.end());
//         cout<<res4<<endl;
//     }
// }
//correct
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t!=0)
	{
	    int n,d=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int c=abs(a[0]-a[1]);
	    for(int i=1;i<n-1;i++)
	    {
	        d=max(abs(a[i-1]-a[i]),abs(a[i]-a[i+1]));
	        c=min(c,d);
	    }
	    c=min(c,abs(a[n-1]-a[n-2]));
	    cout<<c<<endl;
	    t-=1;
	}
	return 0;
}





