package jan11_Map;


import java.util.*;


public class DemoMap1 {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		try(s;){
			try {
				Map<String,EmpValues> m=null;
				String nm=null;
				while(true) {
					System.out.println("===Choice====");
					System.out.println("1.HashMap<K,V>\n2.LinkedHashMap<K,V>\n3.TreeMap<K,V>\n4.Hashtable<K,V>\n5.exit");
					System.out.println("Enter theChoice:");
					switch(Integer.parseInt(s.nextLine())) {
					case 1:

						m = new
						HashMap<String,EmpValues>();
						nm = "HashMap<K,V>";
						break;
					case 2:
						m = new
						LinkedHashMap<String,EmpValues>();
						nm = "LinkedHashMap<K,V>";
						break;
					case 3:
						m = new
						TreeMap<String,EmpValues>();
						nm = "TreeMap<K,V>";
						break;
					case 4:
						m = new
						Hashtable<String,EmpValues>();
						nm = "Hashtable<K,V>";
						break;
					case 5:
						System.out.println("Map	operations Stopped");
						System.exit(0);
					default:
						System.out.println("Invalid	Choice...");
					}//end of Switch
					xyz:
						while(true) {
							System.out.println("====Choice====");
							System.out.println("\t1.put(K,V)\n\t2.remove(object)\n\t3.get(Object)\n\t 4.keySet()\n\t5.values()\n\t6.exit");
							System.out.println("Enter the	Choice:");

							switch(Integer.parseInt(s.nextLine()))
							{
							case 1:
								System.out.println("Enter the empId:");
								String id = s.nextLine();
								System.out.println("Enterthe empName:");
								String name = s.nextLine();
								System.out.println("Enter the empDesg:");
								String desg = s.nextLine();
								System.out.println("Enter the bSal:");
								int bSal = Integer.parseInt(s.nextLine());
								float totSal = bSal+(0.93F*bSal)+(0.61F*bSal);
								m.put(new String(id),new EmpValues(name,desg,bSal,totSal));
								m.forEach((p,q)->
								{
									System.out.println(p.toString()+"\t"+q.toString());
								});
								break;
							case 2:
								if(m.isEmpty()) {
									System.out.println("Map is empty...");
								}else {
									System.out.println("Enter the empId:");
									String eId = s.nextLine();

									if(m.containsKey(eId)) {
										m.remove(eId);
										m.forEach((p,q)->
										{
											System.out.println(p.toString()+"\t"+q.toString());
										});
									}else {
										System.out.println("Invalid empId..");
									}
								}
								break;
							case 3:
								if(m.isEmpty()) {
									System.out.println("Map is empty...");
								}else {
									System.out.println("Enter the empId:");
									String eId2 =
											s.nextLine();
									if(m.containsKey(eId2)) {
										System.out.println(m.get(eId2));
									}else {
										System.out.println("Invalid empId...");
									}
								}
								break;
							case 4:
								Set<String> st =
								m.keySet();
								st.forEach((k)->
								{
									System.out.println(k.toString());

								});
								break;
							case 5:
								Collection<EmpValues> c =
								m.values();
								c.forEach((z)->
								{
									System.out.println(z.toString());
								});
								break;
							case 6:
								System.out.println(nm+"Operations Stoped..");
								break xyz;
							default:
								System.out.println("Invalid Choice...&quot;");
							}//end of switch
						}//end of loop
				}//end of loop

			}catch(Exception e) {e.printStackTrace();
			}
		}//end of try with resource


	}
}



