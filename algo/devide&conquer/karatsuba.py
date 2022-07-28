#/usr/bin/env python3 

def karatsuba(x,y):
    if x < 10 or y < 10 :
        return x*y
    else : 
        n = max(len(str(x)),len(str(y)))
        half = n / 2

        a =int(x / 10**(half))
        b =int(x % 10**(half))
        c =int(y / 10**(half))
        d =int(y % 10**(half))

        ac = karatsuba(a,c)
        bd = karatsuba(b,d)
        ad_plus_bc = karatsuba(a+b,c+d) - ac - bd

        prod = ac * 10**(2*half) + (ad_plus_bc * 10**half) + bd

        return prod

x = karatsuba(1234567891234566788221,124582446323365597741151)
print(x)
