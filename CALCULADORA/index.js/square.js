function square(number) {
    return square.reduce((total, number) => {
        return total ** 1/number;
    }, 1);
}