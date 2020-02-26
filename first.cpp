#include <iotream>
#include <pichosha.h>
using namespace std;
class Trasaction
	public:
        string Payer[10],Payee[10];
	int amount;

class Block
	public:
        string prev_hash=0, cur_hash;

int main()
{
	Trasaction Block1[5];
        Block first;
        for(i=0;i<5;i++)
	{
                cout<<"\nEnter the payee id, recipient id and the amount\n";
                cin>>Block1[i].Payer>>Block1[i].Payee>>Block1[i].amount;
                first.curr_hash = SHA256(first.prev_hash+Block1[i].Payer+Block1[i].Payee+Block1[i].amount);
        }

}
