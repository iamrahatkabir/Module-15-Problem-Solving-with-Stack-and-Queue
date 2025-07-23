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

int main()
{
    string str;
    cin >> str;

    stack<char> st;

    for(int i = 0; i < str.length(); i++)
    {
        if(st.empty())
        {
            st.push(str[i]);
        }
        else if(st.top() == 'B' && str[i] == 'A')
        {
            st.pop();
        }
        else
        {
            st.push(str[i]);
        }
    }

    if(st.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        while(!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }


    return 0;
}