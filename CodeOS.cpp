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
//	cout<<"\n\n";
	while(true){
		xx(); in();
		if(ml=="exit")break;
		if(ml=="shutdown")sd();
		if(ml=="version")ver();
		if(ml=="help")he();
	}
	return 0;
}
