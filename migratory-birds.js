function migratoryBirds(arr) {
    var i, j;
    var f=[];
    for (i = 1; i <= 5; i++){ //types of birds
        var c = 0;
        for (j = 0; j < arr.length; j++){
            if (arr[j] === i) {
                c++;
            }
            f[i - 1] = c;   
        }
    }

    var max = f[0],loc=0;
    for (i = 0; i < 5; i++){
        if (f[i] > max) {
            max = f[i];
            loc = i + 1;
        }
    }
    return loc;
}
