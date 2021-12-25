#include <iostream>
#include <vector>
using namespace std;
int func(const int&,vector<int>&);
int main()
{
    vector<int> data;
    int input;
    for(int i = 1;i<=101;++i){
        data.push_back(i);
    }
    cin >> input;
    auto output = func(input,data);
    if (output != -1)
    cout << output + 1;
    system("pause");
    return 0;
}

int func (const int& input,vector<int>& data){

    auto beg = data.begin();
    auto last = data.end();
    auto mid = beg + (last-beg)/2;;
    while(beg<=last-1)
    {
        if (*mid == input){
            return mid - data.begin();
        }else if(*mid > input){
            last = mid-1;
        }else{
            beg = mid+1;
        }
        mid = beg + (last-beg)/2;
        cout << *beg << *mid << *last << endl;
    }
    cout << "can't find" << endl;
    return -1;
}
