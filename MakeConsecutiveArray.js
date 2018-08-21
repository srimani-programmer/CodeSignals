function makeArrayConsecutive2(statues) {
    let arrangedStatues = statues.sort(function(a,b){return b -  a;});
let counter = 0;
for (var i = 0; i < arrangedStatues.length - 1; i++){
    if (arrangedStatues[i] - arrangedStatues[i+1] > 1){
        counter += arrangedStatues[i] - arrangedStatues[i+1] - 1;
    }
}
return counter;

}
