#include<iostream>
using namespace std;
void tian(int i);
void di(int j);
int	main()
{
	int nian,yue,ri,shi,n,y,r,s;
	cout<<"������ݣ�\n";
	cin>>nian; 
	if(nian>=1984)
	{
		if(nian-1983<60)
		nian=nian-1983;
		else if((nian-1984)%60==0)
		nian=60;
		else if(nian-1983>60)
		nian=(nian-1983)%60;
	} 
	else if(nian<1984)
	{
		if(1983-nian<60)
		nian=1983-nian;
		else if((1983-nian)%60==0)
		nian=60;
		else if(1983-nian>60)
		nian=(1983-nian)%60;
	}
	tian(nian);
	di(nian);
	return 0;
}
void tian(int i)
{
	if(i==1||(i-1)%10==0&&i<60)
	cout<<"��";
	else if(i==2||(i-2)%10==0&&i<=60)
	cout<<"��";
	else if(i==3||(i-3)%10==0&&i<=60)
	cout<<"��";
	else if(i==4||(i-4)%10==0&&i<=60)
	cout<<"��";
	else if(i==5||(i-5)%10==0&&i<=60)
	cout<<"��";
	else if(i==6||(i-6)%10==0&&i<=60) 
	cout<<"��";
	else if(i==7||(i-7)%10==0&&i<=60)
	cout<<"��";
	else if(i==8||(i-8)%10==0&&i<=60)
	cout<<"��";
	else if(i==9||(i-9)%10==0&&i<=60)
	cout<<"��";
	else if(i==10||(i-10)%10==0&&i<=60)
	cout<<"��";
}
void di(int j)
{
	if(j==1||(j-1)%12==0&&j<=60)
	cout<<"��";
	else if(j==2||(j-2)%12==0&&j<=60)
	cout<<"��";
	else if(j==3||(j-3)%12==0&&j<=60)
	cout<<"��";
	else if(j==4||(j-4)%12==0&&j<=60)
	cout<<"î";
	else if(j==5||(j-5)%12==0&&j<=60)
	cout<<"��";	
	else if(j==6||(j-6)%12==0&&j<=60)
	cout<<"��";
	else if(j==7||(j-7)%12==0&&j<=60)
	cout<<"��";
	else if(j==8||(j-8)%12==0&&j<=60)
	cout<<"δ";
	else if(j==9||(j-9)%12==0&&j<=60)
	cout<<"��";
	else if(j==10||(j-10)%12==0&&j<=60)
	cout<<"��";
	else if(j==11||(j-11)%12==0&&j<=60)
	cout<<"��";
	else if(j==12||(j-12)%12==0&&j<=60)
	cout<<"��";
}
