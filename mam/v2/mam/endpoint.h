/*
 * Copyright (c) 2018 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * MAM is based on an original implementation & specification by apmi.bsu.by
 * [ITSec Lab]
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef __MAM_V2_MAM_ENDPOINT_H__
#define __MAM_V2_MAM_ENDPOINT_H__

#include "mam/v2/mss/mss.h"
#include "mam/v2/trits/trits.h"

#define MAM2_ENDPOINT_ID_SIZE MAM2_MSS_MT_HASH_SIZE

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mam_endpoint_s {
  trit_t id[MAM2_ENDPOINT_ID_SIZE];
  trits_t name;
  mss_t mss;
} mam_endpoint_t;

typedef struct mam_endpoint_t_set_entry_s mam_endpoint_t_set_entry_t;
typedef mam_endpoint_t_set_entry_t *mam_endpoint_t_set_t;

/**
 * Gets an endpoint's id
 *
 * @param endpoint The endpoint
 *
 * @return the endpoint's id
 */
trits_t mam_endpoint_id(mam_endpoint_t const *const endpoint);

/**
 * Gets an endpoint channel's name
 *
 * @param endpoint The endpoint
 *
 * @return the endpoint channel's name
 */
trits_t mam_endpoint_channel_name(mam_endpoint_t const *const endpoint);

/**
 * Gets an endpoint's name
 *
 * @param endpoint The endpoint
 *
 * @return the endpoint's name
 */
trits_t mam_endpoint_name(mam_endpoint_t const *const endpoint);

/**
 * Allocates memory for internal objects and generates MSS public key
 *
 * @param allocator A MAM allocator
 * @param prng A shared PRNG interface used to generate WOTS private keys
 * @param height MSS MT height
 * @param channel_name The channel name
 * @param endpoint_name The endpoint name
 * @param endpoint The endpoint
 *
 * @return a status code
 */
retcode_t mam_endpoint_create(mam_prng_t const *const prng,
                              mss_mt_height_t const height,
                              trits_t const channel_name,
                              trits_t const endpoint_name,
                              mam_endpoint_t *const endpoint);

/**
 * Deallocates memory for internal objects
 *
 * @param allocator A MAM allocator
 * @param endpoint The endpoint
 */
void mam_endpoint_destroy(mam_endpoint_t *const endpoint);

retcode_t mam_endpoints_destroy(mam_endpoint_t_set_t *const endpoints);

size_t mam_endpoint_serialized_size(mam_endpoint_t const *const endpoint);

void mam_endpoint_serialize(mam_endpoint_t const *const endpoint,
                            trits_t *const buffer);

retcode_t mam_endpoint_deserialize(trits_t *const buffer,
                                   trits_t const channel_name,
                                   mam_prng_t *const prng,
                                   mam_endpoint_t *const endpoint);

size_t mam_endpoints_serialized_size(mam_endpoint_t_set_t const endpoints);

void mam_endpoints_serialize(mam_endpoint_t_set_t const endpoints,
                             trits_t *const buffer);

retcode_t mam_endpoints_deserialize(trits_t *const buffer,
                                    trits_t const channel_name,
                                    mam_prng_t *const prng,
                                    mam_endpoint_t_set_t *const endpoints);

#ifdef __cplusplus
}
#endif

#endif  // __MAM_V2_MAM_ENDPOINT_H__
