function multilication(numbers) {
    return numbers.reduce((total, number) => {
        return total * number;
    }, 1);
}