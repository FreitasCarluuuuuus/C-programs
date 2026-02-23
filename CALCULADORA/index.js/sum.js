function soma(numbers) {
    return numbers.reduce((total, number) => {
        return total + number;
    }, 0);
}
