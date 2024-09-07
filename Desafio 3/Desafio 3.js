const fs = require('fs');

fs.readFile('faturamento.json', 'utf8', (err, data) => {
    if (err) {
        console.error('Erro ao ler o arquivo:', err);
        return;
    }

    const faturamentoPorEstado = JSON.parse(data);

    const faturamentoTotal = Object.values(faturamentoPorEstado).reduce((acc, val) => acc + val, 0);

    function calcularPercentual(faturamento, total) {
        return (faturamento / total) * 100;
    }

    for (const estado in faturamentoPorEstado) {
        const percentual = calcularPercentual(faturamentoPorEstado[estado], faturamentoTotal).toFixed(2);
        console.log(`${estado}: ${percentual}%`);
    }
});
