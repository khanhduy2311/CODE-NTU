Var
A,b:real;
x,y,i,s:Qword;
Begin
Read(A,b);
If (A-trunc(A)<0.5) and (A-trunc(A)>0) then x:=trunc(A)+1;
If A-trunc(A)>=0.5 then x:=trunc(A)+1;
If A=trunc(A) then x:=trunc(A);
y:=TRUNC(B);
Write(((x+y)*((y-x)+1)) div 2);
End.
