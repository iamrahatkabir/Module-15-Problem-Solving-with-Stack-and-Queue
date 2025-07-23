#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

class Mystack
{
    public:
        list<int>l;

        void push(int val)
        {
            l.push_back(val);
        }

        void pop()
        {
            l.pop_back();
        }

        int size()
        {
            return l.size();
        }

        int top()
        {
            return l.back();
        }

        bool empty()
        {
            return l.empty();
        }

};

int main()
{
    Mystack st1, st2;

    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int val; cin >> val;
        st1.push(val);
    }

    int m; cin >> m;
    for(int i = 0; i < m; i++)
    {
        int val; cin >> val;
        st2.push(val);
    }

    // while(!st1.empty())
    // {
    //     cout << st1.top() << endl;
    //     st1.pop();
    // }

    // while(!st2.empty())
    // {
    //     cout << st2.top() << endl;
    //     st2.pop();
    // }

    if(st1.size() != st2.size())
    {
        cout << "Not same" << endl;
    }
    else
    {
        bool flag = true;
        while(!st1.empty() && !st2.empty())
        {
            if(st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if(flag == true)
        {
            cout << "Same" << endl;
        }
        else
        {
            cout << "Not Same" << endl;
        }

    }



    return 0;
}