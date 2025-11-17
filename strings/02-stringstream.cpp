#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str){
    vector<int> parsed;
    stringstream ss(str);
    char ch;
    int num;
    
    while (ss >> num) {
        parsed.push_back(num);
        ss >> ch;
    }
    
    return parsed;
}

int main() {
    string str;
    cin >> str;
    vector<int> result = parseInts(str);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    
    return 0;
}
