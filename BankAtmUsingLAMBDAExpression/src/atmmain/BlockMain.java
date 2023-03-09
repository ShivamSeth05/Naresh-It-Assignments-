package atmmain;

import java.util.Scanner;

import atm.*;

public class BlockMain {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int c=3;
		boolean t=false;
		while(c!=0) {
			c--;
			System.out.println("Enter pin No");
			int pin=sc.nextInt();//1111
			String cString=Integer.toString(pin);
			if(cString.length()==4) {
				CheckPinNo ck = new CheckPinNo(pin);
				if(ck.verify()) {
					c=0; t=true;

					System.out.println("1. Withdraw");
					System.out.println("2. Deposit");
					System.out.println("Enter Choice");
					int ch=sc.nextInt();
					switch (ch) {
					case 1 ->{
						//Anonymous InnerClass as implementation 
						
						Transaction ob = amt->{
							
								double cb=Transaction.cob.bal;
								if(amt<cb) {
									cb=cb-amt;
									System.out.println(amt+"Rs Withdraw Succesfully!!");
									System.out.println("Current balance :"+Transaction.cob.getBal(cb));	
									System.out.println("Transaction Succesfull!!");
								}else System.out.println("Insufficent Balance");

							
						};
						

						System.out.println("Enter the Amount");
						int amt=sc.nextInt();
						if(amt>0&& amt%100==0) {
							ob.proces(amt);
						}else System.out.println("Invalid Amount!!");
					}
					case 2 ->{
						System.out.println("Enter the Amount");
						int amt=sc.nextInt();
						if(amt>0&& amt%100==0) {
							//							Anonymous InnerClass as implementation class
							Transaction ob = amt1 -> {
								double cb=Transaction.cob.bal;
								cb=cb+amt1;
								System.out.println("Amount Deposit : "+amt1);
								System.out.println("Balance Amount  :"+Transaction.cob.getBal(cb));
								System.out.println("Transaction Succesfull!!");
							};
							
							ob.proces(amt);
						}else System.out.println("Invalid Amount !!!");
					}
					default ->System.out.println("Inalid choice");
					}
				}else System.out.println("Invalid Pin Try again !!! \n");
			}else System.out.println("Invalid Pin Try again !!! \n");

		}
		if(!t)System.out.println("Transcation Blocked Temporary!!");
		sc.close();
	}
}
/*
Balance.class
Transaction.class
CheckPinNo.class
ValidatePinNo.class
BankMainClass.class(MainClass)
BankMainClass$1.class
BankMainClass$2.class
 */
