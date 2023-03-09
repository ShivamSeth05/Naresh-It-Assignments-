package demo28multithread;

public class DemoThread4 {

	public static void main(String[] args) {
		new Thread(Register:: register).start(); 
		new Thread(Login :: login).start();
	}

}
