const express = require('express');
const app = express();
const port = 3000;
const path = require("path");
const router = express.Router();
app.set("view engine", "pug");
app.set("views", path.join(__dirname, "views"));

app.use("/", router);
router.get('/', (req, res) => res.render("index"));

router.get('/about', (req, res) => {
    res.render("about", {
        title: "Hey",
        message: "Welcome to KMIT! Thankyou"
    });
});

app.listen(3000, () => {
    console.log("Server starts at port 3000");
});

app.get('/get/:name/:cname', (req, res) => {
    res.send('Hello ' + req.params['name'] + , $(req.params['cname']))
    college wellocmes you')
});

