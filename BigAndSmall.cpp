#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int idx=0;
    int word_idx=0;
    
   for(idx=0;idx<s.size();idx++){
        //if the character is black,
        if(s[idx]==' '){         
            word_idx=0; // reset the word char index
            continue;   // and skip to the next char of string
        }
     
        if((word_idx%2)==0){ //if the word idx is even (should be big letter)
            if((char)s[idx]>96) // if the char is small letter
                s[idx]=(int)s[idx]-32; //convert to big one
        }
        else{ //if the word idx is even (should be small letter)
            if((char)s[idx]<96)  // if the char is big
                s[idx]=(int)s[idx]+32; //convert to small
        }
        word_idx++;
    }
    
    answer=s;
    return answer;
}
