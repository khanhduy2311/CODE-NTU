const   //fi='MOBI.INP';
        //fo='MOBI.OUT';
        nmax=1000000;
type    data=longint;
var
        //f:text;
        Y:array[0..4*nmax+2] of data;
        x,n,k,i:data;
        res,s:int64;
 
begin
        //assign(f,fi); reset(f);
        readln(n,k);
        fillchar(y,sizeof(y),0);
        for i:=1 to n do
                readln(x,y[x]);
        //close(f);
        s:=0;
        for i:=0 to 2*k do
                s:=s+y[i];
        res:=s;
        for i:=1 to nmax-2*k do
                begin
                        s:=s-Y[i-1];
                        s:=s+y[i+2*k];
                        if res<s then res:=s;
                end;
        //assign(f,fo); rewrite(f);
        writeln(res);
        //close(f);
end.
