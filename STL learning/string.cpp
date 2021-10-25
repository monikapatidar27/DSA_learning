#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    cin.ignore();
    string str="monika is good";
    getline(cin,str);
    cout<<str<<endl;
    // give last value
    cout<<str.back()<<endl;   //o(1)
    //give first value
    cout<<str.front()<<endl;  
    //add to last value
    str.push_back('a');
    cout<<str<<endl;  //monikaa
    //remove from last 
    str.pop_back();   //monika
    cout<<str<<endl;

    // insert value
    str.insert(str.length()," patidar");
    cout<<str<<endl;
    str.append(" first");
    cout<<str<<endl;
    
    // erase the values
    for(int i=0;i<str.length();i++){
      if(str[i]==' '){
            str.erase(i,2);
            cout<<str<<endl;
    }
 }

 //replace the values
string str1="monika is good";
for(int i=1;i<str1.length()-1;i++){
        if(str1[i] == 'i' && str1[i+1]=='s' && str1[i-1]==' '){
            str1.replace(i,2,"are");
            cout<<str1<<endl;
        }
}
// sort the string 
sort(str.begin(),str.end());
    cout<<str<<endl;

  
//add two strings
  string st;
    st="monika";
    st+=" patidar";
    cout<<st<<endl;

// find the value 
    if(st.find("mo") == string::npos){
         cout<<"not founded";
    }
    else {
       cout<<"fonunded";
     }
     cout<<endl;
//find substring
     string st1=str1.substr(3,4);
    for(int i=0;i<4;i++){
        st1.push_back(str1[i]);
    }
    cout<<st1<<endl;
    
    cout<<str1<<endl;

   //string ::iterator it =st.begin(); 
    auto it=st.begin();
    for(it; it != st.end();it++){
        cout<<*it;
    }

    
  //   for(int i=0;i<st.length();i++){
  //       if(st.at(i) )        // st[i] ====== st.at(i)
  // }
    return 0;
}

//output 

// monika is good
// d
// m
// monika is gooda
// monika is good
// monika is good patidar
// monika is good patidar first
// monikas good patidar first
// monikasood patidar first
// monikasoodatidar first
// monikasoodatidarirst
// monika are good
// aaaddiiikmnooorrsstt
// monika patidar
// fonunded
// ika moni
// monika are good
// monika patidar