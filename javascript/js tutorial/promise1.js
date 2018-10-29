let promise = new Promise((resolve, reject)=>{
    resolve("success");//ham nay tra ve ket qua neu thang cong
    reject("Error");// ham nay tra ve loi khi promise that bai 
});


promise.then(
    (date)=>{
        console.log(date);
    },
    (error)=>{
        console.log(error);
    }
);