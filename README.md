# Golf Predictor

Welcome to the Golf Hole-in-One Predictor

## Description

The Golf Hole-in-One Predictor is a program designed to calculate the likelihood of achieving a hole-in-one based on various golfing and environmental factors. It combines input data such as swing speed, attack angle, wind conditions, distance to the hole, and course conditions to compute a probability using statistical modeling and mathematical formulas.

![Golf Predictor Interface](assets/GolfPredictor_Pic.png)

## Features

- Golf Hole-in-One prediction
- Swing Speed: Measures the speed of the clubhead at the moment of impact.
- Distance to the Hole: Considers how far the ball needs to travel to reach the hole.

- Probability Calculation:

Uses normalized values and statistical weightage to compute a percentage likelihood of a hole-in-one.
Adjusts predictions dynamically based on optimal ranges for each input.

- Real-Time Feedback:

Outputs the calculated probability in a user-friendly format, offering insights into how close conditions are to a perfect shot.

## Installation

```bash
git clone https://github.com/devdugz/GolfPredictor.git
cd GolfPredictor
```

## Usage

Web Interface
Visit: https://YOUR_USERNAME.github.io/GolfPredictor

Command Line

```bash
./main.out
```

Enter requested values:

- Club head speed (mph)
- Distance to hole (yards)

## Development

Project Structure

```
GolfPredictor/
├── predictor.h # Core logic header
├── predictor.cpp # Implementation
├── main.cpp # CLI interface
├── test_main.cpp # Unit tests
└── index.html # Web interface
```

## Running Tests

```bash
g++ -std=c++14 -DTESTING test_main.cpp predictor.cpp -o test.out -lgtest -lgtest_main -pthread && ./test.out
```

## Contributing

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

MIT License
