import softImg from "../img/softImg.png";
import SignIn from "./SignIn";
import SignUp from "./SignUp";
export default function Banner() {
  return (
    <>
      <div className="banner">
        <div className="banner-right">
          <SignUp />
        </div>
      </div>
    </>
  );
}
