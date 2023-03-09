package jan26;

public class Employee {
	String emp_id,efname,elname,edesg;
	float bsal;

	public Employee(String emp_id, String efname, String elname, String edesg, float bsal) {
		super();
		this.emp_id = emp_id;
		this.efname = efname;
		this.elname = elname;
		this.edesg = edesg;
		this.bsal = bsal;
	}
	public Employee() {
		// TODO Auto-generated constructor stub
	}
	@Override
	public String toString() {
		return "Employee [emp_id=" + emp_id + ", efname=" + efname + ", elname=" + elname + ", edesg=" + edesg
				+ ", bsal=" + bsal + "]";
	}
	

}
