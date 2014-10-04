
my $number = 5;
my $string = "var";

if ( $number == 5) {
	print "Yes\n";
} elsif ( $string eq "var" ) {
	print "String\n";
}  else {
	print "Total Failure\n";
}

unless ($number == 5) {
	print "This fails\n";
}

print "Quick!\n" if $number == 5;
