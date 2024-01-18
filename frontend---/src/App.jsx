import { useState } from "react";

import "./App.css";
import { BrowserRouter, Routes, Route } from "react-router-dom";

import Home from "./components/Home";
import Signin from "./components/More/SignInHome";
import Signup from "./components/More/SignUpHome";
import Ide from "./components/Ide";
import Problems from "./components/Problems";
import Aboutus from "./components/Aboutus";
import { EvenOrOdd } from "./components/Problem/EvenOrOdd";
import MyCode from "./components/MyCode";
function App() {
  return (
    <>
      <BrowserRouter>
        <Routes>
          <Route path="/" element={<Home />}></Route>
          <Route path="/Signin" element={<Signin />}></Route>
          <Route path="/signup" element={<Signup />}></Route>
          <Route path="/ide" element={<Ide />}></Route>
          <Route path="/ide" element={<Ide />}></Route>
          <Route path="/aboutus" element={<Aboutus />}></Route>

          <Route path="/problems" element={<Problems />}></Route>
          <Route path="/problem/evenorodd" element={<EvenOrOdd />}></Route>
          <Route path="/mycodes" element={<MyCode />}></Route>
          {/* <Route path="/dashboard" element={<Dashboard />}></Route> */}
          {/* <Route path="/dashboard/discover" element={<Discover />}></Route> */}
          {/* <Route path="/dashboard/myProjects" element={<MyProjects />}></Route> */}
        </Routes>
      </BrowserRouter>
    </>
  );
}

export default App;
