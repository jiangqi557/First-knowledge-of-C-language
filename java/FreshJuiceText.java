class FreshJuice
{
	enum FreshJuiceSize{ SMALL , MEDIUM , LARGE }
	FreshJuiceSize size;
}

public class FreshJuiceText
{
	public static void main(String[] args)
	{
		FreshJuice juice =new FreshJuice();
		juice.size = FreshJuice.FreshJuiceSize.MEDIUM;
		System.out.print("juice.size");
	}
}