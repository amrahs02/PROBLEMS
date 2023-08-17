#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,10> arr;
    
    arr.fill(5);//filled array size(10) times
    arr.fill(6);//filled array size(10) times


    //begin, end
    for(auto it=arr.begin();it!=arr.end();it++){//begin - Returns an iterator pointing to the first element in the array container.
        cout<<*it<<endl;                        // end -  Returns an iterator pointing to the past-the-end element in the array container.
    }


    //rbegin, rend
    for(auto rit=arr.rbegin();rit!=arr.rend();rit++){//rbegin - returns reverse iterator to the begining of the array 
        cout<<*rit<<endl;
    }
    ///size
    int l=arr.size();//The number of elements contained in the array object.
                    //This is a compile-time constant expression (constexpr).

    //max size
    int maxl= arr.maxsize();//The maximum number of elements the object can hold as content.
                            //This is a constexpr.

    //empty
    if(arr.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }





    //[]

    for(int  i=0;ii<n;i++){
        arr[i]<<endl;
    }



    //.at, .front, .back
    for (int i=0; i<10; i++){
        cout << ' ' << arr.at(i);
        arr.front();//access fist elemnt  - Returns a reference to the first element in the array container.
        arr.back()//access last element  - Returns a reference to the last element in the array container.
    }

    //.data
     const char* cstr = "Test string";
        array<char,12> arr;
        memcpy (arr.data(),cstr,12);
        cout << arr.data() << '\n';



    //swap
    array<int,5> first = {10, 20, 30, 40, 50};
    array<int,5> second = {11, 22, 33, 44, 55};

  first.swap (second);

    cout << "first:";
  for (int& x : first) std::cout << ' ' << x;
    cout << '\n';

    cout << "second:";
  for (int& x : second) std::cout << ' ' << x;
    cout << '\n';




    //printing or output of the array
    for(auto& ans: arr){
        cout<<ans<<endl;
    }
}