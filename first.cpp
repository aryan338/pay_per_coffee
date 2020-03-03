#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "picosha2.h"
using namespace std;
class Transaction
{
public:
	string Payer,Payee,amount;
};

class Block
{
public:
        string prev_hash, cur_hash;
	Transaction Entry[5];
};

void create_file(Block* Block_1)
{
	ofstream myfile;
	myfile.open("Blocks.txt",ios::in|ios::binary);
	myfile.write((char*)Block_1,sizeof(Block_1));
	myfile.close();
}

int main()
{
	Block Block_1;
	int amount;
	string dat=Block_1.prev_hash;
        for(int i=0;i<5;i++)
	{
	        cout<<"\nEnter the payee id, recipient id and the amount\n";
	        cin>>Block_1.Entry[i].Payer>>Block_1.Entry[i].Payee>>amount;
		
		picosha2::hash256_hex_string(Block_1.Entry[i].Payer,Block_1.Entry[i].Payer);
		picosha2::hash256_hex_string(Block_1.Entry[i].Payee,Block_1.Entry[i].Payee);
		
		Block_1.Entry[i].amount=to_string(amount);
		picosha2::hash256_hex_string(Block_1.Entry[i].amount,Block_1.Entry[i].amount);
		
		dat=dat+Block_1.Entry[i].Payer+Block_1.Entry[i].Payee+Block_1.Entry[i].amount;
		picosha2::hash256_hex_string(dat,dat);
	}
	Block_1.cur_hash=dat;

	for(int i=0;i<5;i++)
	{
		cout<<Block_1.Entry[i].Payer<<"/n"<<Block_1.Entry[i].Payee<<"/n"<<Block_1.Entry[i].amount<<"/n";
	}
}

