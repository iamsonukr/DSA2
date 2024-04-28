#include<bits/stdc++.h>
using namespace std;
// 🤦‍♂️

// 26. Check if a number is palindrome or not
void checkPalin(int num){
    int forCheck=num;
    int sum=0;
    while(num>0){
        int dig=num%10;
        sum=sum*10+dig;
        num/=10;
    }
    if(sum==forCheck){
        cout<<"It is palindrom ..."<<endl;
    }
    else{
        cout<<"No "<<endl;
    }

}

// 27. Find all Palindrome numbers in a given range

void checkAllPalin(int a ,int b){
    for(int i=a;i<=b;i++){
        checkPalin(i);
    }
}
// 28. Check if a number is prime or not
void checkPrime(int a){
    int limit2=sqrt(a);
    for(int i=2;i<limit2;i++){
        if(a%limit2==0){
            cout<<"Number is Prime "<<endl;
            return;
        }
    }
    cout<<"Number is composite"<<endl;
}

// 29. Prime numbers in a given range
void primeInRange(int a, int b){
    for(int i=a;i<b;i++){
        checkPrime(i);
    }
}

// 30. Check if a number is armstrong number of not
void checkArm(int num){
    int digNum=0;
    int numorg=num;
    int num2=num;
    int count=0;


    while(num2>0){
        count++;
        num2/=10;
    }
    cout<<count<<endl;

    int checkNum=num;
    int sum=0;

    while(num>0){
        int dig=num%10;
        sum+=pow(dig,count);
        cout<<sum<<endl;
        num=num/10;
    }
    cout<<sum<<endl;
}


// 31. Check if a number is perfect number

void checkPerfect(int num){
    int sum=0;
    int num2=num;
    while(num>0){
        int dig=num%10;
        sum=sum+dig;
        num=num/10;
    }
    cout<<sum<<endl;
}


// 32. Even or Odd
void checkEven(int a){
    cout<<"DONE"<<endl;
}


// 33. Check weather a given number is positive or negative
void checkPosive(int a){
    cout<<"Done"<<endl;
}

// 34. Sum of first N natural numbers
 void sumOfNat(int n){
    int sum=(n*(n-1))/2;
    cout<<sum<<endl;
 }

// 35. Find Sum of AP Series🤦‍♂️
// 36. Program to find sum of GP Series

// 37. Greatest of two numbers
void greatTwo(int a,int b){
    cout<<"DONE"<<endl;
}
// 38. Greatest of three numbers'
void greatThre(int a,int b,int c){
    if(a>b && a>c){
        cout<<a<<endl;
    }else if(b>a && b>c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
}

// 39. Leap Yejar or not
void checkLeap(int year){
     if(year%400==0){
        cout<<"It is leap year"<<endl;
     }
     else if(year%4==0 && year%100!=0){
        cout<<"It is also year"<<endl;
     }else{
        cout<<"It is not leap year"<<endl;
     }
}


// 40. Reverse digits of a number
void reverse(int i){
    cout<<"Done"<<endl;
}

// 41. Maximum and Minimum digit in a number
void maxMin(int num){
    int sum=0;
    int mn=99;
    int mx=0;
    while(num>0){
        int dig=num%10;
        if (dig>mx){
            mx=dig;
        }
        if(dig<mn){
            mn=dig;
        }
        num/=10;
    }
    cout<<mx<<" "<<mn<<endl;
}

// 42. Print Fibonacci upto Nth Term
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

// 43. Factorial of a number
int fact(int n){
    if (n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}


// 44. Power of a number
int powerD(int a,int b){
    int res=1;
    while(b--){
        // res=res+(res*a)
        res*=a;
        // cout<<res<<endl<<" ";
    };
    cout<<res<<endl;
}


// 45. Factors of a given number
void factors(int num){
    int count=0;
    for (int i=2;i<num;i++){
        if(num%i==0){
            cout<<i<<" ";
            count++;
        }
        else{
        }
    }
    if(count==0){
    cout<<"No factors exist"<<endl;
    }
}

// 46. Print all prime factors of the given number
bool checkPrime2(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void primeFactors(int num){
    vector<int>arr;
    for (int i=2;i<num;i++){
        if(num%i==0 && checkPrime2(i) ){
            arr.push_back(i);
        }
    }
    for(auto k:arr){
        cout<<k<<" ";
    }
    
}


// 47. Check if a number is a strong number or not
void strongNum(int num){
    int sum=0;
    while(num>0){
        int dig=num%10;
        sum+=fact(dig);
        num/=10;
    }
    cout<<sum<<endl;
}

// 48. Check if a Number is Automorphic
int checkAutomorphic(int n){
    int num2=n;
    int powNum=pow(n,2);
    powNum%=10;
    cout<<powNum<<endl;
}

// 49. GCD of two numbers
int gcdTwo(int a,int b){
    if(b==0)return a;
    return(b,a%b);
}


// 50. LCM of two numbers
int gcdOfTwo(int a,int b){
    if(b==0)return a;
    return gcdOfTwo(b, a%b);
}

int lcmTwo(int num1,int num2){
    int res=(num1*num2)/gcdOfTwo(num1,num2);
    cout<<res<<endl;
    return res;
}
// 51. Check if a number is Harshad number
int harshad(int num){
    int sum=0;
    int numTemp=num;
    while(numTemp>10){
        int dig=num%10;
        sum+=dig;
        num/=10;
    }
    if(num%sum==0){
        cout<<"Harshad"<<endl;
    }
}

// 52. Check if the number is abundant number or not
void checkAbundence(int num){
    int sum=0;
    for(int i=1;i<=num/2 ;i++){
        if(num % i== 0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    // return sum;
}



// 53. Sum of digits of a number🤦‍♂️
void digitSum(int num){
    int sum=0;
    while(num>0){
        int dig=num%10;
        int sum=sum+dig;
        num/10;
    }
    cout<<sum<<endl;
    // return sum;
}
// 54. Sum of numbers in the given range
int sumRange(int a , int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum=sum+a;
    }
    cout<<sum<<endl;
}
// 55. Permutations in which N people can occupy R seats in a classroom🤦‍♂️


// 56. Program to add two fractions
int gcdNum(int a,int b){
    if(b==0)return a;
    return gcdNum(b,a%b);
}

void fracSum(int num1,int den1,int num2,int den2){
    int den=den1*den2;

    int s1=den/den1;
    int ss1=s1*num1;

    int s2=den/den2;
    int ss2=s2*num2;

    int num=ss1+ss2;
    int gcd1=gcdNum(num,den);

    if (gcd1)
    {
        int num3=num/gcd1;
        int den3=den/gcd1;
        cout<<num3<<"/"<<den3<<endl;
    }
    else
    {
        cout << num << "/" << den << endl;
    }
}

// 57. Replace all 0s with 1s in a given integer
int replaceZero(int num){
    int num1=num;
    int res=1;
    int dig;
    int mul=1;
    while(num1>0){
        dig=num1%10;
        if(dig==0)dig=1;
        res=res+dig*mul;
        mul=mul*10;
        num1/=10;
    }
    cout<<res<<endl;
}

// 58. Can a number be expressed as a sum of two prime numbers 
bool checkPrime3(int n){
    if(n==1)return true;

    int sqr=sqrt(n);
    for(int i=2 ;i<=sqr;i++){
        if(n%i==0)return false;
    }
    return true;
}

bool checkPrimeSum(int num){
    int num2=0;
    int sum=0;
    for(int i=2;i<num/2;i++){
        num2=num-i;
        sum=num2+i;
        if(checkPrime3(i) && checkPrime3(num2) && (sum==num)){
            cout<<i <<"+"<<num2<<endl;
            return true ;
        }
    }
    return false;
}


// 59. Calculate the area of circle
void calculateArea(int r){
    int area=3.14*pow(r,2);
    cout<<area<<endl;
}


// 60. Program to find roots of a Quadratic Equation🤦‍♂️


// 61. Convert Binary to Decimal
int binToDeci(int num)
{
    int sum=0;
    int mul=1;
    int dig=0;
    while(num>0){
        dig=num%10;
        sum=sum+dig*mul;
        mul*=2;
        num/=10;

    }
    cout<<sum<<endl;
}
// 62. Convert binary to octal


// 63. Decimal to Binary conversion
// 64. Convert decimal to octal
// 65. Convert octal to binary
// 66. Convert octal to decimal
// 67. Convert digits/numbers to words

int main(){
    binToDeci(1);
}