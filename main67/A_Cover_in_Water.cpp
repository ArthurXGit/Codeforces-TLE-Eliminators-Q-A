/*
    * Problem : A Cover in water 
    * My approach : 
    
    in the problem it was mentioned that if i + 1 and i - 1 bucket is filled then automatically i bucket will filled 

    so i handled that particularly

    but yeh sab karne se pehle , maine traverse kiya array ko and dekha ki pehle khaali jagah kaha h ?

    loop chalane ke baad maine kya kiya ki count and minvalCount nam ke do counters banaye

    count is liye h ki mujhe dekhna h , three consecutive empty spaces kaha p aa rha h 

    aagar count three ho gya to 2 hein hamesa as min count to operation 1 aayega , agar aapke pass n no of khali space kyun na ho tab bhi min count 2 hein rahega 

    so is observation se maine code likha and agar count 3 nahi hua , 2 ke baad ya fir 1 ke baad koi filled space aa gyi , then maine iske liye pehle se minvalCnt naam ka variable declare kar rkha tha jo ki empty spaces ko count kar rha tha..... so agar count ke zariye kuch nahi hua toh mein usko return kar diya

    do bug then jinko mera patience na hone ke karan ai se puch liya :

    1. agar sabhi spaces bhare hue hein toh uska ek bug aaya tha jo ki us jagah tha jaha hum pehle yeh check kar rhe the ki array mein pehle khali jagah kaha h woh dhundne ke code mein tha 
    usko maine flag var ki madad se fix kar diya 

    2.mein kya kiya tha ki input val per iteration kitne aayenge usko ek jagah store kiya and maine usko string val jo input hoke aayegi us array ka direct size declare kar diya tha , isse kya hua ki pehle array declare ho chuka tha , so woh sab us khaali space ke piche hein aa rha the
    
*/
#include <bits/stdc++.h>

using namespace std;

int minVal(vector<char> str)
{
    int pos1;
    int flag {};
    
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '.') 
        {
            pos1 = i;
            flag = 1;
            break;
        }
    }
    
    int count {};
    int minvalCnt{};

    if(flag == 1)
    {
        for(int i = pos1; i < str.size(); i++)
        {
            // minvalCnt += count;
            if(str[i] == '.') 
            {
                count++;
                minvalCnt++;
                if(count > 2) return 2;
            }
    
            else if(str[i] != '.')
            {
                count = 0;
            }
            // count = 0;
        }
    
        return minvalCnt;
    }

    else return 0;
}

int main() 
{
    int testcases;
    cin >> testcases;

    for(int i = 0; i < testcases; i++)
    {
        int inputVal;
        cin >> inputVal;

        vector<char> str;

        for(int j = 0; j < inputVal; j++)
        {
            char c;
            cin >> c;

            str.emplace_back(c);
        }

        cout << minVal(str) << "\n";
    }
    return 0;
}