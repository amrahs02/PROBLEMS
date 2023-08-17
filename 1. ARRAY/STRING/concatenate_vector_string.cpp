// // #include <bits/stdc++.h>
    
// // // int main () {
// // //     std::string str = "Hello World!";
// // //     std::vector<std::string> vec(10,str);
// // //     std::string a = std::accumulate(vec.begin(), vec.end(), std::string(""));
// // //     std::cout << a << std::endl;
// // // }
// //   using namespace std;
// // int main () {
// //   string str = "Hello, world!";
// //   vector<string>  vec (10, str);
// //   // Concatenate here?

// //   return 0;
// // }

// #include<vector>
// #include<string>
// #include<iostream>
// #include<algorithm>
// using namespace std;
// string i;
// void func(string &k)
// {
//   i+=k;
// }
// int main () {
//     string str = "Hello World!";
//     vector<string>  vec (10,str);

//     for_each(vec.begin(),vec.end(),func);
//     cout<<i;
//     return 0;
//   }
#include <bits/stdc++.h>
    
int main () {
    std::string str = "Hello World!";
    std::vector<std::string> vec(20,str);
    std::string a = std::accumulate(vec.begin(), vec.end(), std::string(""));
    std::cout << a << std::endl;
}