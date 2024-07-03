# Instalar dependencias

```
npm install
```

# Executar projeto

```
./nao.bat {nomeDoArquivoASerCompilado} {executarOCodigo true||false}
```

**Exemplo**
Executa a analise e tradução no arquivo test.nao, compila com o GCC e executa o código compilado
```
./nao.bat test.nao true
```

Executa a analise e tradução no arquivo test.nao, MAS NÃO compila com o GCC e NÃO executa o código compilado
```
./nao.bat test.nao false
```
