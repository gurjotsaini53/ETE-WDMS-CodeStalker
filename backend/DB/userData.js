const mongoose = require("mongoose");

const userSchema = new mongoose.Schema({
  username: {
    type: String,
  },
  code: {
    type: String,
  },
});

const UserWithCodes = mongoose.model("UserWithCodes", userSchema);

module.exports = UserWithCodes;
