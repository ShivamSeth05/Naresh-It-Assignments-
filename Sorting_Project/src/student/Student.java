package student;

public class Student {
	String name;
	float totmarks,per;
	int rollNo;
	String grade;
	public Student(int rollNo, String name, float totmarks, float per, String grade) {
		super();
		this.rollNo = rollNo;
		this.name = name;
		this.totmarks = totmarks;
		this.per = per;
		this.grade = grade;
	}
	public Student() {
		
	}
	public int getRollNo() {
		return rollNo;
	}
	public void setRollNo(int rollNo) {
		this.rollNo = rollNo;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public float getTotmarks() {
		return totmarks;
	}
	public void setTotmarks(float totmarks) {
		this.totmarks = totmarks;
	}
	public float getPer() {
		return per;
	}
	public void setPer(float per) {
		this.per = per;
	}
	public String getGrade() {
		return grade;
	}
	public void setGrade(String grade) {
		this.grade = grade;
	}
	@Override
	public String toString() {
		return "Student [rollNo=" + rollNo + ", name=" + name + ", totmarks=" + totmarks + ", per=" + per + ", grade="
				+ grade + "]";
	}
	

}
