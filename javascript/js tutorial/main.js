
/********************************************************/
/*                        OUTPUT                        */
/********************************************************/


// window.onload = function what() {
//     document.getElementById('innerhtml').innerHTML = 'hello';
// };
let demo = () => {
    document.getElementById('innerhtml').innerHTML = 'This is innerHTMML method!';
}

let demo1 = function () {
    document.writeln("This is document.write method!");
}

let demo2 = function () {
    window.alert("This is alert box!")
}

let demo3 = function () {
    window.console.log("This is console log!")
}



// *******************************************************//
//                       FUNCTIONS                        //
//                                                        //
// *******************************************************//

let tong = function (a, b) {
    return a + b;
}

let nhan = (a, b) => {
    return a * b;
}
let demo4 = function (a, b) {
    document.getElementById("demo4").innerHTML = tong(a, b)
    window.alert(tong(a, b))
}


/* ****************************************************** */
//                         OBJECT                          //
/* ****************************************************** */

let car = {
    type: "toyota",
    model: "500",
    color: "white",
    show_car: function () {
        console.log(this.type + "," + this.model + "," + this.color)
    }
}

// chuyen thong tin qua trang khas
let checkobj = () => {
    car.show_car();
}


/* ****************************************************** */
//                         STRING                         //
/* ****************************************************** */

let txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
let len = txt.length;
let pos = txt.indexOf("F")
let las = txt.lastIndexOf("K")
let search = txt.search("E")
let res = txt.slice(5, 10);
let res1 = txt.slice(7);
let res2 = txt.substring(4, 15)
let res3 = txt.substring(10)
let rep = txt.replace("ABCD", "abcd")
let upper = txt.toUpperCase()
let lower = txt.toLowerCase()

let trim = "                hello world!";

let str1 = txt.charAt(5)
let str2 = txt.charCodeAt(0)
let txt1 = "a,b,c,d,e,f";
let split1 = txt1.split(",")
let show_string = () => {
    console.log("value: " + txt);
    console.log("length: " + len);
    console.log("index of " + pos);
    console.log("lastIndexof " + las);
    console.log("search " + search);
    console.log("slice " + res);
    console.log("slice 1:  " + res1);
    console.log("slice 2:  " + res2);
    console.log("slice 3:  " + res3);
    console.log("replace:  " + rep);
    console.log("upper:  " + upper);
    console.log("lower:  " + lower);
    window.alert(trim.trim());
    console.log(str1);
    console.log(str2);
    console.log(split1[2]);
}


/* ****************************************************** */
//                         NUMBER                         //
/* ****************************************************** */

let mynum = 1344;

// toFixed() return a string , with the number written with a specified number of decimals

let x = 1234.3456787654;

num = () => {
    console.log("toFixed: " + x.toFixed(3));
    console.log("toPrecision: " + x.toPrecision(7))
    console.log("valueOf: " + x.valueOf());

    window.alert(mynum.toString())
}
// ham isNaN(a) la ham kiem tra phai la so hay khong Not a Number
// gia tri Infinity la gia tri xay ra khi so banj qua lon

// let y = 2; //normal way to declare a number
let y = new Number(2)//declare a number like an objeck

function InfinityValue() {
    while (y != Infinity) {
        y *= y;
    }
    console.log("gia tri y qua lon: " + y);
}

// number can be an object in js
// you can declare a number object like this
// let x = new Number(1000)

// ====================================================================
// js number methods 
// ====================================================================

// 1. toString()
/*u can transfer a numer into string type by using toString() method */

let k = 1000000;
k.toString();

console.log("number to string: " + k);

// 2.toExponential()
// ham nay tran ve gia tri e mu x
k.valueOf()
let m = k.toExponential(6)//6 la he so sau dau ,
console.log(m);


//ham toFixed() la ham tra ve dinh dang so sau phan thap phan
k = 9.00000000034567
k.toFixed(5)
console.log(k.toFixed(5));

//ham toPrecision() return a string, with a number written with a special specified length
//ham quy tron
console.log(k.toPrecision(8));

// the valueOf() return a number as a number

console.log(k.valueOf());

// parseInt(x), parseFloat(x), Number()
console.log(parseInt(k));

// number properties
// max_value,min_value,positive_infinity,...nan..

k = Number.MAX_VALUE;
console.log(k);


// ===================================================================
// JAVASCRIPT ARRAYS
// ===================================================================

// creating an array
let array1 = [1, "mua", 2, "nha", 4, 5, 6789, "volor"]
console.log(array1);

// using key word new
let array2 = new Array("luong", 2, 3, 4, 5, 6, "tien", 24354);
console.log(array2);

//object
let person = { firstName: "john", lastName: "jam", age: 34 };
console.log(person);
console.log(person.firstName);

// mot so thuoc tinh va methods
console.log(array1.length);
console.log(array2.sort());

let xam1 = ["em", "thich", "an", "chuoi"];
let rexam1 = "";
xam1.forEach(element => {
    rexam1 += element + " ";

});

console.log(rexam1);

//adding array element
let fruits = ["Banana", "Orange", "Apple", "Mango"];

//push a new element
fruits.push("Lemon");
console.log(fruits);


///////////////////////////JS ARRAYS METHODS//////////////////////////

// 1.converting array to strings

let fr = ["banana", "orange", "apple", "mango"]
console.log(fr.toString());

// 2.join() phuong thuc dung de buoc cac phan tu lai

console.log(fr.join(" "));

// 3.pop()

console.log(fr.pop());

// 4.push
console.log(fr.push("Kiwi"));
console.log(fr);

// 5.delete
delete fr[2]

console.log(fr);
fr[2] = "cam"

fr.splice(2,0,"Lemon","Peach")
console.log(fr);
fr.splice(fr.length-1,1);
console.log(fr);

delete fr

console.log(fr);

