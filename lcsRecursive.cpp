//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int lcs(string s1, string s2, int i, int j, vector<char>& v)
//{
//	if (i == 0 || j == 0)
//		return 0;
//	else if (s1[i-1] == s2[j-1])
//	{
//		v.insert(v.begin(),s1[i-1]);
//		return 1 + lcs(s1, s2, i - 1, j - 1, v);
//	}
//	else
//	{
//		vector<char> v1;
//		vector<char> v2;
//		char temp;
//		int l1 = lcs(s1, s2, i - 1, j, v1);
//		int l2 = lcs(s1, s2, i, j - 1, v2);
//		if (l1 > l2)
//		{
//			v.insert(v.begin(), v1.begin(), v1.end());    //used those that had in v + those in v1
//			return l1;
//		}
//		else
//		{
//			v.insert(v.begin(), v2.begin(), v2.end());   //used those that had in v + those in v2
//			return l2;
//		}
//	}
//}
//int main()
//{
//	vector<char> v;
//	string s1, s2;
//	cout << "Enter S1:";
//	cin >> s1;
//	cout << "Enter S2:";
//	cin >> s2;
//	int m = s1.length();
//	int n = s2.length();
//	int l= lcs(s1, s2, m, n, v);
//	cout << "s1:" << s1 << "\ns2:" << s2 << "\nlcs:";
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i];
//	}
//	cout << "\nLength of LCS:" <<l<<endl;
//	
//}