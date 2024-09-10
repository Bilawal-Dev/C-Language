//In This Program I Have Created By Own Power Function //

#include<stdio.h>

//Declaring Int Function Because We'll Return Value To Main Fn
//It Will Take 2 Parameters(Inputs).
int PowerFn(int base , int power);

int main()
{
    int basenum;
    int powernum;

    printf("Enter Base Number :     ");
    scanf("%d",&basenum);
    printf("Enter Power Of Base :     ");
    scanf("%d",&powernum);

/*Here,We Are Calling PowerFn And The Arguments Basenum / Powernum
Will Replace The Parameters Base / Power. */
    printf("%d",PowerFn(basenum,powernum));
//Here,2 Will Take Place Of Parameter base
//And 5 Will Take Place Of Parameter power
    printf("\n%d",PowerFn(2,5));

    return 0;
}

//Here We Will Define And Shape Our PowerFn
/*In This Fn We Will Declare A Variable Result 
And We Will Assign It Value Of 1 To Avoid Garbage Value
And We Use For Loop
Till Power Is Greater Than 0 The Loop Will Continue To Run
and Power Will Decrement.
In Each Repetition The Value Of Result Will Keep Updating 
At The End It Will Just Return The Result value To Main Function.!
*/
int PowerFn(int base , int power)
{
    int result = 1;
    while(power>0)
    {
        power--;
        result = result * base;
    }
    return result;
}
