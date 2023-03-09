package student;

import java.util.Comparator;

@SuppressWarnings("rawtypes")
public class SortbyRollNo implements Comparator {

	@Override
	public int compare(Object o1, Object o2) {
		Student s1=(Student)o1;
		Student s2=(Student)o2;
		
		if(s1.rollNo==s2.rollNo)return 0;
		else if(s1.rollNo>s2.rollNo) return 1;
		return -1;
	}

}
