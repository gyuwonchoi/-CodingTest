#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(vector<int> arr) {
    bool answer = true;
    int minus=0;
    int arr_len= arr.size();
   
    sort(arr.begin(), arr.end());
       
    for(int i=0; i<arr_len-1; i++){
        minus= arr[i+1] - arr[i];
        
        if(minus!=1){ 
            answer= false;
            return answer;
        }
    }
    
    return answer;
}
