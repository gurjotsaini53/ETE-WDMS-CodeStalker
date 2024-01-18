import React, { useEffect, useState } from "react";
import img from "/codeStalker.svg";
import { Link, useNavigate } from "react-router-dom";
const Navbar = () => {
  let navigate;
  const [username, setUsername] = useState("");
  const [isLoggedIn, setIsLoggedIn] = useState(false);

  useEffect(() => {
    function checkForUsername() {
      const uname = localStorage.getItem("uname");
      if (uname) {
        setUsername(uname);
        setIsLoggedIn(true);
      } else {
        setUsername("");
        setIsLoggedIn(false);
      }
    }
    checkForUsername();
  }, [username]);

  navigate = useNavigate(); // Create a navigate function

  // Define a function to handle the click event and navigate to /signin
  const loginPageRedirect = () => {
    console.log("btn clicked");
    navigate("/signin");
  };

  const handleLogout = () => {
    localStorage.removeItem("uname");
    navigate("/signin");
  };
  return (
    <nav className="bg-black border-gray-200 dark:bg-gray-900">
      <div className="max-w-screen-xl flex flex-wrap items-center justify-between mx-auto p-4">
        <a href="/" className="flex items-center space-x-3 rtl:space-x-reverse">
          <img src={img} className="h-8" alt="Flowbite Logo" />
        </a>
        <div className="flex md:order-2 space-x-3 md:space-x-0 rtl:space-x-reverse">
          <p className="text-white flex items-center justify-center mr-2 font-bold text-2xl">
            {username}
          </p>
          <button
            onClick={isLoggedIn ? handleLogout : loginPageRedirect}
            type="button"
            className="text-white bg-blue-700 hover:bg-blue-800 focus:ring-4  font-medium rounded-lg text-sm px-4 py-2 text-center dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800"
          >
            {isLoggedIn ? "Logout" : "Login / Register"}
          </button>
        </div>
        <div
          className="items-center justify-between hidden w-full md:flex md:w-auto md:order-1"
          id="navbar-cta"
        >
          <ul className="flex flex-col font-medium p-4 md:p-0 mt-4 border rounded-lg 0 md:space-x-8 rtl:space-x-reverse md:flex-row md:mt-0 md:border-0  dark:bg-gray-800 md:dark:bg-gray-900 dark:border-gray-700">
            <li>
              <Link
                to="/"
                className="block py-2 px-3 md:p-0 text-white rounded"
                aria-current="page"
              >
                Home
              </Link>
            </li>
            <li>
              <a
                href="/problems"
                className="block py-2 px-3 md:p-0 text-white rounded"
              >
                Problems
              </a>
            </li>
            <li>
              <Link
                to="/ide"
                className="block py-2 px-3 md:p-0 text-white rounded"
              >
                IDE
              </Link>
            </li>
            <li>
              <Link
                to="/aboutus"
                className="block py-2 px-3 md:p-0 text-white rounded"
              >
                About
              </Link>
            </li>
          </ul>
        </div>
      </div>
    </nav>
  );
};

export default Navbar;
