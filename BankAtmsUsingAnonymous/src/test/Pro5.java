package test;

import java.util.Scanner;

public class Pro5 {
	
	static boolean verify(String str,String pas) {
		if(str.equals("shivam05") && str.endsWith("12345678"));
		return true;
	}

	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter Your Login Id");
		String loginId=scanner.nextLine();
		System.out.println("Enter Your Login Password");
		String pass=scanner.nextLine();
		if (loginId.length()==8&& pass.length()==8) {
			if(verify(loginId,pass)) {
				System.out.println("Login Succesfull !! ");
				while(true){
					
					System.out.println("Enter <L> for Logout ");
					String ch =scanner.nextLine();
					if(ch.equals("L")) {
						System.out.println("Logout !!");
						System.exit(0);
					}
					else {
						System.out.println("Wrong Option");
					}
				}
			}
			else {
				System.out.println("Wrong Id and PassWord");
			}
		}else System.out.println("Wrong password");
	}
}
