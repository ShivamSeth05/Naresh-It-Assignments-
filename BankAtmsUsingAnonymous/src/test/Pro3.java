package test;

public class Pro3 {

	public static void main(String[] args) {
		int ar[]= new int[] {20,15,95,5,44,29,6};
		//Selection Sort
		System.out.println("Selection Sort");
		for (int i = 0; i < ar.length; i++) {
			for (int j = i+1; j < ar.length; j++) {
				int temp=0;
				if(ar[i]>ar[j]) {
					temp=ar[i];
					ar[i]=ar[j];
					ar[j]=temp;
				}
			}
			System.out.print(ar[i]+ " ");
			
		}
		System.out.println("\nBubble Sort");
		for (int i = 0; i < ar.length; i++) {
			for (int j = i+1; j < ar.length; j++) {
				int temp=0;
				if(ar[j-1]>ar[j]) {
					temp=ar[j-1];
					ar[j-1]=ar[j];
					ar[j]=temp;
				}
			}
			System.out.print(ar[i]+ " ");
			
		}
		
		
	}
}
