package setProducts;

import java.util.*;
@SuppressWarnings("rawtypes")
public class PriceSorting implements Comparator{
	public int compare(Object o1,Object o2) {
		Products p1 = (Products)o1;
		Products p2 = (Products)o2;

		if(p1.price==p2.price) return 0;
		else if(p1.price>p2.price) return 1;
		else return -1;
	}
}