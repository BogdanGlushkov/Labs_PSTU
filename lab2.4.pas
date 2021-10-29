var
  number: string;

var
  i: integer;

begin
  writeln('Type a number consist of 0 and 1');
  readln(number);
  for i := 1 to length(number) do
  begin
    if(number[i] = '1') then
      number[i] := '0'
    else if(number[i] = '0') then
      number[i] := '1';
  end;
  writeln(number);
end.