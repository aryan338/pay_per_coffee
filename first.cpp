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
        for(i=0;i<5;i++)
	{
	        cout<<"\nEnter the payee id, recipient id and the amount\n";
	        cin>>Block_1.Entry[i].Payer>>Block_1.Entry[i].Payee>>Block_1.Entry[i].amount;
	}
}

