#include "iostream"
#include "vector"
#include "cstring"
#include "string"

using namespace std;

// Lookup table for encoding digits into bars
const vector<int> table={7,4,2,1,0};

// Class definition for ZipCode
class ZipCode{
public:
    // Default constructor
    ZipCode(){}

    // Constructor that takes a zip code
    ZipCode(int zip){
        this->zip=zip;
    }

    // Constructor that takes a bar code
    ZipCode(string bar){
        int zip=barToZip(bar);
        this->zip=zip;
    }

    // Function to output the bar code representation of the zip code
    const void outputBar(){
        string bar=zipToBar(zip);
        cout<<"Bar code:"<<bar<<endl;
    }

    // Function to output the zip code
    const void outputZip(){
        cout<<"Zip code:"<<zip<<endl;
    }

private:
    int zip;

    // Function to convert a zip code to its bar code representation
    string zipToBar(int zipNum) {
        string section = to_string(zipNum);
        string origin=convertToBar(section[0]);
        for(int i=1;i<5;i++){
            string patch=convertToBar(section[i]);
            origin+=patch;
        }
        return "1"+origin+"1";
    }

    // Function to convert a bar code to its zip code representation
    int barToZip(string bar) {
        vector<char> group(begin(bar)+1,end(bar)-1);
        vector<int> zipList;
        int sum=0;
        for(int i=0;i<group.size();i++){
            int index=(i%5);
            if(group[i]=='1'){
                sum+=table[i%5];
            }
            if(index==4){
                if(sum==11) sum=0; 
                zipList.push_back(sum);
                sum=0;
            }
        }
        return zipList[0]*10000+zipList[1]*1000+zipList[2]*100+zipList[3]*10+zipList[4];
    }  

    // Function to convert a digit to its bar representation
    string convertToBar(char num){
        switch(num){
            case '0':
                return "11000";
                break;
            case '1':
                return "00011";
                break;
            case '2':
                return "00101";
                break;
            case '3':
                return "00110";
                break;
            case '4':
                return "01001";
                break;
            case '5':
                return "01010";
                break;
            case '6':
                return "01100";
                break;
            case '7':
                return "10001";
                break;
            case '8':
                return "10010";
                break;
            case '9':
                return "10100";
                break;
        }
    }
};

// Main function
int main(){
    // Create a ZipCode object with a zip code
    ZipCode* z1 = new ZipCode(99504);
    // Output the bar code representation
    z1->outputBar();

    // Create a ZipCode object with a bar code
    ZipCode* z2 = new ZipCode("110100101000101011000010011");
    // Output the zip code
    z2->outputZip();

    return 0;
}