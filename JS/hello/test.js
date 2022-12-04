const fs = require('fs');
let file_path = __dirname + '/data.json',
    dbraw = fs.readFileSync(file_path),
    db = JSON.parse(dbraw);
console.log(db);
db.push({ email: 'John@wer.com', password: '234234' });
fs.writeFileSync(file_path, JSON.stringify(db));

