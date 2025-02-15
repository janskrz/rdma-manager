

#ifndef MESSAGEERRORS_H_
#define MESSAGEERRORS_H_

#include "../utils/Config.h"

namespace rdma {

enum MessageErrors
  : unsigned int {

  NO_ERROR = 0,
  INVALID_MESSAGE,  // make use of auto-increment

  MEMORY_NOT_AVAILABLE = 100,
  MEMORY_RELEASE_FAILED,

  DB_LOAD_DATA_FAILED = 200,
  DB_SN_NODE_NOT_AVAILABLE,

  SSB_INVALID_COMMAND = 300,

  DB_CREATE_TABLE_FAILED = 400,
  DB_RESTORE_SNAPSHOT_FAILED = 401,
  DB_TAKE_SNAPSHOT_FAILED = 402,
  DB_STORAGE_PARTITIONS_NOTEQUAL = 403,
  DB_CLASSIC_HASH_EXTRA_ATTR = 404
};

}

#endif /* MESSAGEERRORS_H_ */
