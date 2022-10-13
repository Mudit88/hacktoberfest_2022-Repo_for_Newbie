const prompt=require('prompt-sync')();

var number= prompt('enter the number');
var flag=true;
function get(x){
for(var i=2;i<=x-1;i++){
    if(x%i==0){
        flag= false;
    }
  
}

if(flag==true){
    console.log('its a prime number ');
}
else{
    console.log('not a prime number');
}
}
var y=get(number);
