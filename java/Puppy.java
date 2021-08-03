public class Puppy
{
	int puppyAge;
	public Puppy(String name)
	{
		System.out.println("Puppy is:" + name);
	}

	public void  setAge(int age)
	{
		puppyAge = age;
	}

	public int getAge()
	{
		System.out.println("PuppuAge is:"+ puppyAge);
		return puppyAge;
	}

	public static void main(String[] args)
	{
		Puppy myPuppy = new Puppy("tommy");
		myPuppy.setAge();
		myPuppy.getAge(2);
		System.out.println("bianliangzhi:"+ myPuppy.puppyAge);
	}
}