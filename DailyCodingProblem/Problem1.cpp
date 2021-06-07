#include<iostream>
#include<unordered_set>
#include<vector>

bool hasPair(int n, std::vector<int> list)
{
    //store the number in a set
    std::unordered_set<int> s;
    for (int elem: list)
    {
        s.insert(elem);
    }

    for (int elem: list){
        //find (n -elem) if it exists in set
        if(s.find(n-elem) != s.end())
        {
            return true;
        }
    }
    return false;
}

int main(){
    std::vector<int> list{10, 15, 3, 7, -1, 5, 1};
    std::cout<< hasPair(4, list);
}