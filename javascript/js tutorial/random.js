// var x = [1,2,3,45,67,6,5432,1,1,1,3,34];
let x = [];
let key;
var findx = (array, y) => {
    for (let index = 0; index < array.length; index++) {
        if (y == array[index]) {
            return true;
        }
    }
    return false;
}

var timer = () => {
    let ran = Math.floor(Math.random() * 16);
    document.getElementById("number").innerHTML = ran;
    if (findx(x, ran) == false && x.length < 7) {
        x.push(ran);
    }
}

let result = () => {
    console.log(x);
    clearInterval(key);
    document.getElementById("result").innerHTML = "[" + x + "]";
}

let randomlist = () => {
    x.forEach(element => {
        x.shift();
    });
    key = setInterval(timer, 100);
}


let counter = () => {
    let second = 0;
    let mini = 0;

    let limit;
    try {
        limit = document.getElementById("minute").value;
        console.log(limit);
        if (limit == "") {
            alert("nhap lai!");
        }

        let counterset = setInterval(() => {
            second++;

            if (second >= 59) {
                mini++;
            }
            if (mini == limit) {
                clearInterval(counterset);
                second = 0;
                mini = limit;
            }
            document.getElementById("counter").innerHTML = mini + " : " + second;
        }, 1000);
    } catch (error) {
        alert("Error in input data!");
    }
}
