package jan20Sorting;

import java.util.Comparator;

@SuppressWarnings("rawtypes")
public class QtySorting implements Comparator{
	public int compare(Object o1, Object o2) {
		Product p1=(Product)o1;
		Product p2=(Product)o2;
		if(p1.qty==p2.qty)return 0;
		else if(p1.qty>p2.qty)return 1;
		return -1;
	}
}
