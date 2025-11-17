#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string tmp;
    vector<string> HRML;
    vector<string> query;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin,tmp);
        HRML.push_back(tmp);
    }
    for(int i = 0; i < q; i++) {
        getline(cin,tmp);
        query.push_back(tmp);
    }
    map<string, string> m;
    vector<string> tag;
    for(int i = 0; i < n; i++)
    {
        tmp=HRML[i];
        tmp.erase(remove(tmp.begin(), tmp.end(), '\"' ),tmp.end());
        tmp.erase(remove(tmp.begin(), tmp.end(), '>' ),tmp.end());
        if(tmp.substr(0,2)=="</")
        {
            tag.pop_back();
        }
        else
        {
            stringstream ss;
            ss.str("");
            ss << tmp;
            string t1,p1,v1;
            char ch;
            ss >> ch >> t1 >> p1 >> ch >> v1;
            string tmp1="";
            if(tag.size()>0)
            {
                tmp1=*tag.rbegin();
                tmp1=tmp1+"."+t1;
            }
            else
                tmp1=t1;
            tag.push_back(tmp1);
            m[*tag.rbegin()+"~"+p1]=v1;
            while(ss)
            {
                ss >> p1 >> ch >> v1;
                m[*tag.rbegin()+"~"+p1]=v1;
            }
        }
    }
    for(int i = 0; i < q; i++){
        if (m.find(query[i]) == m.end())
            cout << "Not Found!\n";
        else
            cout<<m[query[i]]<<endl;
    }
    return 0;
}