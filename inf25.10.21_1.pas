var
  s, mn: set of integer;
  f: boolean;
  k, n, c, i, m, count, max: integer;

begin
  write('Type a three digit number: ');
  repeat readln(n) until n in [100..999]; // protection from the bad guys, try it for free
  k := n;            // the number to be outputed at the end, literally
 
  while n <> 0 do
  begin              // until the number not equals zero
    c := n mod 10;   // last digit of the number
    include(s, c);   // add this number to the set
    n := n div 10;   // cut off this number, of course
  end;
  
  max := 0;            // declare a variable named max
  for i := 100 to 999 do
  begin              // consider all three-digit numbers
    mn := s; m := i; f := true;  // zero all variables
    while m <> 0 do
    begin    // until the number not equals zero
      c := m mod 10;    // last digit of the number
      if c in mn then exclude(mn, c)  //if the number is in the set, we remove it from there
      else f := false;                //  to avoid repetition, otherwise we don't consider it.
      m := m div 10;    // cut off this number, once again
    end;
    if f then begin inc(count); write(i:5);  // if the check is successful, output the number on the screen
    if max < i then max:= i; end             // and add the value of the variable-counter         
  end;
 
  writeln; writeln('You can make ', count, ' numbers from the combination ', k);   // output the result
  writeln('The largest of the composed numbers: ', max);  // output the maximum number
end.
