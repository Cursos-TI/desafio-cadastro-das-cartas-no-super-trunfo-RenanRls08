def coletar_dados():
    estado = input("Estado: ")
    codigo = input("Código: ")
    nome_cidade = input("Nome da Cidade: ")
    populacao = int(input("População: "))
    area = float(input("Área (km²): "))
    pib = float(input("PIB (bilhões de reais): "))
    pontos_turisticos = int(input("Número de Pontos Turísticos: "))
    
    return estado, codigo, nome_cidade, populacao, area, pib, pontos_turisticos


def calcular_densidade_populacional(populacao, area):
    return populacao / area


def calcular_pib_per_capita(pib, populacao):
    return (pib * 1_000_000_000) / populacao  # Convertendo PIB de bilhões para reais


def exibir_resultados(estado, codigo, nome_cidade, populacao, area, pib, pontos_turisticos, densidade, pib_per_capita):
    print("\nCarta:")
    print(f"Estado: {estado}")
    print(f"Código: {codigo}")
    print(f"Nome da Cidade: {nome_cidade}")
    print(f"População: {populacao}")
    print(f"Área: {area:.2f} km²")
    print(f"PIB: {pib:.2f} bilhões de reais")
    print(f"Número de Pontos Turísticos: {pontos_turisticos}")
    print(f"Densidade Populacional: {densidade:.2f} hab/km²")
    print(f"PIB per Capita: {pib_per_capita:.2f} reais")


def main():
    estado, codigo, nome_cidade, populacao, area, pib, pontos_turisticos = coletar_dados()
    densidade = calcular_densidade_populacional(populacao, area)
    pib_per_capita = calcular_pib_per_capita(pib, populacao)
    exibir_resultados(estado, codigo, nome_cidade, populacao, area, pib, pontos_turisticos, densidade, pib_per_capita)


if __name__ == "__main__":
    main()
