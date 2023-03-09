package test;

import java.util.Scanner;

public class Pro4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Base No. please:");
		double n=sc.nextDouble(),sum=0;
		for(int i=0;i<=n;i++) {
			sum=sum+Math.pow(n, i);
		}
		System.out.println(sum);
		sc.close();
		

	}

}
