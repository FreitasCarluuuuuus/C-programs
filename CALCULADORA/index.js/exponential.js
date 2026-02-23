function power(numbers) {
    return numbers.reduce((total, number) => {
        return total ** number;
    }, 1);
}