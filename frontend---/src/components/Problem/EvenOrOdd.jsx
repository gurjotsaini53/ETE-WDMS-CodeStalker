import React, { useState } from "react";
import Navbar from "../Navbar";
import Editor from "../Editor";
import axios from "axios";

export const EvenOrOdd = () => {
  const [code, setCode] = useState("");
  const [input, setInput] = useState("7");
  const [selectedOption, setSelectedOption] = useState("cpp");
  const [output, setOutput] = useState("odd\r\n");

  async function execute() {
    try {
      let res = await axios.post("http://localhost:8080/run", {
        code,
        input,
        selectedOption,
      });

      if (res.data == output) {
        //console.log(res);
        alert("Test cases passed");
      } else {
        //console.log(res);
        alert("Test cases failed");
      }
    } catch (error) {
      console.log(error);
    }
  }

  const handleSelectChange = (event) => {
    setSelectedOption(event.target.value);
  };

  return (
    <>
      <Navbar />
      <div>
        <div className="flex h-11 w-full items-center pt-2 overflow-x-hidden">
          <div
            className={
              "bg-dark-layer-1 rounded-t-[5px] px-5 py-[10px] text-xs cursor-pointer"
            }
          >
            Description
          </div>
        </div>

        <div className="flex px-0 py-4 h-[calc(100vh-94px)] overflow-y-auto">
          <div className="px-5">
            <div className="w-full">
              <div className="flex space-x-4">
                <div className="flex-1 mr-2 text-lg font-medium">
                  Even Or Odd
                </div>
              </div>

              <div className="text-sm">
                <p>
                  You are given a number to check whether the number is Even or
                  Odd
                </p>

                <b>
                  Input : 7
                  <br />
                  Output : odd
                </b>
              </div>

              <div className="mt-4">
                Example 1: Input: 7, Output: odd
                <br />
                Explanation: 7 is an odd number and is not divisible by 2
                <br />
                Example 2: Input: 100, Output: even
                <br />
                Explanation: 100 is an even number and is divisible by 2
                <br />
              </div>

              <button
                onClick={execute}
                className="bg-blue-500 text-white px-4 py-2 rounded-md hover:bg-blue-600 mt-4 mr-4"
              >
                Submit
              </button>
              <select value={selectedOption} onChange={handleSelectChange}>
                <option value="cpp">C++</option>
                <option value="python">Python</option>
                <option value="c">C</option>
              </select>
            </div>
          </div>

          <Editor onCodeChange={setCode} />
        </div>
      </div>
    </>
  );
};
