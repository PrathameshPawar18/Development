import java.io.*;

class Display
{
	public void DisplayDigits(int iNo)
	{
		int iDigit =0;
		while(iNo > 0)
		{
			iDigit = iNo%10;
			System.out.println(iDigit);
			iNo = iNo/10;
		}
	}
}
class Digits1j
{
	public static void main(String a[]) throws Exception
	{
		
		System.out.println("Enter no");
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		int iValue = Integer.parseInt(bobj.readLine());
		Display dobj = new Display();
		dobj.DisplayDigits(iValue);

	}
}