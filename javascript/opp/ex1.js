let person = {
    firstname: "son",
    lastname: "nguyen",
    age: 21
};

//oop car
let car = new Object();
car.color = "red";
car.speed = 123;
car.price = 100000000;


let hi = () => {
    let per = document.getElementById("oop");
    per.innerHTML = "Hi " + person.firstname + " " + person.lastname;
}

let caroop = () => {
    let c = document.getElementById("oop");
    c.innerHTML = car.color + " " + car.speed;
}

// let day = () => {
//     let date = 31;
//     var month = 12;
//     let option = "";
//     for (let index = 0; index < date; index++) {
//         let count = index + 1;
//         option += '<option value="">' + count + '</option>';
//     }
//     document.getElementById("date").innerHTML = option;

//     //month
//     option = "";
//     for (let index = 0; index < month; index++) {
//         let count = index + 1;
//         option += '<option value="">' + count + '</option>';
//     }
//     document.getElementById("month").innerHTML = option;

//     //year
//     option = "";
//     for (let index = 1900; index < 2018; index++) {
//         let count = index;
//         option += '<option value="">' + count + '</option>';
//     }
//     document.getElementById("year").innerHTML = option;
// }

window.onload = function (e) {
    try {
        // hi();
        caroop();
        // day();
    } catch (error) {
        this.alert(error);
    }
}
