#include<cstdio>

char s[13];
bool b;
unsigned i,j;
unsigned short pos[24][6]=
{
  {1,2,3,4,5,6},{1,3,5,2,4,6},{1,5,4,3,2,6},{1,4,2,5,3,6},
  {2,6,3,4,1,5},{2,3,1,6,4,5},{2,1,4,3,6,5},{2,4,6,1,3,5},
  {6,5,3,4,2,1},{6,3,2,5,4,1},{6,2,4,3,5,1},{6,4,5,2,3,1},
  {5,1,3,4,6,2},{5,3,6,1,4,2},{5,6,4,3,1,2},{5,4,1,6,3,2},
  {3,2,6,1,5,4},{3,6,5,2,1,4},{3,5,1,6,2,4},{3,1,2,5,6,4},
  {4,2,1,6,5,3},{4,1,5,2,6,3},{4,5,6,1,2,3},{4,6,2,5,1,3},
};

int main()
{
//  freopen("test.in","r",stdin);
//  freopen("test.out","w",stdout);
  
  while(scanf("%s",s)==1)
  {
  	b=0;
  	for(i=0;i<24;++i)
  	{
  	  for(j=0;j<6&&s[j]==s[pos[i][j]+5];++j);
  	  if(j==6)
  	    b=1;
    }
    if(b)
      printf("TRUE\n");
    else
      printf("FALSE\n");
  };
  return 0;
}
