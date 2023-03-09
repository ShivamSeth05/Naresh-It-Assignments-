package student;

import java.util.Comparator;

@SuppressWarnings("rawtypes")
public class SortbyPer  implements Comparator{
	public int compare(Object o1, Object o2) {
		Student s1=(Student)o1;
		Student s2=(Student)o2;
		if(s1.per==s2.per)return 0;
		else if(s1.per>s2.per) return 1;
		return -1;
	}
}
