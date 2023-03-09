package student;

import java.util.Comparator;

@SuppressWarnings("rawtypes")
public class SortByResult implements Comparator{
	public int compare(Object o1, Object o2) {
		Student s1=(Student)o1;
		Student s2=(Student)o2;
		int z = s1.grade.compareTo(s2.grade);
		if(z==0)return 0;
		else if(z>0) return 1;
		return -1;
	}
}
