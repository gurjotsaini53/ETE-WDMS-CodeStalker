import React, { useState } from "react";
import Split from "react-split";

import Navbar from "./Navbar";
import Editor from "./Editor";
import InputOutput from "./More/InputOutput";
import axios from "axios";
import { useNavigate } from "react-router-dom";

function SplitScreenComponent() {
  const navigate = useNavigate();
  const gutter = (index, direction) => {
    const gutterElement = document.createElement("div");
    gutterElement.className = `split-gutter`;
    return gutterElement;
  };

  function redirectToMyCode() {
    navigate("/mycodes");
  }

  let sample = `
   welcome to codeStalker
   write your code here
  
  `;
  const [selectedOption, setSelectedOption] = useState("cpp");
  const [input, setInput] = useState("");
  const [output, setOutput] = useState("");
  let [code, setCode] = useState(sample);

  async function execute() {
    try {
      let res = await axios.post("http://localhost:8080/run", {
        code,
        input,
        selectedOption,
      });

      console.log("Response:", res.data);
      setOutput(res.data);
    } catch (error) {
      setOutput(error.response.data);
    }
  }
  const handleSelectChange = (event) => {
    setSelectedOption(event.target.value);
  };

  const handleInputChange = (newInput) => {
    setInput(newInput);
  };

  const handleOutputChange = (newOutput) => {
    setOutput(newOutput);
  };

  const handleCodeChange = (newCode) => {
    setCode(newCode);
  };

  async function saveCode() {
    let username = localStorage.getItem("uname");
    try {
      let res = await axios.post("http://localhost:8080/save", {
        username,
        code,
      });

      console.log("Response:", res.data);
      if (res.status == 200) {
        window.alert("CODE SAVED !");
      } else {
        window.alert("Error while saving the code");
      }
    } catch (error) {}
  }
  return (
    <>
      <Navbar />
      <div className="menu">
        <button
          onClick={execute}
          type="button"
          className="focus:outline-none text-white bg-green-700 hover:bg-green-800  font-medium text-sm px-5 py-2.5 me-2 mb-2 dark:bg-green-600 dark:hover:bg-green-700 dark:focus:ring-green-800"
        >
          Run
        </button>
        <select value={selectedOption} onChange={handleSelectChange}>
          <option value="cpp">C++</option>
          <option value="python">Python</option>
          <option value="c">C</option>
        </select>
        <button
          onClick={saveCode}
          type="button"
          className="focus:outline-none ml-5 text-white bg-blue-700 hover:bg-blue-800  font-medium text-sm px-5 py-2.5 me-2 mb-2 dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800"
        >
          save
        </button>
        <button
          onClick={redirectToMyCode}
          type="button"
          className="focus:outline-none ml-5 text-white bg-blue-700 hover:bg-blue-800  font-medium text-sm px-5 py-2.5 me-2 mb-2 dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800"
        >
          My Saved Codes
        </button>
      </div>

      <div>
        <Split
          className="split"
          sizes={[70, 30]}
          minSize={100}
          expandToMin={false}
          gutterSize={3}
          gutter={gutter}
        >
          <div className="editor">
            <Editor onCodeChange={handleCodeChange} />
          </div>
          <div className="inpout">
            <InputOutput
              input={input}
              output={output}
              onInputChange={handleInputChange}
              onOutputChange={handleOutputChange}
            />
          </div>
        </Split>
        {/* {code} , {input} , {output} ,{selectedOption} */}
      </div>
    </>
  );
}

export default SplitScreenComponent;
