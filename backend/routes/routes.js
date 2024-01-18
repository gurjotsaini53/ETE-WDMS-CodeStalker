const express = require("express");
const router = new express.Router();
const app = express();
const userCredential = require("../DB/credentialsSchema");
const cors = require("cors");
const userData = require("../DB/userData");
const { executeCPP, executeCPPWithInput } = require("../executors/executeCPP");
const {
  executePython,
  executePythonWithInput,
} = require("../executors/executePython");

router.use(cors());

router.post("/run", async (req, res) => {
  try {
    const code = req.body.code;
    const input = req.body.input;
    const lang = req.body.selectedOption;

    //console.log(req.body);
    //console.log(lang);
    //console.log(input);

    let output;
    if (input.trim() !== "") {
      if (lang === "cpp") output = await executeCPPWithInput(code, input);
      else if (lang == "python") {
        //console.log("inside python");
        output = await executePythonWithInput(code, input);
      } else if (lang === "C") output = await executeCPPWithInput(code, input);
    } else {
      if (lang === "cpp") output = await executeCPP(code);
      else if (lang == "python") {
        //console.log("inside python");
        output = await executePython(code, input);
      } else if (lang === "C") output = await executeCPP(code, input);
    }

    res.send(output);
  } catch (error) {
    res.status(500).send(error);
  }
});

router.post("/signup", async (req, res) => {
  try {
    const { name, email, username, password } = req.body;
    console.log(name, username, email, password);
    await userCredential
      .create({ name, username, email, password })
      .then((data) => {
        //console.log(data);
        // console.log("added succesfully");
      });
    res.status(201).json({ message: "Registration successful" });
  } catch (error) {
    console.log(error.message);
    res.status(500).json({ error: "Registration failed" });
  }
});

router.post("/signin", async (req, res) => {
  try {
    const { username, password } = req.body;
    const user = await userCredential.findOne({ username });
    console.log(req.body);

    if (!user) {
      return res.status(401).json({ error: "User doesn't exist !" });
    }
    if (user.password !== password) {
      return res.status(401).json({ error: "Inavlid Credentials" });
    }

    res.status(200).json(user);
  } catch (error) {
    console.log(error.message);
    res.status(500).json({ error: "Login Failed" });
  }
});

router.post("/save", async (req, res) => {
  console.log(req.body);

  try {
    const { username, code } = req.body;

    let user = await userData.create({ username, code });
    await user.save();
    res.status(200).json({ message: "code saved" });
  } catch (error) {
    console.error(error.message);
    res.status(500).json({ error: "failed to save code" });
  }
});



router.post("/mycodes", async (req, res) => {
  try {
    const {username} = req.body;
    console.log(username);
    const u = await userData.find({ username });
    const codeArray = u.map((item) => item.code);
    console.log(codeArray);
    res.status(200).json(codeArray);
  } catch (error) {
    res.status(404).json({ error: "can't get your codes" });
    console.log(error.message);
  }
});
module.exports = router;
