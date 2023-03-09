package jan18sorting;

@SuppressWarnings("rawtypes")
public  class BookData extends Object implements Comparable {

	public int code;
	public String name;
	public BookData(int code,String name)
	{
		this.code=code;
		this.name=name;
	}
	@Override
	public String toString()
	{
		return code+"\t"+name;
	}
	@Override
	public int compareTo(Object o)
	{
		BookData bd = (BookData)o;//DownCasting process 
		if(code==bd.code) return 0;
		else if(code>bd.code) return 1;
		else return -1;
	}
}




