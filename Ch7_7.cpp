#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

// Function to input grades from the user
vector<int> inputGrade(){
    cout<<"Input grades and enter -1 to exit."<<endl;

    // Vector to store the input grades
    vector<int> data;
    int num;
    // Keep taking input until -1 is entered
    while(true){
        cin>>num;
        if(num<0) break;
        data.push_back(num);
    }
    // Vector to store the frequency of each grade
    vector<int> grade(*max_element(data.begin(),data.end())+1);
    // Count the frequency of each grade
    for(int i=0;i<data.size();i++){
        grade[data[i]]++;
    }
    return grade;
}

// Main function
int main(){
    // Input grades from the user
    vector<int> grade=inputGrade();
    // Output the frequency of each grade
    for(int i=0;i<grade.size();i++){
        cout<<"grade "<<i<<": "<<grade[i]<<endl;
    }

    return 0;
}
