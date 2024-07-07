#include<iostream>
#include <cstring>
#include<cstdio>
using namespace std;
int no = 100;

class sbi{
	private : 
	string acc_name;
	int acc_no;
	double acc_bal;
	
	public:
		
		void create_acc(){ 
			cout<<"\n\nEnter your name\n";
			fflush(stdin);
			getline(cin,acc_name);
			
//			cin>>acc_name;
			//gets(acc_name);
			cout<<"Congratulations!! account created succesfully\n";
		acc_no = no;
		no++;
			cout<<"Your account number : "<<acc_no;
		
			
		}
		void deposit(int acc){
			if(acc ==acc_no){
			
			double bal;
			system("cls");
			cout<<"Account found\nEnter deposit amount\n";
			cin>>bal;
			acc_bal =bal; }
			
		}
		void withdrawl(int acc){
			if(acc ==acc_no){	system("cls");
				cout<<"Account found\n";
				cout<<"enter withdrawl amount\n";
				int withdr;
				cin>>withdr;
				if(withdr<=acc_bal)
				acc_bal =acc_bal-withdr;
				else
				cout<<"\nLOW BALANCE WITHDRAWL FAILED";
				
			} 
			
		}
		void details(int acc){
			if(acc ==acc_no){	system("cls");
			cout<<"Account details \n\n";
			cout<<"BANK : SBI\n";
			cout<<"ACCOUNT HOLDER NAME : "<<acc_name;
			cout<<"\nBALANCE : "<<acc_bal;
			
			
			
			}
			
		}
	
	
};
class hdfc:public sbi{
	private : 
	string acc_name;
	double acc_no;
	double acc_bal;
	public:
		void create_acc(){ 
			cout<<"\n\nEnter your name\n";
			fflush(stdin);
			getline(cin,acc_name);
//			cin>>acc_name;
			//gets(acc_name);
			cout<<"Congratulations!! account created succesfully\n";
		acc_no = no;
		no++;
			cout<<"Your account number : "<<acc_no;
		
			
		}
		void deposit(int acc){
			if(acc ==acc_no){
			
			double bal;
			system("cls");
			cout<<"Account found\nEnter deposit amount\n";
			cin>>bal;
			acc_bal =bal; }
			
		}
		void withdrawl(int acc){
			if(acc ==acc_no){	system("cls");
				cout<<"Account found\n";
				cout<<"enter withdrawl amount\n";
				int withdr;
				cin>>withdr;
				acc_bal =acc_bal-withdr;
				
			}
			
		}
		void details(int acc){
			if(acc ==acc_no){	system("cls");
			cout<<"Account details \n\n";
			cout<<"BANK : HDFC\n";
			cout<<"ACCOUNT HOLDER NAME : "<<acc_name;
			cout<<"\nBALANCE : "<<acc_bal;
			
			
			
			}
			
		}
	
		
	
	
};
int main(){
	int i,j=0;
	int bank_choise;
	sbi s[100];
	hdfc h[100];
	label:
	system("cls");
cout<<"\t\t\t\tNEW ACCOUNT CREATION\n";

	cout<<"Select a bank\n";
	cout<<"HDFC = 1\nSBI =  2\n";

	cin>> bank_choise;
	//h[j].set();
	//if(bank_choise!=1||bank_choise!=2)
	//goto label;
	switch( bank_choise){
		case 1:
			
			
			h[j].create_acc();
			j++;
			break;
			
			case 2:
				
				s[j].create_acc();
				j++;
				break;
				
			
	} 
	labell :
	cout<<"\n\nSelect one operation\n1 = deposit\n2 = withdrawl\n3 = account details\n";
	int op;
	int acc,bnk;
	cin>>op;
	system("cls");
		cout<<"Select a bank\n";
	cout<<"HDFC = 1\nSBI =  2\n";
cin>>bnk;
	cout<<"Enter your account number \n";
			
			cin>>acc;
	if(op==1&&bnk==2){
	
	for(i=0;i<100;i++)
	s[i].deposit(acc);
}
else if(op==2&&bnk==2){
	
	for(i=0;i<100;i++)
	s[i].withdrawl(acc);
}
else if(op==3&&bnk==2){
	
	for(i=0;i<100;i++)
	s[i].details(acc);
}

if(op==1&&bnk==1){
	
	for(i=0;i<100;i++)
	h[i].deposit(acc);
}
else if(op==2&&bnk==1){
	
	for(i=0;i<100;i++)
	h[i].withdrawl(acc);
}
else if(op==3&&bnk==1){
	
	for(i=0;i<100;i++)
	h[i].details(acc);
}	
cout<<"\n\n\n0 = exit\n1 = create new account\n2 = account options\n";	
int ch;
cin>>ch;
if(ch==1)
goto label;
else if(ch==2)
goto labell;
else if(ch==0)
goto ex;
ex:
	system("cls");
	cout<<"\t\t***************PROGRAM ENDS******************\n\n\t\t\t******THANK YOU******";

	return 0;	
} 	
