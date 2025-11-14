import readline from "readline/promises";

const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

var userInput = await rl.question("Number: ");

if (userInput < 0)
	var variable = [2, 3, 5, 7, 11];
else
	var variable = {"name":"Josh", "age":12};

console.log(userInput);
console.log("\n");
console.log(variable);


rl.close();
