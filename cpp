LINKEDIN CPP TOPICS:


Eg1:
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello world!"<<endl;
}




Eg2:PALINDROME

  #include<iostream>
#include<algorithm>
using namespace std;
bool is_palindrome(string s)
{
    //transform(s.begin(),s.end(),s.begin(),tolower);
     transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });//for coverting into lowercase
    string rev=s;
    reverse(rev.begin(),rev.end());//reverse the string
    return s == rev;

}
int main()
{
    string sentence;
    cout<<"Enter any word or sentence:";
    getline(cin,sentence);
    cout<<sentence<<( is_palindrome(sentence) ? " is a ":" not a ")<<" palindrome."<<endl;
    return 0;
}



Eg3: array sorted

#include<iostream>
using namespace std;
bool sorted_array(int*arr,int n)
{
    if(arr==NULL)
    {
        return false;
    }
    if(n<2)
    {
        return true;
    }
    bool sorted=false;
    int temp;
    while(!sorted)
    {
        sorted=true;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                sorted=false;
            }
        }
    }
    return true;
}
int main()
{
    int arr[]={11,2,4,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sorted_array(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}


Eg4: printing FIZZBUZZ when n is mutliple of 3 print FIZZ and when n is multiple of 5 print BUZZ and n is multiple of 3 and 5 print FIZZBUZZ.

    #include<iostream>
using namespace std;
int main()
{
    int n;
    bool m3,m5;
    cout<<"Enter any positive number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        m3= (i%3)==0;
        m5= (i%5)==0;
        if(!m3 && !m5)
        {
            cout<<i<<endl;
            }
            else
            {
                 if(m3)cout<<"FIZZ";
        if(m5)cout<<"BUZZ";
            }
            cout<<endl;
       
    }
    return 0;
}
