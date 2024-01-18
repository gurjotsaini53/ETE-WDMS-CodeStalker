import React, { useEffect, useState } from "react";
import Navbar from "./Navbar";
import axios from "axios";

const MyCode = () => {
  const [codeArray, setCodeArray] = useState([]);
  let username = localStorage.getItem("uname");

  useEffect(() => {
    async function fetchSomeData() {
      try {
        const res = await axios.post("http://localhost:8080/mycodes", {
          username,
        });
        const arrays = res.data;
        console.log(arrays);
        setCodeArray(arrays);
      } catch (error) {
        console.error("Error fetching data:", error);
      }
    }

    fetchSomeData();
  }, []);

  return (
    <div>
      <Navbar />
      <h1 className="text-2xl mt-[50px] text-center text-emerald-300 font-bold">
        My Saved Codes
      </h1>
      <ul>
        {codeArray.map((code, index) => (
          <li key={index} className="w-screen-lg m-10">
            <textarea
              value={code}
              className="w-screen-lg mx-auto  bg-red-100"
              cols={190}
              rows={50}
            ></textarea>
          </li>
        ))}
      </ul>
    </div>
  );
};

export default MyCode;
