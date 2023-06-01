//modules
import { Peer } from 'peerjs';
import { customAlphabet } from 'nanoid'
import { nolookalikes } from 'nanoid-dictionary';
import { metadata } from '../../../../lib/metadata'
function generateID (): string {
    const nanoid = customAlphabet(nolookalikes, 6);
    let id: string = nanoid();
    return "p-" + id;
}

export function createPeer (openCallback: Function, connectCallback: Function) {
    //let peer = new Peer({ host, port, path });
    //use peer server for prototyping
    let peer = new Peer(generateID());
    //let peer = new Peer();
    peer.on('open', function (id) {
        openCallback(id);
    });
    peer.on('connection', function (conn) {
        // let webMajorVersion = parseInt(metadata.version.split(".")[0])
        // let webMinorVersion = parseInt(metadata.version.split(".")[1])

        //let recieveMetadata = conn.metadata as { name: string, version: string }
        // let recieveMajorVersion = parseInt(recieveMetadata.version.split(".")[0])
        // let recieveMinorVersion = parseInt(recieveMetadata.version.split(".")[1])

        // if (recieveMetadata.name !== metadata.name) {
        //     //conn.send({ connection: false, message: "Who are you? Why are you connecting to MPMOCAP?" });
        //     connectCallback(null)
        //     setTimeout(() => { conn.close() }, 3000);
        //     return;
        // } else if (webMajorVersion !== recieveMajorVersion || webMinorVersion !== recieveMinorVersion) {
        //     //conn.send({ connection: false, message: `The website is running on version ${metadata.version}, but you are running version ${recieveMetadata.version}. Please update your software at https://github.com/need4steve/mpmocap` });
        //     connectCallback(null)
        //     setTimeout(() => { conn.close() }, 3000);
        //     return;
        // }
        connectCallback(conn)
    });
}