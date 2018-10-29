let doimaunen = () => {
    document.getElementById("body").style.background = "blue";
    console.log("ok");

}

let redColor = 0;
let greenColor = 0;
let blueColor = 0;
let changeColor = () => {
    if (redColor < 255) {
        redColor += 5;
    }
    if (redColor >= 255) {
        greenColor += 5;
    }
    if (greenColor >= 255) {
        blueColor += 5;
    }
    if (blueColor >= 255) {
        redColor = 0;
        greenColor = 0;
        blueColor = 0;
    }
    document.body.style.backgroundColor = "rgb(" + redColor + "," + greenColor + "," + blueColor + ")";
    console.log(redColor);
}