import java.io.*;
class CIELRCPT
{
	public static void main(String args[])throws IOException
	{
		final int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
		BufferedReader x=new BufferedReader(new InputStreamReader(System.in));
		byte t=Byte.parseByte(x.readLine());
		int j;
		byte ans;
		for(byte i=0;i<t;i++)
		{
			ans=0;
			int p=Integer.parseInt(x.readLine());
			while(p>0)
			{
				j=0;
				while(j<=11 && a[j]<=p)
					j++;
				p=p-a[j-1];
				ans++;
			}
		System.out.println(ans);
		}
	}
}