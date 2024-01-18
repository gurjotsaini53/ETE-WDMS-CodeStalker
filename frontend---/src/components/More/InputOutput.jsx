import React from "react";

const InputOutput = ({ input, output, onInputChange, onOutputChange }) => {
  const handleInputChange = (event) => {
    onInputChange(event.target.value);
  };

  const handleOutputChange = (event) => {
    onOutputChange(event.target.value);
  };

  return (
    <>
      <div className="custom-input-box" id="input">
        <h1 className="custom-title">Input</h1>
        <textarea
          name="input"
          id="input-textarea"
          className="custom-textarea"
          placeholder="Enter your input here..."
          value={input}
          onChange={handleInputChange}
        ></textarea>
      </div>
      <div className="custom-output-box" id="output">
        <h1 className="custom-title">Output</h1>
        <textarea
          name="output"
          id="output-textarea"
          className="custom-textarea"
          value={output}
          readOnly // Make the output textarea read-only
          onChange={handleOutputChange}
        ></textarea>
      </div>
    </>
  );
};

export default InputOutput;
