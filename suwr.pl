#!/usr/bin/perl
sub p{print join(" ",@_,0)."\n"}sub o{&p;for$i(0..7){p(-$_[$i+1],-$_[$_
])for 0..$i}}sub a{$x=shift;map{[@$_,$x]}@_}sub c{my($n,$b,@v)=@_;$n?($
b&1?(c($n-1,$b/2,map{a($_,@v)}0..2)):(map{c($n-1,$b/2,a($_,@v))}0..2)):
o(map{$r=1;for$e(0..5){$r+=$$_[$e]*3**$e}$r}@v)}$C=11988;while(<>){for$
c(/./g){++$C,push@u,$l*9+$c if 0+$c;++$l}}
print"p cnf 729 $C\n";p($_)for@u;c(6,$_,[])for 3,12,48,20
