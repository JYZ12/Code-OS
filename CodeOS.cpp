#include <bits/stdc++.h>
//#include <Urlmon.h>
using namespace std;
string ml;
void xx(){printf(">Terminal< ");}
void in(){getline(cin,ml);}
void sd(){system("shutdown -p");}
void ver(){
	printf("\n-*- CodeOS -*-\n");
	printf("Test Version  ");
	printf("By JYZ12.\n");
	printf("https://github.com/");
	printf("JYZ12/Code-OS\n\n");
}
void he(){
	printf("\nKeywords:\n");
	printf("- run\n");
	printf("- help\n");
	printf("- exit\n");
	printf("- version\n");
	printf("- shutdown\n\n");
}
void _new(){
	
}
void cp(){
	
}
void run(){
	char wo[1001];
	wo[0]='s';wo[1]='t';wo[2]='a';
	wo[3]='r';wo[4]=wo[1];
	int l=ml.length();
	for(int i=4;i<l;i++){
		wo[i+2]=ml[i];
	}
	system(wo);
}
void _open(){
	
}
void del(){
	
}
int main(){
//	HRESULT ret = URLDownloadToFileW(
//		nullptr,
//		L"URL",
//		L"NAME",
//    	0,
//    	nullptr
//	);
//	if (ret != S_OK)std::cout<<"download-failed!"<<std::endl;
	printf("\tCodeOS\n");
	printf("Test Version  ");
	printf("By JYZ12.\n");
	printf("https://github.com/");
	printf("JYZ12/Code-OS\n\n");
	while(true){
		xx(); in();
		if(ml=="exit")break;
		else if(ml=="shutdown")sd();
		else if(ml=="version")ver();
		else if(ml=="help")he();
		else if(ml[0]=='r'\
		&&ml[1]=='u'&&ml[2]=='n')run();
		
	}
	return 0;
}
