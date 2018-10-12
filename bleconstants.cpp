#include "bleconstants.h"

const  QString BLEConstants::DESCRIPTOR_CCC = QString("00002902-0000-1000-8000-00805f9b34fb");
// services
const QString BLEConstants::SERVICE_QString_NETWORK_NODE = QString("680c21d9-c946-4c1f-9c11-baa1c21329e7");
const QString BLEConstants::SERVICE_QString_STD_GAP = stdBleQString("1800");

// characteristics
const QString BLEConstants::CHARACTERISTIC_NETWORK_ID = QString("80f9d8bc-3bff-45bb-a181-2d6a37991208");

const QString BLEConstants::CHARACTERISTIC_OPERATION_MODE = QString("3f0afd88-7770-46b0-b5e7-9fc099598964");
const QString BLEConstants::CHARACTERISTIC_LOCATION_DATA = QString("003bbdf2-c634-4b3d-ab56-7ec889b89a37");
const QString BLEConstants::CHARACTERISTIC_LOCATION_DATA_MODE = QString("a02b947e-df97-4516-996a-1882521e0ead");
const QString BLEConstants::CHARACTERISTIC_PERSISTED_POSITION = QString("f0f26c9b-2c8c-49ac-ab60-fe03def1b40c");
const QString BLEConstants::CHARACTERISTIC_PASSWORD = QString("9d5ab03b-cbf8-4ae5-9f11-63e45f538ada");
const QString BLEConstants::CHARACTERISTIC_DEVICE_INFO = QString("1e63b1eb-d4ed-444e-af54-c1e965192501");
const QString BLEConstants::CHARACTERISTIC_STATISTICS = QString("0eb2bc59-baf1-4c1c-8535-8a0204c69de5");

// anchor-specific characteristics
const QString BLEConstants::CHARACTERISTIC_ANCHOR_CLUSTER_INFO = QString("17b1613e-98f2-4436-bcde-23af17a10c72");
const QString BLEConstants::CHARACTERISTIC_ANCHOR_MAC_STATS = QString("28d01d60-89de-4bfa-b6e9-651ba596232c");
const QString BLEConstants::CHARACTERISTIC_ANCHOR_LIST = QString("5b10c428-af2f-486f-aee1-9dbd79b6bccb");
const QString BLEConstants::CHARACTERISTIC_PROXY_POSITIONS = QString("f4a67d7d-379d-4183-9c03-4b6ea5103291");

// tag-specific characteristics
const QString BLEConstants::CHARACTERISTIC_TAG_UPDATE_RATE = QString("7bd47f30-5602-4389-b069-8305731308b6");

// firmware update
const QString BLEConstants::CHARACTERISTIC_FW_UPDATE_PUSH = QString("5955aa10-e085-4030-8aa6-bdfac89ac32b");
const QString BLEConstants::CHARACTERISTIC_FW_UPDATE_POLL = QString("9eed0e27-09c0-4d1c-bd92-7c441daba850");

// explicit disconnect
const QString BLEConstants::CHARACTERISTIC_DISCONNECT = QString("ed83b848-da03-4a0a-a2dc-8b401080e473");

// the shortened BLE QString mask is:
// 0000XXXX-0000-1000-8000-00805f9b34fb
const QString BLEConstants::CHARACTERISTIC_STD_LABEL = stdBleQString("2A00");

const QMap<QString, QString> BLEConstants::MAP_CHARACTERISTIC_TITLE = {
    {CHARACTERISTIC_NETWORK_ID, "Argo Network ID"},
    {CHARACTERISTIC_LOCATION_DATA, "Location data"},
    {CHARACTERISTIC_LOCATION_DATA_MODE, "Location data mode"},
    {CHARACTERISTIC_PERSISTED_POSITION, "Persisted position"},
    {CHARACTERISTIC_TAG_UPDATE_RATE, "Update rate"},
    {CHARACTERISTIC_STD_LABEL, "Label"},
    {CHARACTERISTIC_OPERATION_MODE, "Operation mode"},
    {CHARACTERISTIC_PASSWORD, "Password"},
    {CHARACTERISTIC_ANCHOR_CLUSTER_INFO, "Cluster info"},
    {CHARACTERISTIC_DEVICE_INFO, "Device info"},
    {CHARACTERISTIC_ANCHOR_MAC_STATS, "MAC status"},
    {CHARACTERISTIC_ANCHOR_LIST, "Anchor list"},
    {CHARACTERISTIC_STATISTICS, "Node statistics"},
    {CHARACTERISTIC_FW_UPDATE_PUSH, "FW update push"},
    {CHARACTERISTIC_FW_UPDATE_POLL, "FW update poll"},
    {CHARACTERISTIC_DISCONNECT, "Disconnect request"},
    {CHARACTERISTIC_PROXY_POSITIONS, "Proxy positions"}
};

const QMap<QString, QString> BLEConstants::MAP_DESCRIPTOR_TITLE = {
    {DESCRIPTOR_CCC, "CCC descriptor"}
};
