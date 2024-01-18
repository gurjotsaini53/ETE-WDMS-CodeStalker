const mongoose = require("mongoose");

const connectDb = async () => {
  try {
    await mongoose.connect(
      "mongodb+srv://admin:admin@cluster0.rfxpled.mongodb.net/?retryWrites=true&w=majority"
    );
    console.log("Connected to DB");
  } catch (error) {
    console.log(error);
  }
};

module.exports = connectDb;
