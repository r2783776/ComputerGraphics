var canvas;
var ctx;

function setCanvas(canvas) {
	this.canvas = canvas;
	ctx = canvas.getContext("2d");
}

/* Drawing on a canvas */
function setColor(color = "black") {
	ctx.strokeStyle = color;
}

function setThickness(thickness = 1) {
	ctx.lineWidth = thickness;
}

function line(X1, Y1, X2, Y2) {
	ctx.beginPath();
	ctx.moveTo(X1, Y1);
	ctx.lineTo(X2, Y2);
	ctx.stroke();
	ctx.closePath();
}

var Xmax, Ymax; // Size of the grid in screen pixels
var Xcenter, Ycenter; // Center of the grid in screen pixels
var gridStep;

/* Drawing the grid */
function setGrid(Xmax, Ymax, xmax) {
	this.Xmax = Xmax;
	this.Ymax = Ymax;
	this.xmax = xmax;

	Xcenter = Xmax / 2;
	Ycenter = Ymax / 2;
	gridStep = (Xmax - Xcenter) / xmax;
}

function drawGridLines() {	setThickness();
	setThickness(0.5);
	setColor("grey")
	for (let X = gridStep / 10; X < Xmax; X += gridStep / 10) {
		line(X, 0, X, Ymax);
	}
	for (let Y = gridStep / 10; Y < Ymax; Y += gridStep / 10) {
		line(0, Y, Xmax, Y);
	}

	setThickness();
	setColor();
  	for (let X = gridStep; X < Xmax; X += gridStep) {
		line(X, 0, X, Ymax);
	}
	for (let Y = gridStep; Y < Ymax; Y += gridStep) {
		line(0, Y, Xmax, Y);
	}
}

function drawCoordinateAxises() {
	setColor();
	setThickness(2);
	line(0, Ycenter, Xmax, Ycenter);
	line(Xcenter, 0, Xcenter, Ymax);
}

function drawCoordinates() {
	setThickness();
	let fontSize = gridStep / 10;
	ctx.font = fontSize + "px Courier New";
	ctx.textAlign = "right";

	var x = -xmax + 1;
	for (let X = gridStep; X < Xmax - gridStep; X += gridStep) {
		ctx.strokeText(x, X - fontSize / 2, Ycenter + fontSize);
		x++;
	}

	var y = (Ymax - Ycenter) / gridStep - 1;
	for (let Y = gridStep; Y < Ymax - gridStep; Y += gridStep) {
		if (y != 0) ctx.strokeText(y, Xcenter - fontSize / 2, Y - fontSize / 2);
    	y--;
	}

	ctx.textAlign = "center";
}

function drawGrid() {
  drawGridLines();
  drawCoordinateAxises();
  drawCoordinates();
  setColor();
  setThickness();
}

/* Drawing on the grid */

function X(x) {
	return Xcenter + x * gridStep;
}

function Y(y) {
	return Ycenter - y * gridStep;
}

function gridLine(x1, y1, x2, y2) {
	line(X(x1), Y(y1), X(x2), Y(y2));
	ctx.closePath();
}

function gridRect(x1, y1, x2, y2) {
	gridLine(x1, y1, x2, y1);
	gridLine(x1, y1, x1, y2);
	gridLine(x2, y1, x2, y2);
	gridLine(x1, y2, x2, y2);
}

function gridArc(x, y, r, sAngle, eAngle) {
	ctx.beginPath();
	ctx.arc(X(x), Y(y), r * gridStep, sAngle, eAngle);
	ctx.stroke();
	ctx.closePath();
}

function gridQBezierCurve(x1, y1, x2, y2, cpx, cpy) {
	ctx.beginPath();
	ctx.moveTo(X(x1), Y(y1));
	ctx.quadraticCurveTo(X(cpx), Y(cpy), X(x2), Y(y2));
	ctx.stroke();
	ctx.closePath();
}

function gridCBezierCurve(x1, y1, x2, y2, cpx1, cpy1, cpx2, cpy2) {
	ctx.beginPath();
	ctx.moveTo(X(x1), Y(y1));
	ctx.CurveTo(X(cpx1), Y(cpy1), X(cpx2), Y(cpy2), X(x2), Y(y2));
	ctx.stroke();
	ctx.closePath();
}

function gridText(text, x, y) {
  ctx.strokeText(text, X(x), Y(y));
}
