import React from "react";
import Navbar from "./Navbar";
const HomePage = () => {
  return (
    <>
      <Navbar></Navbar>
      <div className="min-h-screen flex flex-col text-white codestalker-main">
        <main className="container mx-auto px-6 pt-16 flex-1 text-center">
          <h2 className="text-2xl md:text-4xl lg:text-6xl uppercase">
            Welcome to
          </h2>
          <h1 className="text-3xl md:text-6xl lg:text-8xl uppercase font-black mb-8">
            The CODE-STALKER
          </h1>

          <p className="text-base md:text-lg lg:text-2xl mb-8">
            "A place where developers can code in serenity, free from project
            management distractions."
          </p>

          <div className="text-lg md:text-2xl lg:text-3xl py-2 px-4 md:py-4 md:px-10 lg:py-6 lg:px-12 bg-white bg-opacity-10 w-fit mx-auto mb-8 rounded-full">
            300+ members
          </div>

          <form action="" target="_blank">
            <div className="flex flex-col md:flex-row justify-center mb-4">
              <input
                type="submit"
                value="Join Today"
                name="member[subscribe]"
                id="member_submit"
                className="bg-primary md:rounded-tl-none md:rounded-bl-none rounded-full text-2xl py-4 px-6 md:px-10 lg:py-6 lg:px-12 font-bold uppercase cursor-pointer hover:opacity-75 duration-150"
              />
            </div>

            <div className="opacity-75 italic">
              By Joining, you agree to{" "}
              <a
                target="_blank"
                href="#"
                className="hover:opacity-80 duration-150"
              >
                Ditch CantiLever Labs
              </a>{" "}
              and{" "}
              <a
                target="_blank"
                href="#"
                className="hover:opacity-80 duration-150"
              >
                Join us
              </a>
              .
            </div>
          </form>
        </main>
      </div>
    </>
  );
};

export default HomePage;
