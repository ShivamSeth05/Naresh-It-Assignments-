package demo07feb;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Scanner;

public class DemoFile1 {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		try(s;){
			try {
				System.out.println("Enter fPath&fName(Source):");
				File f1 = new File(s.nextLine()); //path
				if(f1.exists()) {
					FileInputStream fis = new FileInputStream(f1);//use to find and open to readd
					System.out.println("Enter fPath&fName(Destination):");
					File f2 = new File(s.nextLine()); 
					FileOutputStream fos = new FileOutputStream(f2);//use to create and write
					int k;
					while((k=fis.read())!=-1) {
						fos.write(k);
					}//end of loop
					System.out.println("File Copied Successfully....");
					fos.close();
					fis.close();
				}else {
					System.out.println("Invalid	fPath&fName...");
				}
			}//end of try
			catch(Exception e) {
				e.printStackTrace();
			}
		}//end of try with resource
	}

}
