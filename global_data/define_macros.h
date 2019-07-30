#ifndef DEFINE_MACROS_H_   /* Include guard */
#define DEFINE_MACROS_H_

/*
-----------------------------------------------------------------------------------------------------------
Using define statements instead of constants for increased efficiency
-----------------------------------------------------------------------------------------------------------
*/

// Blockchain
#define XCASH_WALLET_LENGTH 98 // The length of a XCA address
#define XCASH_PROOF_OF_STAKE_BLOCK_HEIGHT 0 // the start block height for X-CASH proof of stake
#define BLOCK_TIME 5 // the block time in minutes
#define BLOCKS_PER_DAY_FIVE_MINUTE_BLOCK_TIME 288 // The blocks per day with a 5 minute block time
#define NETWORK_VERSION "0d0d" // the network version
#define RESERVE_BYTE_START_STRING "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000" // The reserve bytes the block producer will create using the get block template
#define GET_BLOCK_TEMPLATE_RESERVED_BYTES "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000" // This is the place holder data for the block validation signatures. This has to be replaced with all of the block validation signatures when verifiyng the block, since the block validation signatures are added after the block validation nodes sign the place holder block validation node data.
#define BLOCKCHAIN_RESERVED_BYTES_START "7c424c4f434b434841494e5f52455345525645445f42595445535f53544152547c"
#define BLOCKCHAIN_RESERVED_BYTES_DATA_HASH "02800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000" // the reserve bytes data hash
#define BLOCKCHAIN_DATA_SEGMENT_STRING "7c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c"
#define BLOCKCHAIN_RESERVED_BYTES_END "7c424c4f434b434841494e5f52455345525645445f42595445535f454e447c"
#define BLOCKCHAIN_RESERVED_BYTES_START_DATA "424c4f434b434841494e5f52455345525645445f42595445535f5354415254"
#define BLOCKCHAIN_RESERVED_BYTES_END_DATA "424c4f434b434841494e5f52455345525645445f42595445535f454e44"
#define BLOCK_VALIDATION_NODE_SIGNED_BLOCK_LENGTH 186 // The length of the block validation signature
#define BLOCK_PRODUCER_NETWORK_BLOCK_NONCE "00000000" // the network block nonce used when the block producer creates the block
#define CONSENSUS_NODE_NETWORK_BLOCK_NONCE "11111111" // the network block nonce used when the consensus node creates the block
#define MAXIMUM_TRANSACATIONS_PER_BLOCK 1000000 // The maximum amount of transaction per block

// proof of stake
#define BLOCK_VERIFIERS_VALID_AMOUNT 4 // The amount of block verifiers that need to vote true for the part of the round to be valid.
#define BLOCK_VERIFIERS_AMOUNT 4 // The amount of block verifiers in a round

// Network
#define SEND_DATA_PORT 8000 // The port that is used by all nodes to send and receive data
#define TOTAL_CONNECTION_TIME_SETTINGS 1 // The total time a client is given to connect to the server and send data

// lengths
#define BUFFER_SIZE 164000
#define BUFFER_SIZE_RESERVE_PROOF 10000
#define BUFFER_SIZE_NETWORK_BLOCK_DATA 500
#define BUFFER_SIZE_NETWORK_BLOCK_TRANSACTIONS_DATA 100

#define RANDOM_STRING_LENGTH 100 // The length of the random string
#define DATA_HASH_LENGTH 128 // The length of the SHA2-512 hash
#define BLOCK_VERIFIERS_IP_ADDRESS_TOTAL_LENGTH 100 // The maximum length of the block verifiers IP address
#define BLOCK_VERIFIERS_NAME_TOTAL_LENGTH 100 // The maximum length of the block verifiers name

// VRF
#define VRF_PUBLIC_KEY_LENGTH 64
#define VRF_SECRET_KEY_LENGTH 128
#define VRF_PROOF_LENGTH 160
#define VRF_BETA_LENGTH 128
#define VRF_DATA_LENGTH 8 // true when the VRF data is verified

// Database
#define DATABASE_CONNECTION "mongodb://localhost:27017" // the database connection string
#define DATABASE_NAME "XCASH_PROOF_OF_STAKE" // The name of the database
#define DATABASE_ARRAY_COUNT 150 // The maximum amount of parsed item and value from the database
#define TOTAL_RESERVE_PROOFS_DATABASES 50 // The total reserve proofs databases

// network data nodes
#define NETWORK_DATA_NODES_AMOUNT 2 // The amount of network data nodes
#define NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "XCA1pEWxj2q7gn7TJjae7JfsDhtnhydxsHhtADhDm4LbdE11rHVZqbX5MPGZ9tM7jQbDF4VKK89jSAqgL9Nxxjdh8RM5JEpZZP" // the first network data nodes public address
#define NETWORK_DATA_NODE_1_IP_ADDRESS "10.10.10.1" // the first network data nodes IP address
#define NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "XCA1VSDHKCc4Qhvqb3fquebSYxfMeyGteQeAYtDSpaTcgquBY1bkKWtQ42tZG2w7Ak7GyqnaiTgWL4bMHE9Lwd2A3g2Recxz7B" // the second network data nodes public address
#define NETWORK_DATA_NODE_2_IP_ADDRESS "10.10.10.2" // the second network data nodes IP address

// Test
#define TEST_OUTLINE "-----------------------------------------------------------------------------------------------"
#define INVALID_PARAMETERS_ERROR_MESSAGE \
"\n\nParameters\n" \
"--test - Run the test to make sure the program is compatible with your system\n"
#endif