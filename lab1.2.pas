var
  n, i, r, a: integer;

begin
  r := random(1, 99);  // taking random number from 1 to 99, assign a value to the variable r
  i := 1;  // start position of variable 
  a := 6;  // variable responsible for the number of attempts  
  writeln('You need to guess the positive number from 1 to 99, You have ', a, ' attemps. Good Luck!');

  for i := i to a do // this cycle is executed for the specified number of attempts
  begin
    write('Type a positive number from 1 to 99: ');
    repeat readln(n) until n in [1..99]; // protection from the bad guys, try it for free, inputting a number by the user
    if (n = r) then // if the number inputed by the user is equal to x 
                    // then it will output that the user answered the question correctly
    begin
      writeln('You got it! Perfect.');
      break;        // break after output
    end
    
    else begin
         if n < r then writeln('Sowwy, but you do not got it. The number you entered is lower than the number generated, just try again. ') 
         else writeln('Sowwy, but you do not got it. The number you entered is greater than the number generated, just try again. ');
      inc(a);       // else it will output that the user answered the question incorrectly
    end;
  end;
  writeln('Game over');
end.