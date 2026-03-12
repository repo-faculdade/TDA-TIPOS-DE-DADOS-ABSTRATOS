# Notação Big O

## Tipos de Complexidade

### O(1) - Complexidade Constante
- Tempo de execução fixo, independente do tamanho da entrada
- **Melhor caso possível**

### O(log n) - Complexidade Logarítmica  
- Corta ao "meio" a verificação, ao invés da posição "0" e subsequentes
- Muito eficiente para grandes volumes de dados

### O(n) - Complexidade Linear
- Cresce de 1 em 1 proporcionalmente ao tamanho da entrada
- Cada elemento é processado uma vez

### O(n log n) - Complexidade Linearítmica
- Combina operações lineares com logarítmicas
- Comum em algoritmos de ordenação eficientes

### O(n²) - Complexidade Quadrática
- Cresce exponencialmente com o quadrado da entrada
- Geralmente envolve loops aninhados

### O(2^n) - Complexidade Exponencial
- Cresce muito rapidamente
- Evitar quando possível

### O(n!) - Complexidade Fatorial
- Crescimento extremamente rápido
- Apenas viável para entradas muito pequenas

## Hierarquia de Performance
**Da mais rápida à mais lenta (Excelente ao Desastre):**

```
O(1) > O(log n) > O(n) > O(n log n) > O(n²) > O(2^n) > O(n!)
```
