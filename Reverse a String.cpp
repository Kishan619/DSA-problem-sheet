class Solution
{
    public:
    string reverseWord(string str)
    {
     int length = str.length();
     int s=0;
     int e=length-1;
     
     while(s<e){
         swap(str[s],str[e]);
         s++;
         e--;
     }
     return str;   
    }
};
