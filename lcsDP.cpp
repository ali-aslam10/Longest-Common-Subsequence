#include<iostream>
#include<string>
using namespace std;
void lcs(string s1, string s2, int m, int n)
{
	int** mat = new int* [m+1];
	for (int i = 0; i <= m; i++)
	{
		mat[i] = new int[n + 1];
	}
	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				mat[i][j] = 0;
			else if (s1[i - 1] == s2[j - 1])
				mat[i][j] = mat[i - 1][j - 1] + 1;   //diagonal element + 1
			else
				mat[i][j] = max(mat[i - 1][j], mat[i][j - 1]); //max of prev row and column element
		}
	}

	int l = mat[m][n];  //length of lcs
	char* res = new char[l + 1];     //to find lcs
	res[l] = '\0';
	int i = m, j = n;
	while (i > 0 && j > 0)
	{
		if (s1[i - 1] == s2[j - 1])
		{
			res[l - 1] = s1[i - 1];
			i--;
			j--;
			l--;
		}
		else if (mat[i - 1][j] > mat[i][j - 1]) 
			i--;   //move to left
		else       
			j--;  //move to upper
	}
	cout << "s1:" << s1 << "\ns2:" << s2 << "\nlcs:" << res;
	cout << "\nLength of LCS:" << mat[m][n];
	for (int i = 0; i <= m; i++)    //memory deallocation
	{
		delete[]mat[i];
		mat[i]=nullptr;
	}
	delete []mat;
	mat=nullptr;
	delete res;
	res=nullptr;
}
int main()
{
	string s1, s2;
	cout << "enter s1:";
	cin >> s1;
	cout << "enter s2:";
	cin >> s2;
	int m = s1.length();
	int n = s2.length();
	lcs(s1, s2, m, n);
	return 0;
}
