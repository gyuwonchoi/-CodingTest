#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for(int a =0; a<completion.size(); a++){
        if(completion[a]!=participant[a]){
            return participant[a];
        }    
    }
    return participant[participant.size()-1];
}
