# Criação de scripts DDL
Vence 16 de maio de 2022 23:59 </br>
Este trabalho será a primeira parte da nota N2.

## Instruções:
- Você está recebendo uma lista de campos que devem fazer parte de um banco de dados sobre voos partindo e chegando em aeroportos do Brasil;

- A saída será sempre obrigatoriamente um aeroporto brasileiro, mas a chegada pode ser em qualquer aeroporto do mundo.

- Você deverá separar os campos abaixo em tabelas, separando os dados por tipo de informação.

- Você deverá propor tipos de dados compatíveis com as informações gravadas em cada um dos campos.

- Você deverá criar chaves primárias, chave estrangeiras, e outros tipos de restrições (constraints) que julgar necessárias.

- Você poderá renomear os nomes dos campos, desde que seja possível identificar o campo pelo seu nome (Ex: NUMERO_VOO pode ser renomeado para NUM_VOO).

- A entrega será os scripts DDL para a criação do banco de dados.


Lista de campos:

- [ ] NÚMERO_VOO ( -> IDENTIFICA O VOO EM SI)
- [ ] CÓDIGO_TIPO_DE_LINHA ( -> IDENTIFICA SE O VOO É DE PASSAGEIROS, CARGA, MISTO, FRETADO...)
- [ ] ICAO_AERÓDROMO_ORIGEM ( -> CÓDIGO INTERNACIONAL DO AERÓDROMO (AERÓDROMO = AEROPORTO  (EX: CWB = CURITIBA, BSB = BRASILIA...)))
- [ ] ICAO_AERÓDROMO_DESTINO
- [ ] NOME_AERODROMO_ORIGEM
- [ ] NOME_AERODROMO_DESTINO
- [ ] ICAO_EMPRESA_AÉREA ( -> CÓDIGO INTERNACIONAL DA EMPRESA (EX: DLH = LUFTHANSA ...))
- [ ] SITUAÇÃO_VOO ( -> REALIZADO, CANCELADO, ADIADO...)
- [ ] PARTIDA_PREVISTA ( -> DATA E HORA PREVISTA DE SAÍDA)
- [ ] PARTIDA_REAL
- [ ] CHEGADA_PREVISTA
- [ ] CHEGADA_REAL
- [ ] DIA_DA_SEMANA
- [ ] DURAÇÃO_VOO
- [ ] CONTINENTE_ORIGEM
- [ ] CONTINENTE_CHEGADA
- [ ] ISO_COUNTRY_ORIGEM
- [ ] ISO_COUNTRY_CHEGADA
- [ ] ISO_REGION_ORIGEM
- [ ] ISO_REGION_CHEGADA
- [ ] MUNICIPALITY_ORIGEM
- [ ] MUNICIPALITY_CHEGADA
- [ ] GPS_CODE_ORIGEM
- [ ] GPS_CODE_CHEGADA
- [ ] IATA_CODE_ORIGEM
- [ ] IATA_CODE_CHEGADA
- [ ] LATITUDE_ORIGEM
- [ ] LONGIUDE_ORIGEM
- [ ] LATITUDE_CHEGADA
- [ ] LONGITUDE_CHEGADA
- [ ] ALTITUDE_AERODROMO_ORIGEM
- [ ] ALTITUDE_AERODROMO_CHEGADA
