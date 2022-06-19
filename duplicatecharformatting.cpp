#include <iostream>
using namespace std;
void duplicatechar(char*in,int i,char*out,int j)
{
	// base case
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}


	// recursive case
	if(in[i]==in[i+1])
	{
		out[j]=in[i];
		out[j+1]='*';
		duplicatechar(in,i+1,out,j+2);

	}
	else
	{
		out[j]=in[i];
		duplicatechar(in,i+1,out,j+1);
	}
}
int main()
{
	char inp[1000];
	char out[1000];
	cin>>inp;
	duplicatechar(inp,0,out,0);
	

}
