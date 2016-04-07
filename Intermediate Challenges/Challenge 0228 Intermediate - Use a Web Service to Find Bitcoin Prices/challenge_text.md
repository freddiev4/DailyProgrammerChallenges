# Desciption

Modern web services are the core of the net. One website can leverage 1 or more other sites for rich data and mashups. Some notable examples include the Google maps API which has been layered with crime data, bus schedule apps, and more. 

Today's a bit of a departure from the typical challenge, there's no puzzle to solve but there is code to write. For this challenge, you'll be asked to implement a call to a simple RESTful web API for Bitcoin pricing. This API was chosen because it's freely available and doesn't require any signup or an API key. Furthermore, it's a simple GET request to get the data you need. Other APIs work in much the same way but often require API keys for use. 

The Bitcoin API we're using is documented here: http://bitcoincharts.com/about/markets-api/ Specifically we're interested in the `/v1/trades.csv` endpoint. 

Your native code API (e.g. the code you write and run locally) should take the following parameters:

- The short name of the bitcoin market. Legitimate values are (choose one):

    bitfinex
    bitstamp
    btce
    itbit
    anxhk
    hitbtc
    kraken
    bitkonan
    bitbay
    rock
    cbx
    cotr
    vcx

- The short name of the currency you wish to see the price for Bitcoin in. Legitimate values are (choose one):

    KRW
    NMC
    IDR
    RON
    ARS
    AUD
    BGN
    BRL
    BTC
    CAD
    CHF
    CLP
    CNY
    CZK
    DKK
    EUR
    GAU
    GBP
    HKD
    HUF
    ILS
    INR
    JPY
    LTC
    MXN
    NOK
    NZD
    PEN
    PLN
    RUB
    SAR
    SEK
    SGD
    SLL
    THB
    UAH
    USD
    XRP
    ZAR

The API call you make to the bitcoincharts.com site will yield a plain text response of the most recent trades, formatted as CSV with the following fields: UNIX timestamp, price in that currency, and amount of the trade. For example:

    1438015468,349.250000000000,0.001356620000

Your API should return the current value of Bitcoin according to that exchange in that currency. For example, your API might look like this (in F# notation to show types and args):

    val getCurrentBitcoinPrice : exchange:string -> currency:string -> float

Which basically says take two string args to describe the exchange by name and the currency I want the price in and return the latest price as a floating point value. In the above example my code would return `349.25`. 

Part of today's challenge is in understanding the API documentation, such as the format of the URL and what endpoint to contact. 

# Note

Many thanks to /u/adrian17 for finding this API for this challenge - it doesn't require any signup to use. 