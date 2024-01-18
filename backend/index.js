const express = require("express");
const routes = require("./routes/routes");
const chalk = require("chalk");
require("dotenv").config();
const connectDb = require("./DB/DbConnect");
const app = express();
const cors = require("cors");
const PORT = process.env.PORT || 8080;
app.use(express.json());
app.use(routes);
connectDb();
app.listen(PORT, () => {
  console.log(chalk.bgGreen(`Server is running at PORT ${PORT}`));
});
