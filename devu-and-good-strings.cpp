// By Aman Jain(jainaman224)
// 3/4/16

#include <iostream>
#include <vector>
// #include <queue>

using namespace std;

int main(){
	//queue <string> v;
	vector <string> a;
	a.push_back("a");
	a.push_back("b");
	a.push_back("c");
	int t,c,k,l,m,i,j,co;
	string s,temp;
	//string a[675276]={"a","b","c"};
	long x=3,y=0;
	while(x<675276){
		//cout << temp2 << v.front().length() << " " << s.length() << " " << v.size() << endl;
		temp = "a" + a[y];
		co=0;
		for(i=1;i<=(temp.length()-1)/2;i++){
			if(temp[i]==temp[2*i] && temp[i]==temp[0]){
				co = 1;
				break;
			}
		}
		if(co==0){
			a.push_back(temp);
			x++;
		}
		temp = "b" + a[y];
		co=0;
		for(i=1;i<=(temp.length()-1)/2;i++){
			if(temp[i]==temp[2*i] && temp[i]==temp[0]){
				co = 1;
				break;
			}
		}
		if(co==0){
			a.push_back(temp);
			x++;
		}
		temp = "c" + a[y];
		co=0;
		for(i=1;i<=(temp.length()-1)/2;i++){
			if(temp[i]==temp[2*i] && temp[i]==temp[0]){
				co = 1;
				break;
			}
		}
		if(co==0){
			a.push_back(temp);
			x++;
		}
		y++;
	}
	long b[27]={0,3,12,36,102,270,696,1626,3588,7194,14238,26028,45630,75252,120570,178014,252468,337920,433440,518256,589836,640404,663426,672114,674916,675228,675276};
	string a1[2]= {"a"       ,"b"        };
	string a2[4]= {"aa"      ,"ab"      ,"ba"      ,"bb"      };
	string a3[6]= {"aab"     ,"aba"     ,"abb"     ,"baa"     ,"bab"     ,"bba"     };
	string a4[10]={"aaba"    ,"aabb"    ,"abaa"    ,"abab"    ,"abba"    ,"baab"    ,"baba"    ,"babb"    ,"bbaa"    ,"bbab"    };
	string a5[14]={"aabaa"   ,"aabab"   ,"aabba"   ,"abaab"   ,"ababb"   ,"abbaa"   ,"abbab"   ,"baaba"   ,"baabb"   ,"babaa"   ,"babba"   ,"bbaab"   ,"bbaba"   ,"bbabb"   };
	string a6[20]={"aabaab"  ,"aababb"  ,"aabbaa"  ,"aabbab"  ,"abaaba"  ,"abaabb"  ,"ababba"  ,"abbaab"  ,"abbaba"  ,"abbabb"  ,"baabaa"  ,"baabab"  ,"baabba"  ,"babaab"  ,"babbaa"  ,"babbab"  ,"bbaaba"  ,"bbaabb"  ,"bbabaa"  ,"bbabba"  };
	string a7[16]={"aabaabb" ,"aabbaab" ,"aabbaba" ,"aabbabb" ,"abaabab" ,"ababbaa" ,"ababbab" ,"abbaabb" ,"baabbaa" ,"babaaba" ,"babaabb" ,"babbaba" ,"bbaabaa" ,"bbaabab" ,"bbaabba" ,"bbabbaa" };
	string a8[6]= {"aabbaabb","ababbaba","abbaabba","baabbaab","babaabab","bbaabbaa"};
	cin >> t;
	while(t--){
		cin >> c >> k;
		cin >> s;
		if(c==1){
			if(s.length() > 2)
				cout << 0 << endl;
			else
				cout << 1 << endl;
		}
		else if(c==2){
			if(s.length()>8)
				cout << 0 << endl;
			else if(s.length()==1 && k==1)
				cout << 2 << endl;
			else if(s.length()==1 && k==0)
				cout << 1 << endl;
			else{
				l=0;
				/* while(!v.empty())
					v.pop();
				v.push("aa");
				v.push("ab");
				v.push("ba");
				v.push("bb");
				while(v.front().length() != s.length()){
					//cout << temp2 << v.front().length() << " " << s.length() << " " << v.size() << endl;
					temp = "a" + v.front();
					co=0;
					for(i=1;i<=(temp.length()-1)/2;i++){
						if(temp[i]==temp[2*i] && temp[i]==temp[0]){
							co = 1;
							break;
						}
					}
					if(co==0)
						v.push(temp);
					temp = "b" + v.front();
					co=0;
					for(i=1;i<=(temp.length()-1)/2;i++){
						if(temp[i]==temp[2*i] && temp[i]==temp[0]){
							co = 1;
							break;
						}
					}
					if(co==0)
						v.push(temp);
					v.pop();
				}
				l=0;
				while(!v.empty()){
					m=0;
					temp = v.front();
					//cout << temp2 << endl;
					v.pop();
					for(i=0;i<s.length();i++){
						if(temp[i]!=s[i])
							m++;
					}
					if(m<=k)
						l++;
				}
				cout << l << endl; */
				if(s.length()==1){
					for(i=0;i<2;i++){
						m=0;
						for(j=0;j<1;j++){
							if(s[j]!=a1[i][j])
								m++;
						}
						if(m<=k)
							l++;
					}
				}
				else if(s.length()==2){
					for(i=0;i<4;i++){
						m=0;
						for(j=0;j<2;j++){
							if(s[j]!=a2[i][j])
								m++;
						}
						if(m<=k)
							l++;
					}
				}
				else if(s.length()==3){
					for(i=0;i<6;i++){
						m=0;
						for(j=0;j<3;j++){
							if(s[j]!=a3[i][j])
								m++;
						}
						if(m<=k)
							l++;
					}
				}
				else if(s.length()==4){
					for(i=0;i<10;i++){
						m=0;
						for(j=0;j<4;j++){
							if(s[j]!=a4[i][j])
								m++;
						}
						if(m<=k)
							l++;
					}
				}
				else if(s.length()==5){
					for(i=0;i<14;i++){
						m=0;
						for(j=0;j<5;j++){
							if(s[j]!=a5[i][j])
								m++;
						}
						if(m<=k)
							l++;
					}
				}
				else if(s.length()==6){
					for(i=0;i<20;i++){
						m=0;
						for(j=0;j<6;j++){
							if(s[j]!=a6[i][j])
								m++;
						}
						if(m<=k)
							l++;
					}
				}
				else if(s.length()==7){
					for(i=0;i<16;i++){
						m=0;
						for(j=0;j<7;j++){
							if(s[j]!=a7[i][j])
								m++;
						}
						if(m<=k)
							l++;
					}
				}
				else if(s.length()==8){
					for(i=0;i<6;i++){
						m=0;
						for(j=0;j<8;j++){
							if(s[j]!=a8[i][j])
								m++;
						}
						if(m<=k)
							l++;
					}
				}
				cout << l << endl;
			}	
		}
		else{
			if(s.length()>26)
				cout << 0 << endl;
			else if(s.length()==1 && k==1)
				cout << 3 << endl;
			else if(s.length()==1 && k==0)
				cout << 1 << endl;
			else{
				/* while(!v.empty())
					v.pop();
				v.push("aa");
				v.push("ab");
				v.push("ac");
				v.push("ba");
				v.push("bb");
				v.push("bc");
				v.push("ca");
				v.push("cb");
				v.push("cc"); */
				/*  while(v.front().length() != s.length()){
					//cout << temp2 << v.front().length() << " " << s.length() << " " << v.size() << endl;
					temp = "a" + v.front();
					co=0;
					for(i=1;i<=(temp.length()-1)/2;i++){
						if(temp[i]==temp[2*i] && temp[i]==temp[0]){
							co = 1;
							break;
						}
					}
					if(co==0)
						v.push(temp);
					temp = "b" + v.front();
					co=0;
					for(i=1;i<=(temp.length()-1)/2;i++){
						if(temp[i]==temp[2*i] && temp[i]==temp[0]){
							co = 1;
							break;
						}
					}
					if(co==0)
						v.push(temp);
					temp = "c" + v.front();
					co=0;
					for(i=1;i<=(temp.length()-1)/2;i++){
						if(temp[i]==temp[2*i] && temp[i]==temp[0]){
							co = 1;
							break;
						}
					}
					if(co==0)
						v.push(temp);
					v.pop();
				} */
				l=0;
				x = b[s.length()-1];
				y = b[s.length()];
				while(x<y){
					m=0;
					temp = a[x];
					for(i=0;i<s.length();i++)
						if(temp[i]!=s[i])
							m++;
					if(m<=k)
						l++;
					x++;
				}
				/* while(!v.empty()){
					m=0;
					temp = v.front();
					//cout << temp2 << endl;
					v.pop();
					for(i=0;i<s.length();i++){
						if(temp[i]!=s[i])
							m++;
					}
					if(m<=k)
						l++;
				} */
				cout << l << endl;
			}
		}
	}
	return 0;
}
