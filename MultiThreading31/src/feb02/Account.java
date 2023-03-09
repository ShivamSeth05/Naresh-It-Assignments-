package feb02;

public class Account {
	float balance=5000;

	public void deposit(int amount){
		balance+=amount;
	}
	
	public void withdraw(int amount){
		balance-=amount;
	}

	
}
