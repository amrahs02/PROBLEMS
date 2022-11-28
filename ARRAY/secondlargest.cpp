                                       //largest
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={3,5,6,23,5};
//     int res=0,i;
//     for(i=1;i<5;i++){
//         if(arr[i]>arr[res]){
//             res=i;
//         }
//     }
//     cout<<"Index is" << res<<endl;
//     cout<<"Value is"<<arr[res];
// }

                                  //second largest

#include<iostream>
using namespace std;
int main(){
    int smax=0;
    int arr[10]={3,5,6,2,3,5,78,9,8,23};
    int res=0,i;
    for(i=1;i<10;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
    }
    for(i=1;i<10;i++){
        if(arr[i]==arr[res]){
            continue;
        }
        else{
            if(arr[i]>arr[smax]){
                smax=i;
            }
        }
    }
    cout<<"value of second largest is "<<arr[smax]<<endl;
    cout<<"second largest is "<<smax<<endl;
    cout<<"Index of largest is" << res<<endl;
    cout<<"Value of largest is"<<arr[res];
}


//here for the second largest one thing is keep in mind that 
 // concept 
 ///* make the large to largest and make earlier largest to 2nd largest*/