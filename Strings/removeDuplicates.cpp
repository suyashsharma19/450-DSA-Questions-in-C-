#include <bits/stdc++.h> 
using namespace std; 
char* removeDuplicates(char *s,int n){ 
unordered_map<char,int> exists; 
int index = 0; 
for(int i=0;i<n;i++){ 
	if(exists[s[i]]==0) 
	{ 
        cout<<s[index];//<<"\n"<<s[i];
	s[index++] = s[i]; 
	exists[s[i]]++; 
	} 
} 
cout<<"\n";
return s; 
} 

//driver code 
int main(){ 
char s[] = "geeksforgeeks"; 
int n = sizeof(s)/sizeof(s[0]); 
cout<<removeDuplicates(s,n)<<endl; 
return 0; 
} 