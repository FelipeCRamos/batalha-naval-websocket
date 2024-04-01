# Instruções

+ Para compilar, basta usar o comando `make` (C++11)
+ Para rodar o programa:

```
./bn [-s|-c] [-a] [--server-ip IP]

Onde:
    -s : Entra no modo servidor
    -c : Entra no modo cliente
    -a : Entra no modo de jogadas automáticas
    --server-ip : Especifica um IP de um servidor especifico se estiver no modo cliente
```

+ Para jogar, basta especificar o código da jogada, ex:
```
# Onde o `A` é a linha e o `3` é a coluna.
A3
```

### Informações extras
+ Para atingir a coluna `10`, basta usar o `0`. (Exemplo: `A10` ==> `A0`) 
+ Se você tiver acertado a jogada, aparecerá um `+` no campo do inimigo na sua tela.
+ Se você tiver errado a jogada, aparecerá um `x` no campo do inimigo na sua tela.
+ Com o _"Previous response: i0x"_ você pode ter uma noção se o navio do inimigo afundou (se o ultimo dígito for `p`)
