import React from "react";
import Navbar from "./Navbar";
import { useNavigate } from "react-router-dom";

const Problems = () => {
  const navigate = useNavigate();
  return (
    <>
      <Navbar />
      <table class="text-sm text-center mt-5 text-gray-500 dark:text-gray-400 w-full max-w-screen-lg mx-auto">
        <thead class="text-xs text-gray-700 uppercase dark:text-gray-400 border-b">
          <tr>
            <th scope="col" class="px-6 py-3 w-0 font-medium">
              Title
            </th>
            <th scope="col" class="px-6 py-3 w-0 font-medium">
              Difficulty
            </th>
            <th scope="col" class="px-6 py-3 w-0 font-medium">
              Category
            </th>
          </tr>
        </thead>
        <tbody>
          <tr className="hover:bg-slate-200 transition duration-300 cursor-pointer">
            <th scope="col" class="px-6 py-3 w-0 font-medium0">
              Check Number Is Prime Or Not
            </th>
            <th scope="col" class="px-6 py-3 w-0 font-medium">
              Easy
            </th>
            <th scope="col" class="px-6 py-3 w-0 font-medium">
              Maths
            </th>
          </tr>
          <tr
            className="hover:bg-slate-200 transition duration-300 cursor-pointer"
            onClick={() => navigate("/problem/evenorodd")}
          >
            <th scope="col" class="px-6 py-3 w-0 font-medium0">
              Check Number Is Odd Or Even
            </th>
            <th scope="col" class="px-6 py-3 w-0 font-medium">
              Easy
            </th>
            <th scope="col" class="px-6 py-3 w-0 font-medium">
              Maths
            </th>
          </tr>
        </tbody>
      </table>
    </>
  );
};

export default Problems;
