#ifndef BLECONSTANTS_H
#define BLECONSTANTS_H

#include <QMap>
#include <QString>

class BLEConstants
{
public:
    // MAX concurrent connections overall
    static const int MAX_CONCURRENT_CONNECTION_COUNT = 6;
    static const int RECONNECT_DELAY_MS = 500;
    static const int BLE_DISCOVERY_SCAN_MIN_PERIOD_MS = 2000;
    static const int BLE_DISCOVERY_NOSCAN_MIN_PERIOD_MS = 3000;
    // how many concurrently directly tracked tags - keep one connection for location proxy
    static const int LOCATION_DATA_OBSERVER_MAX_TRACKED_TAGS_COUNT = MAX_CONCURRENT_CONNECTION_COUNT - 2;
    // timeouts
    static const int CONNECT_TIMEOUT = 6000;
    static const int SECOND_SERVICE_DISCOVERY_TIMEOUT = 10000;
    static const int FIRST_SERVICE_DISCOVERY_TIMEOUT = 3000;
    static const long READ_CHARACTERISTIC_TIMEOUT = 5000;
    static const long CHANGE_MTU_TIMEOUT = 10000;
    // delays
    static const int RECONNECT_DELAY_ON_SUDDEN_DISCONNECT = 2500;
    static const int RECONNECT_DELAY_ON_TIMEOUT = 3000;
    static const int RECONNECT_DELAY_ON_OPERATION_ERROR = 2000;
    static const int RECONNECT_DELAY_ON_OTHER_ERROR = 5000;

    // see https://punchthrough.com/blog/posts/maximizing-ble-throughput-part-2-use-larger-att-mtu
    static const int EXTRA_MTU = 4;                              // the MTU needs to always be enlarged with this value!
    //
    static const int MTU_ON_LOCATION_DATA_OBSERVE = 106;         // notifications must fit into a single MTU
    static const int MTU_ON_PROXY_POSITION_DATA_OBSERVE = 76;    // notifications must fit into a single MTU
    static const int FW_UPLOAD_CHUNK_SIZE = 32;                              // pure FW data chunk size
    static const int MTU_ON_FW_UPLOAD = FW_UPLOAD_CHUNK_SIZE + 5;           // chunk along with offset and message type must fit into a single MTU

    // firmware upload poll command codes
    static const int FW_POLL_COMMAND_UPLOAD_REFUSED = 0;
    static const int FW_POLL_COMMAND_BUFFER_REQUEST = 1;
    static const int FW_POLL_COMMAND_UPLOAD_COMPLETE = 2;
    static const int FW_POLL_COMMAND_SAVE_FAILED = 3;
    static const int FW_POLL_COMMAND_SAVE_FAILED_INVALID_CHECKSUM = 14;

    // descriptor
    static const QString DESCRIPTOR_CCC;

    // services
    static const QString SERVICE_QString_NETWORK_NODE;
    static const QString SERVICE_QString_STD_GAP;

    // characteristics
    static const QString CHARACTERISTIC_NETWORK_ID;

    static const QString CHARACTERISTIC_OPERATION_MODE;
    static const QString CHARACTERISTIC_LOCATION_DATA;
    static const QString CHARACTERISTIC_LOCATION_DATA_MODE;
    static const QString CHARACTERISTIC_PERSISTED_POSITION;
    static const QString CHARACTERISTIC_PASSWORD;
    static const QString CHARACTERISTIC_DEVICE_INFO;
    static const QString CHARACTERISTIC_STATISTICS;

    // anchor-specific characteristics
    static const QString CHARACTERISTIC_ANCHOR_CLUSTER_INFO;
    static const QString CHARACTERISTIC_ANCHOR_MAC_STATS;
    static const QString CHARACTERISTIC_ANCHOR_LIST;
    static const QString CHARACTERISTIC_PROXY_POSITIONS;

    // tag-specific characteristics
    static const QString CHARACTERISTIC_TAG_UPDATE_RATE;

    // firmware update
    static const QString CHARACTERISTIC_FW_UPDATE_PUSH;
    static const QString CHARACTERISTIC_FW_UPDATE_POLL;

    // explicit disconnect
    static const QString CHARACTERISTIC_DISCONNECT;

    // the shortened BLE QString mask is:
    // 0000XXXX-0000-1000-8000-00805f9b34fb
    static const QString CHARACTERISTIC_STD_LABEL;

    // keep here only gateway characteristics (keySet() is used to identify the set of GW chars)
    static const QMap<QString, QString> MAP_CHARACTERISTIC_TITLE;

    static const QMap<QString, QString> MAP_DESCRIPTOR_TITLE;
private:
    static const QString stdBleQString(QString doubleOctet) {
        if (doubleOctet.length() == 4)
            return QString("0000%1-0000-1000-8000-00805f9b34fb").arg(doubleOctet);
        return QString();
    }



};

#endif // BLECONSTANTS_H
