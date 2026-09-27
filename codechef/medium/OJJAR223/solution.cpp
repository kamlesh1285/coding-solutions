// TODO: Implement this component
// Requirements:
// 1. Should display the value (prop) inside the button
// 2. Should call onClick prop when clicked
// 3. Should have appropriate styling (use className "square")
function Square({ value, onClick }) {
  return (
    <button className="square" onClick ={onClick}>
      {value}

    </button>
  ); // User will implement this
}

export default Square;