#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    long long ten=0;
    long long remain=0;
    int last=0;
    
    while((n/10)!=0){
        ten=n%10;              //extrat num from the last 
        answer.push_back(ten); //push to array
        n=n/10;                //update the num(last num is removed)
        }
    
    last = n%10;               //for the very last one
    answer.push_back(last);
    return answer;
}
