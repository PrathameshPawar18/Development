import java.util.*;

class Display
{
	public int iCnt=0;

	public void Display1(int iValue)
	{
				for(iCnt =0; iCnt<iValue; iCnt++)
		{
			System.out.print("*	");
		}
	}
}

class Pattern1
{
	public static void main(String arg[])
	{
		int iValue = 0;
		Display dobj = new Display();
		dobj.Display1(5);

	}
}