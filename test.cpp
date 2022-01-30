
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

class Account {

public:

	typedef Account		t;

	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );

};

int main()
{
	typedef std::vector<int>	v;

   	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	v						accounts( amounts, amounts + amounts_size );
	v::iterator				acc_begin = accounts.begin();
	v::iterator				acc_end	 = accounts.end();
	
	std::cout << amounts << ", " << amounts_size << std::endl;
	std::cout << acc_begin[0] << std::endl;

    return 0;
}