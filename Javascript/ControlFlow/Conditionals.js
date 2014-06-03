

if (false || null || undefined || '' || 0 || 0/0  ) {
  //will never evaluate to true
  console.log("All other values are \'truthy\'");

} else {
  console.log("all values are falsey");
}
