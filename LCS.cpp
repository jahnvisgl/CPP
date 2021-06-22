#include<bits/stdc++.h>
using namespace std;

void lcs( string X, string Y, int m, int n )
{
  int L[m+1][n+1];

  for (int i=0; i<=m; i++)
  {
    for (int j=0; j<=n; j++)
    {
      if (i == 0 || j == 0) 
      L[i][j] = 0;

      else if (X[i-1] == Y[j-1])
      L[i][j] =1 + L[i-1][j-1];

      else
      L[i][j] = max(L[i-1][j], L[i][j-1]);
    }

  }
  int index = L[m][n];
  string ans=""; 
  int i = m, j = n;
  while (i > 0 && j > 0)
  {
    if (X[i-1] == Y[j-1])
    {
      ans+= X[i-1]; 
      i--; j--; index--;   
    }
    else if (L[i-1][j] > L[i][j-1])
      i--;
    else
      j--;
  }
  int k=L[m][n];
cout<<"\nLongest Common Subsequence Length is:\n"<<k;
  cout<<"\nLCS is:\n";
   reverse(ans.begin(),ans.end());
  cout<<ans<<endl;
}
int main()
{
  string s1,s2;
  cout<<"Enter Two Strings:\n";
  cin>>s1>>s2;
  int m= s1.length();
  int n= s2.length();
 
  lcs(s1, s2, m, n);
}