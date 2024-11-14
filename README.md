# Relazione Del Progetto

## Introduzione

Questo progetto si concentra sullo sviluppo di un firmware per un microcontrollore Arduino, finalizzato al monitoraggio in tempo reale dei parametri della batteria dell'auto del team di racing. L'obiettivo principale è rilevare anomalie come sovratensioni e cali di tensione, che potrebbero indicare problemi nella batteria o nell'impianto elettrico del veicolo. Tale sistema si propone di contribuire alla sicurezza e all'efficienza della batteria, prevenendo danni al veicolo e garantendo una maggiore affidabilità.

## Obiettivo Del Progetto

- **Monitoraggio continuo della tensione** della batteria per rilevare variazioni significative nei livelli di tensione.

- **Individuazione immediata di anomalie**, come sovratensioni o cali improvvisi, che potrebbero indicare problemi elettrici.

- **Segnalazione rapida** all’utente tramite monitor seriale o una segnalazione acustica, in modo che possano essere intraprese le azioni necessarie.

## Elenco Delle Componenti Utilizate

- **Arduino Uno**: microcontrollore programmabile che esegue il firmware sviluppato.

- **Software per il monitoraggio**: il firmware, scritto in linguaggio C, consente ad Arduino di elaborare e interpretare i dati provenienti dal sensore.

- **Potenziometro da 5 Khom**: questo dispositivo è un resistore variabile controllato da una manopola. Che ho utilizato per simulare una variazione di tensione

- **Slideswitch**: interruttore di commutazione con due posizioni, utilizato per simulare l'assenza della batteria

- **Piezo**: emettitore di segnali acustici, che ho utilizato per la segnalazione di eventuali anomalie 

## Descrizione Del Funzionamento

Il firmware sviluppato è progettato per eseguire un’analisi continua della tensione della batteria. La tensione viene rilevata grazie al pin nalogico 0 dell'Arduino, che rileva costantemente il valore della tensione della batteria. Arduino elabora questi dati e li confronta con dei valori soglia predefiniti.



Nel dettaglio:

- **Lettura della Tensione**: il sensore misura la tensione e trasmette i valori analogici ad Arduino, che li converte in dati digitali.

- **Elaborazione dei Dati**: il firmware controlla se la tensione è al di fuori del range di sicurezza; in caso di sovratensione o sottotensione, viene attivato un allarme.

- **Segnalazione**: in caso di rilevamento di anomalie, il sistema può attivare un segnale acustico per avvisare l’utente. Inoltre, tutti i valori di tensione verranno mostrati sul monitor seriale.



## Conclusioni

Il progetto ha permesso di realizzare un sistema efficiente per il monitoraggio della batteria, fornendo un feedback in tempo reale sui livelli di tensione e garantendo una diagnosi rapida delle anomalie. Tale sistema può essere utilizzato come base per ulteriori implementazioni, come il monitoraggio della corrente o l'integrazione con sistemi di allarme per aumentare la sicurezza dei veicoli.
