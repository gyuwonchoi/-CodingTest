#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int* sort(int* arr, size_t arr_len){
    //int len = sizeof(arr)/sizeof(int); // check the sizeof function!
    
    int len = arr_len;
    int* sorted_arr = (int*)calloc(len,sizeof(int));
   
    //insertion sort
    int chk_idx = len-1;   
    int max = arr[0];
    int max_idx = 0;
   
    while(chk_idx){
        max= -1; //initialize **
        
        for(int a = 0; a < chk_idx+1; a++){
            if(max<arr[a]){
                max=arr[a];
                max_idx= a;
            }
        }
        
        arr[max_idx] = arr[chk_idx];
        arr[chk_idx] = max;
        
        chk_idx--;
    }
    
    return arr;
    //free?
}

// arr_len은 배열 arr의 길이입니다.
bool solution(int* arr, int arr_len) {
    bool answer = true;
    int minus=0;
    int arr_len= arr.size();
    
    //printf("size: %d \n",sizeof(arr));
    
    int* sorted_arr = (int*)malloc(arr_len*sizeof(int));
    
    //print the sorted array
    /*for(int i=0; i< arr_len; i++){
        printf("%d ", sorted_arr[i]);
    }*/
    
    for(int i=0; i<arr_len-1; i++){
        minus= arr[i+1] - arr[i];
        
        if(minus!=1){ 
            answer= false;
            return answer;
        }
    }

    return answer;
}
