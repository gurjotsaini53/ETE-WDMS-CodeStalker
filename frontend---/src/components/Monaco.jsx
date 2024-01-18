import React, { useEffect, useRef, useState } from "react";
import * as monaco from "monaco-editor";
import Menu from "./Menu";

function MonacoEditorComponent({ language }) {
  const editorRef = useRef(null);
  const [editor, setEditor] = useState(null);

  useEffect(() => {
    if (editorRef.current) {
      const createdEditor = monaco.editor.create(editorRef.current, {
        value: `# Your ${language} code goes here`,
        language: language,
        theme: "vs-dark",
      });

      setEditor(createdEditor);

      return () => createdEditor.dispose();
    }
  }, [language]);

  return;
  <>
    <Menu />
    <div ref={editorRef} style={{ height: "500px" }} />;
  </>;
}

export default MonacoEditorComponent;
