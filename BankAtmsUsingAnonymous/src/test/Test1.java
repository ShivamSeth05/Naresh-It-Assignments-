package test;

public class Test1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a=1,b=0;
		for(int i=1;i<10000;i++) {

			if(i%2==1) {
				a=a+i;
			}
			else {
				a=a*i;
			}
			if(a<10000)
				b++;
			//			System.out.println("conut="+b);
		}
		System.out.println("conut="+b);
	}

}
