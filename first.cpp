#include <iotream>
#include "../picosha2.h"
using namespace std;
class Trasaction
public:
	string Payer,Payee;
	int amount;

class Block
public:
        string prev_hash, cur_hash;
	Transaction Entry[5];

int main()
{
	Block Block_1;
	string dat=prev_hash;
        for(i=0;i<5;i++)
	{
	        cout<<"\nEnter the payee id, recipient id and the amount\n";
	        cin>>Block_1.Entry[i].Payer>>Block_1.Entry[i].Payee>>Block_1.Entry[i].amount;
		picosha2::hash256_hex_str(dat,dat);
		dat=dat+Block_1.Entry[i].Payee;
		picosha2::hash256_hex_str(dat,dat);
		dat=dat+Block_1.Entry[i].amount;
		picosha2::hash256_hex_str(dat,dat);
	}
	cur_hash=dat;
}

