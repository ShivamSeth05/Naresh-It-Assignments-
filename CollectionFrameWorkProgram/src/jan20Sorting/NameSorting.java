package jan20Sorting;

import java.util.Comparator;

@SuppressWarnings("rawtypes")
public class NameSorting implements Comparator{ 
	public int compare(Object o1,Object o2){
		Product p1 = (Product)o1;
		Product p2 = (Product)o2;
		int z = p1.name.compareTo(p2.name);
		if(z==0) return 0;
		else if(z>0) return 1;
		else return -1;
	}
}
