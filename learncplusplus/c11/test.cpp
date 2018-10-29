#include<iostream>
// #include<windows.h>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
class Time
{
	private :
		int s,m,h;
	public :
		void nhaptime();
		void chuanhoa();
		void xuattime();
		void reset();
		void run();
};
void Time::nhaptime()
{
	cout<<"nhaptg:ss/mm/hh:";
	cin>>s>>m>>h;
};
void Time::chuanhoa()
{
	int x,S;
	if(s>60)
	{
		x=s/60;
		s=s%60;
		m=m+x;
	}
	if(m>60)
	{
		x=m/60;
		m=m%60;
		h=h+x;
	}
	
};
void Time::xuattime()
{
	cout<<"\n";
	cout<<h<<"/"<<m<<"/"<<s;
};
void Time::reset()
{
	s=0;
	h=0;
	m=0;
};
void Time::run()
{
	// Sleep(999);
    
    for(int i = 0; i < 15000; i++)
    
    {
        /* code */      
        for(int j = 0; j < 15000; j++)
        {
            /* code */int a = 2;
        }
        
    }
    
	s=s+1;
};
int main ()
{
	Time T;
	T.nhaptime();
	do
	{
		
		T.chuanhoa();
		T.run();
        T.xuattime();
	}while(1);
	return 0;
}