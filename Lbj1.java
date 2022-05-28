import java.io.*;

class DisplayFactors
{
	public static void Display(int iNo)
	{
		int iCnt = 0;
		for(iCnt = 1; iCnt<=iNo/2;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				System.out.println(iCnt);
			}
		}
	}
}

class Lbj1
{
	public static void main(String a[]) throws Exception
	{
		// int iValue=0;
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);

		int iValue = Integer.parseInt(bobj.readLine());
		


		DisplayFactors dobj = new DisplayFactors();
		DisplayFactors.Display(iValue);

	}
}