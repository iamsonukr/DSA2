#include<bits/stdc++.h>
using namespace std;

// 73. Check if a given string is palindrome or not
bool checkPalin(string str){
    string str2="";
    for(int i=str.length()-1;i>=0;i--){
        str2.push_back(str[i]);
    }
    cout<<str<<" "<<str2<<endl;
}


// 74. Count number of vowels, consonants, spaces in String
void countChar(string str){
    int space=0;
    int vowels=0;
    int cosonents=0;

    for(int i=0;i<str.length();i++){
        if(str[i]== ' '){
            space++;
        }
        else if((str[i]<'a' || str[i]>'z') && ( str[i] < 'A' || str[i] >'Z' ) ){
            cout<<"out"<<endl;

        }
        else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='i' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowels++;
        }else{
            cosonents++;
        }
    }
    cout<<"space"<<space<<endl;
    cout<<"vowels"<<vowels<<endl;
    cout<<"cosonents"<<cosonents<<endl;
}

// 75. Find the ASCII value of a character
int findAskey(char a){
    cout<<int(a)<<endl;
}


// 76. Remove all vowels from the string
string removeVowel(string str){
    string str2="";
    for(int i=0;i<str.length();i++){
        if(str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u'){

        }else{
        str2.push_back(str[i]);

        }
    }
    cout<<str2<<endl;
}

// 77. Remove spaces from a string
string removeSpace(string str){
    string str2="";
    for(int i=0;i<str.length();i++){
        if(str[i] ==' '){

        }else{
            str2.push_back(str[i]);
        }
    }
    cout<<str2<<endl;
}


// 78. Remove characters from a string except alphabets
string removeChar(string str){
    string str2="";
    for(int i=0;i<str.length();i++){
        if((str[i]>'z' || str[i]<'a') && (str[i]>'Z' || str[i]<'A') ){

        }else{
            str2.push_back(str[i]);
        }
    }
    cout<<str2<<endl;
    return str2;
}


// 79. Reverse a String
string reverseStr(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;j--;
    }
    cout<<str<<endl;
    return str;
}

// 80. Remove brackets from an algebraic expression
string removeBrac(string str) {
    string str2 = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != '(' && str[i] != ')' && str[i] != '[' && str[i] != ']' && str[i] != '{' && str[i] != '}') {
            str2.push_back(str[i]);
        }
    }
    cout << str2 << endl;
    return str2;
}


// 81. Sum of the numbers in a String
int sumInt(string str){
    string temp="";
    int num=0;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i])){
            temp.push_back(str[i]);
        }
    }
    cout<<temp<<endl;
    num=stoi(temp);

    int sum=0;
    int i=0;
    while(num>0){
        int dig=num%10;
        sum+=dig;
        num/=10;
    }
    cout<<sum<<endl;
}


// 82. Capitalize first and last character of each word
string capitalZ(string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(i==0 || i==str.length()-1){
            str[i]=toupper(str[i]);
        }
        if(str[i]==' '){
            str[i-1]=toupper(str[i-1]);
        }
        if(str[i]==' ' && str[i+1] != str.length()-1){
            str[i+1]=toupper(str[i+1]);
        }
    }
    cout<<str<<endl;
}

// 83. Calculate frequency of characters in a string
void freqChar(string str){
    unordered_map<char,int>mp;
    for(auto x:str){
        mp[x]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

// 84. Find Non-repeating characters of a String
void nonRepeating(string str){
    unordered_map<char,int>mp;
    vector<char>ch;
    for(auto x:str){
        mp[x]++;
    }
    for(auto x:mp){
        if(x.second==1)cout<<x.first<<" ";
    }
}

// 85. Check if two strings are anagram of each other
void checkAnagram(string str1,string str2)
{
    if(str1.length() != str2.length()){
        cout<<"Not anagram"<<endl;
        return;
    }

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(str1==str2)
    {
        cout<<"ANAgram"<<endl;
        return;
    }
    cout<<"Not anagram"<<endl;
}

void checkAnagram2(string str1,string str2){

}
// 86. Count common sub-sequence in two strings


// 87. Check if two strings match where one string contains wildcard characters

// 88. Return maximum occurring character in the input string
void maxAppear(string str){
    unordered_map<char,int>mp;
    int mx=-1;
    char leter=' ';
    for(auto x:str){
        mp[x]++;
    }
    for(auto x:mp){
        if(x.second>mx)
        {
            mx=x.second;
            leter=x.first;
        }
    }
    cout<<leter<<endl;
}

// 89. Remove all duplicates from the input string.

void removeDup(string str){
    map<char,int>mp;
    int mx=-1;
    string leter="";
    for(auto x:str){
        mp[x]++;
    }
    for(auto x:mp){
        if(x.second==1)
        {
            leter.push_back(x.first);
        }
    }
    cout<<leter<<endl;
}
// 90. Print all the duplicates in the input string.

void printDup(string str){
    map<char,int>mp;
    int mx=-1;
    string leter="";
    for(auto x:str){
        mp[x]++;
    }
    for(auto x:mp){
        if(x.second>1)
        {
            leter.push_back(x.first);
        }
    }
    cout<<leter<<endl;
}


// 91. Remove characters from first string present in the second string
void removeChar(string str1, string str2)
{
    string str="";
    unordered_set<char>ch;
    for(int i=0;i<str2.length();i++){
        ch.insert(str2[i]);
    }
    for(auto x:str1){
        if(ch.find(x)==ch.end()){
            str.push_back(x);
        }
    }
    cout<<str<<endl;
}
// 92. Change every letter with the next lexicographic alphabet in the given string

// 93. Write a program to find the largest word in a given string.

// 94. Write a program to sort characters in a string

// 95. Count number of words in a given string
int countWords(string str){
    int count =0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' '){
            count++;
        }
    }
    cout<<count+1<<endl;
}

// 96. Write a program to find a word in a given string which has the highest number of repeated letters


// 97. Change case of each character in a string
void changeCase(string str){
    for(int i=0;i<str.length();i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }else{
            str[i]=tolower(str[i]);
        }
    }
    cout<<str<<endl;
}


// 98. Concatenate one string to another
void concatString(string str1,string str2){
    cout<<str1+str2<<endl;
}


// 99. Write a program to find a substring within a string. If found display its starting position


// 100. Reverse words in a string
void reverseString(string str){
    int i=0;
    int j=str.length();
    char temp=' ';
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;j--;
    }
    cout<<str<<endl;
}



int main(){
    reverseString("hello World my name is sonu kumar");
}