import java.util.*;
class week3a
{
	public static void main(String args[]){
	int start,end,count,prime;
	System.out.println("Enter the starting and ending numbers:");
	Scanner sc = new Scanner(System.in);
	start = sc.nextInt();
	end = sc.nextInt();
	System.out.println("The prime numbers between "+start+"and"+end+" is:");
	for(;start<=end;start++){
		count = 0;
		prime = 2;
		for(;i<=start/2;){
			if(start%i==0){
				count++;
				break;
			}
		}
		if(count==0&&start!=1){
			System.out.println(start);
		}
	}
	}
}