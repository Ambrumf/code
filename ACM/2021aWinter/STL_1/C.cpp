// #include <iostream>
// #include <iomanip>
// #include <vector>
// using namespace std;

// int main()
// {
//     int flag=1,flagvo=0;
//     char c;
//     vector<char> vec;
//     while(cin.get(c))
//     {
//         if(c=='\n')
//         {
//             vector<char> output;
//             output=vec;
//             if(vec[0]=='e' && vec[1]=='n' && vec[2]=='d' && vec.size()==3)break;
//             if((int)vec.size()!=1)for(int i=0; i<(int)vec.size(); i++)
//                 if(vec[i]==vec[i+1] && vec[i]!='o' && vec[i]!= 'e')
//                 {
//                     flag=0;    //judge same char
//                     break;
//                 }
//             for(int i=0; i<vec.size(); i++) //transfor char to 1/0
//                 if(vec[i]=='a'||vec[i]=='e'||vec[i]=='i'||vec[i]=='o'||vec[i]=='u')vec[i]='1';
//                 else vec[i]='0';

//             for(int i=0; i<vec.size(); i++)
//             {
//                  if(vec[i]=='1')flagvo=1;//find vowel
//             }
//             if((int)vec.size()>=3)for(int i=0; i<vec.size()-2; i++)//find 3 consecutive char
//             {
//                 if(vec[i]==vec[i+1] && vec[i]==vec[i+2])
//                 {
//                     flag=0;
//                     break;
//                 }
//             }
//             if(flag==1 && flagvo==1)
//             {
//                 cout<<'<';
//                 for(auto it:output)cout<<it;
//                 cout<<"> is acceptable.";
//             }
//             else
//             {
//                 cout<<'<';
//                 for(auto it:output)
//                     cout<<it;
//                 cout<<"> is not acceptable.";
//             }
//             cout<<endl;
//             flag=1,flagvo=0;
//             vec.clear();
//         }
//         else vec.push_back(c);
//     }
//     return 0;
// }