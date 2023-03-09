package jan25lab;

import java.util.ArrayList;
import java.util.List;

//Variables :
//private : hospitalCode int, hospitalName String,
//listOfTreatments List<String>,contactPerson String,
//contactNumber String,location String
//public : Constructors:
//Default Constructor, Parameterized Constructor with arguments in the order of
//hospitalName,listOfTreatments,contactPerson,contactNumber,location
//Methods : public
// Generate All Getters & Setters
// Generate toString() to return a formatted string as per the below example.
//Hospital [hospitalCode=101, hospitalName=YASHODA, listOfTreatments=[Cardiac, ENT,
//Ortho, Pediatric, Gastro], contactPerson=MATHEWS, contactNumber=9848222222,
//location=Sec]
public class Hospital {
	private int hospitalCode;
	private String hospitalName ,contactNumber,location;
	List <String> listOfTreatments = new ArrayList<String>();
	public Hospital(int hospitalCode, String hospitalName, String contactNumber, String location,
			List<String> listOfTreatments) {
		super();
		this.hospitalCode = hospitalCode;
		this.hospitalName = hospitalName;
		this.contactNumber = contactNumber;
		this.location = location;
		this.listOfTreatments = listOfTreatments;
	}
	public int getHospitalCode() {
		return hospitalCode;
	}
	public void setHospitalCode(int hospitalCode) {
		this.hospitalCode = hospitalCode;
	}
	public String getHospitalName() {
		return hospitalName;
	}
	public void setHospitalName(String hospitalName) {
		this.hospitalName = hospitalName;
	}
	public String getContactNumber() {
		return contactNumber;
	}
	public void setContactNumber(String contactNumber) {
		this.contactNumber = contactNumber;
	}
	public String getLocation() {
		return location;
	}
	public void setLocation(String location) {
		this.location = location;
	}
	public List<String> getListOfTreatments() {
		return listOfTreatments;
	}
	public void setListOfTreatments(List<String> listOfTreatments) {
		this.listOfTreatments = listOfTreatments;
	}
	@Override
	public String toString() {
		return "Hospital [hospitalCode=" + hospitalCode + ", hospitalName=" + hospitalName + ", contactNumber="
				+ contactNumber + ", location=" + location + ", listOfTreatments=" + listOfTreatments + "]";
	}
	
	
	
}






