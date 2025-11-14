with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Float_Text_IO; use Ada.Float_Text_IO;

procedure scope is
   n: integer;

   procedure A(x: in integer) is
      z: float;

      function B(y: in integer) return float is
         n: float;
      begin
         n := 0.5;
      	 Put_Line("function B --------------------");
         Put("n = "); Put(n);Put_line("");
         Put("x = "); Put(x);Put_line("");
         Put("y = "); Put(y);Put_line("");
         Put("z = "); Put(z);Put_line("");

	 return n * float(y);
      end B;

   begin
      z := B(x);
      Put_Line("procedure A --------------------");
      Put("n = "); Put(n);Put_line("");
      Put("x = "); Put(x);Put_line("");
--      Put("y = "); Put(y);Put_line("");
      Put("z = "); Put(z);Put_line("");
   end A;

begin
   n := 5;
   A(n);
   Put_Line("procedure scope --------------------");
   Put("n = "); Put(n);Put_line("");
--   Put("x = "); Put(x);Put_line("");
--   Put("y = "); Put(y);Put_line("");
--   Put("z = "); Put(z);Put_line("");
end scope;
