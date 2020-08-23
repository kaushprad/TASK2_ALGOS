#include <bits/stdc++.h> 
using namespace std; 
int solve(string tagS, int l)    //Defining solve function to obtain length of prefix.
{ 
    int max = 0; 
    int count =0;
      
    for (int i = 0; i < l; i++) {         //Running a loop to the each index of the tag string for"<" or ">".
        if (tagS[i] == '<')               //logic used here being if the number of <&> are equal, count will be zero, if < is more than >, implies count will be positive and a prefix wil exist. if > more than <, count will be negative,and prefix wont be there.
            count += 1; 
        else
            count -= 1; 
        if (count < 0) 
            break; 
        if (count == 0) 
            max = i + 1; 
    } 
    return max; 
}  
int main() 
{ 
   int T;                        //Taking input for number of test cases.
   cin>>T;                       
   while(T--)
   { 
   string str;                     //Taking input for the tag string.
   cin>>str;                       
    int l = str.size();            //calculating the size of tag string and storing it in n.
    cout << solve(str, l) << endl;     //function calling.
}
    return 0; 
}