import React, { useEffect, useState } from "react";
import MonacoEditor from "react-monaco-editor";

let sample = `

welcome to codestalker
write your code here


`;

function App({ onCodeChange }) {
  // const handleCodeChange = (event) => {
  //   onCodeChange(event.target.value);
  // };

  const [code, setCode] = useState(sample);

  const handleChange = (newContent) => {
    // When the editor content changes, call onEditorChange
    onCodeChange(newContent);
    setCode(newContent);
  };
  return (
    <>
      <MonacoEditor
        width="99%"
        height="74vh"
        language="javascript"
        theme="vs-dark"
        value={code}
        onChange={handleChange}
        // onChange={console.log}
      />
    </>
  );
}

export default App;
