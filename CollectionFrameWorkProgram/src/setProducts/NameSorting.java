package setProducts;
import java.util.*;

@SuppressWarnings("rawtypes")
public class NameSorting implements Comparator{
	public int compare(Object o1,Object o2)
	{
		Products p1 = (Products)o1;
		Products p2 = (Products)o2;
		int z = p1.name.compareTo(p2.name);
		if(z==0) return 0;
		else if(z>0) return 1;
		else return -1;
	}
}


