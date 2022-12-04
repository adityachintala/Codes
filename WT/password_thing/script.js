function checkPasswordAndEmail() {
    // to check if password is valid with regex
    let pass = document.getElementById("password");
    let passVal = pass.value;               
    let emailVal = document.getElementById("email").value;
    let emailRegex = /^([a-zA-Z0-9_\-\.]+)@([a-zA-Z0-9_\-\.]+)\.([a-zA-Z]{2,5})$/;
    let passRegex = /^(?=.*[0-9])(?=.*[!@#$%^&*])[a-zA-Z0-9!@#$%^&*]{6,16}$/;
    let x = "";
    if (passRegex.test(passVal) && emailRegex.test(emailVal)) {
        document.getElementById("validPassword").innerHTML = "Valid Email<br>Valid Password";
        x = "Valid Email and Password";
    }
    else if (!passRegex.test(passVal) && emailRegex.test(emailVal)) {
        document.getElementById("validPassword").innerHTML = "Valid Email<br>Invalid Password";
        x = "Invalid Password";
    }
    else if (passRegex.test(passVal) && !emailRegex.test(emailVal)) {
        document.getElementById("validPassword").innerHTML = "Invalid Email<br>Valid Password";
        x = "Invalid Email";
    }
    else {
        document.getElementById("validPassword").innerHTML = "Invalid Email<br>Inalid Password";
        x = "Invalid Email and Password";
    }
    let newone = {
        "email": emailVal,
        "password": passVal,
        "validity" : x
    }
    let file_path = './passwords.json'; 
    let db = [{}];
    // store the json data in db
    fetch(file_path)
        .then((response) => response.json())
        .then((data) => {
            // console.log(data);
            db = data;
        });
    // push the new data to db
    console.log(typeof(db));
    db.push(newone);
    console.log(db);
    // write the new data to the file
    let don = require('fs');
    const FileSystem = don("fs");
    FileSystem.writeFile('./passwords.json', JSON.stringify(db), (error) => {
        if (error) throw error;
    });
            
    // db.push(data);
    // fs.writeFileSync(file_path, JSON.stringify(db));
}