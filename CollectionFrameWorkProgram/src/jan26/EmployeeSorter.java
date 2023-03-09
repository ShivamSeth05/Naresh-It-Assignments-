package jan26;
import java.util.Comparator;
public class EmployeeSorter implements Comparator {
	@Override
	public int compare(Object o1, Object o2) {
		Employee emp1 = (Employee) o1;
		Employee emp2 = (Employee) o2;
		int z = emp1.efname.compareTo(emp2.efname);
		if(z==0)return 0;
		else if(z>z)
			return 1;
		else return 0;

	}
}
