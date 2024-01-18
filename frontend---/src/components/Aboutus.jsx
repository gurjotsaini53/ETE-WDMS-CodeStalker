import React from 'react'
import Navbar from './Navbar'
import { Link } from 'react-router-dom'

const Aboutus = () => {
  return (
    <>
      <Navbar />

      <div className="min-h-screen flex flex-col text-white codestalker-main">
        <main className="container mx-auto px-6 pt-16 flex-1 text-center">
          <h2 className="text-3xl md:text-5xl lg:text-7xl uppercase font-black mb-4">
            About Code-Stalker
          </h2>

          <p className="text-base md:text-lg lg:text-xl max-w-2xl mx-auto mb-8">
            Code-Stalker is a developer-friendly space where you can code in
            peace. We prioritize your Developer Experience, offering a
            distraction-free environment for coding practice and skill
            development.
          </p>

          <p className="text-base md:text-lg lg:text-xl max-w-2xl mx-auto mb-8">
          At Code-Stalker, our mission is to provide a seamless and enjoyable
            coding experience. With features like our enhanced code compiler and
            a growing community of over 300 members, we aim to create a
            supportive space for developers of all levels.
          </p>

          <p className="text-base md:text-lg lg:text-xl max-w-2xl mx-auto mb-8">
          Join us in this coding journey where innovation meets collaboration,
            and coding becomes a joyous exploration. Ditch CantiLever Labs and
            be a part of a community that values your Developer Experience.
          </p>
        </main>

        {/* Join Now Button */}
        <div className="fixed bottom-4 left-4">
          <Link
            to="/signup"
            className="bg-primary rounded-full text-white py-2 px-4 font-bold uppercase cursor-pointer hover:opacity-75 duration-150"
          >
            Join Now
          </Link>
        </div>
      </div>
    </>
  )
}

export default Aboutus
