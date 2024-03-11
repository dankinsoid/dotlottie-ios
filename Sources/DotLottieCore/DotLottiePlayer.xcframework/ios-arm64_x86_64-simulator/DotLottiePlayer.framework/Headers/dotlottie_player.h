// This file was autogenerated by some hot garbage in the `uniffi` crate.
// Trust me, you don't want to mess with it!

#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// The following structs are used to implement the lowest level
// of the FFI, and thus useful to multiple uniffied crates.
// We ensure they are declared exactly once, with a header guard, UNIFFI_SHARED_H.
#ifdef UNIFFI_SHARED_H
    // We also try to prevent mixing versions of shared uniffi header structs.
    // If you add anything to the #else block, you must increment the version suffix in UNIFFI_SHARED_HEADER_V4
    #ifndef UNIFFI_SHARED_HEADER_V4
        #error Combining helper code from multiple versions of uniffi is not supported
    #endif // ndef UNIFFI_SHARED_HEADER_V4
#else
#define UNIFFI_SHARED_H
#define UNIFFI_SHARED_HEADER_V4
// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️

typedef struct RustBuffer
{
    int32_t capacity;
    int32_t len;
    uint8_t *_Nullable data;
} RustBuffer;

typedef int32_t (*ForeignCallback)(uint64_t, int32_t, const uint8_t *_Nonnull, int32_t, RustBuffer *_Nonnull);

typedef struct ForeignBytes
{
    int32_t len;
    const uint8_t *_Nullable data;
} ForeignBytes;

// Error definitions
typedef struct RustCallStatus {
    int8_t code;
    RustBuffer errorBuf;
} RustCallStatus;

// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️
#endif // def UNIFFI_SHARED_H

// Continuation callback for UniFFI Futures
typedef void (*UniFfiRustFutureContinuation)(void * _Nonnull, int8_t);

// Scaffolding functions
void*_Nonnull uniffi_dotlottie_player_fn_clone_dotlottieplayer(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_free_dotlottieplayer(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_dotlottie_player_fn_constructor_dotlottieplayer_new(RustBuffer config, RustCallStatus *_Nonnull out_status
);
uint64_t uniffi_dotlottie_player_fn_method_dotlottieplayer_buffer_len(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
uint64_t uniffi_dotlottie_player_fn_method_dotlottieplayer_buffer_ptr(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_dotlottieplayer_clear(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_dotlottie_player_fn_method_dotlottieplayer_config(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
float uniffi_dotlottie_player_fn_method_dotlottieplayer_current_frame(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
float uniffi_dotlottie_player_fn_method_dotlottieplayer_duration(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_is_complete(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_is_loaded(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_is_paused(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_is_playing(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_is_stopped(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_load_animation(void*_Nonnull ptr, RustBuffer animation_id, uint32_t width, uint32_t height, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_load_animation_data(void*_Nonnull ptr, RustBuffer animation_data, uint32_t width, uint32_t height, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_load_animation_path(void*_Nonnull ptr, RustBuffer animation_path, uint32_t width, uint32_t height, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_load_dotlottie_data(void*_Nonnull ptr, RustBuffer file_data, uint32_t width, uint32_t height, RustCallStatus *_Nonnull out_status
);
uint32_t uniffi_dotlottie_player_fn_method_dotlottieplayer_loop_count(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_dotlottie_player_fn_method_dotlottieplayer_manifest(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_dotlottie_player_fn_method_dotlottieplayer_manifest_string(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_dotlottie_player_fn_method_dotlottieplayer_markers(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_pause(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_play(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_render(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
float uniffi_dotlottie_player_fn_method_dotlottieplayer_request_frame(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_resize(void*_Nonnull ptr, uint32_t width, uint32_t height, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_seek(void*_Nonnull ptr, float no, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_dotlottieplayer_set_config(void*_Nonnull ptr, RustBuffer config, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_set_frame(void*_Nonnull ptr, float no, RustCallStatus *_Nonnull out_status
);
int8_t uniffi_dotlottie_player_fn_method_dotlottieplayer_stop(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_dotlottieplayer_subscribe(void*_Nonnull ptr, void*_Nonnull observer, RustCallStatus *_Nonnull out_status
);
float uniffi_dotlottie_player_fn_method_dotlottieplayer_total_frames(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_dotlottieplayer_unsubscribe(void*_Nonnull ptr, void*_Nonnull observer, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_dotlottie_player_fn_clone_observer(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_free_observer(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_init_callback_observer(ForeignCallback _Nonnull handle
);
void uniffi_dotlottie_player_fn_method_observer_on_complete(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_observer_on_frame(void*_Nonnull ptr, float frame_no, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_observer_on_load(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_observer_on_load_error(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_observer_on_loop(void*_Nonnull ptr, uint32_t loop_count, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_observer_on_pause(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_observer_on_play(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_observer_on_render(void*_Nonnull ptr, float frame_no, RustCallStatus *_Nonnull out_status
);
void uniffi_dotlottie_player_fn_method_observer_on_stop(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer ffi_dotlottie_player_rustbuffer_alloc(int32_t size, RustCallStatus *_Nonnull out_status
);
RustBuffer ffi_dotlottie_player_rustbuffer_from_bytes(ForeignBytes bytes, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rustbuffer_free(RustBuffer buf, RustCallStatus *_Nonnull out_status
);
RustBuffer ffi_dotlottie_player_rustbuffer_reserve(RustBuffer buf, int32_t additional, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_u8(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_u8(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_u8(void* _Nonnull handle
);
uint8_t ffi_dotlottie_player_rust_future_complete_u8(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_i8(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_i8(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_i8(void* _Nonnull handle
);
int8_t ffi_dotlottie_player_rust_future_complete_i8(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_u16(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_u16(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_u16(void* _Nonnull handle
);
uint16_t ffi_dotlottie_player_rust_future_complete_u16(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_i16(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_i16(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_i16(void* _Nonnull handle
);
int16_t ffi_dotlottie_player_rust_future_complete_i16(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_u32(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_u32(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_u32(void* _Nonnull handle
);
uint32_t ffi_dotlottie_player_rust_future_complete_u32(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_i32(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_i32(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_i32(void* _Nonnull handle
);
int32_t ffi_dotlottie_player_rust_future_complete_i32(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_u64(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_u64(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_u64(void* _Nonnull handle
);
uint64_t ffi_dotlottie_player_rust_future_complete_u64(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_i64(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_i64(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_i64(void* _Nonnull handle
);
int64_t ffi_dotlottie_player_rust_future_complete_i64(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_f32(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_f32(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_f32(void* _Nonnull handle
);
float ffi_dotlottie_player_rust_future_complete_f32(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_f64(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_f64(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_f64(void* _Nonnull handle
);
double ffi_dotlottie_player_rust_future_complete_f64(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_pointer(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_pointer(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_pointer(void* _Nonnull handle
);
void*_Nonnull ffi_dotlottie_player_rust_future_complete_pointer(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_rust_buffer(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_rust_buffer(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_rust_buffer(void* _Nonnull handle
);
RustBuffer ffi_dotlottie_player_rust_future_complete_rust_buffer(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
void ffi_dotlottie_player_rust_future_poll_void(void* _Nonnull handle, UniFfiRustFutureContinuation _Nonnull callback, void* _Nonnull callback_data
);
void ffi_dotlottie_player_rust_future_cancel_void(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_free_void(void* _Nonnull handle
);
void ffi_dotlottie_player_rust_future_complete_void(void* _Nonnull handle, RustCallStatus *_Nonnull out_status
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_buffer_len(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_buffer_ptr(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_clear(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_config(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_current_frame(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_duration(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_is_complete(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_is_loaded(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_is_paused(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_is_playing(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_is_stopped(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_load_animation(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_load_animation_data(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_load_animation_path(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_load_dotlottie_data(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_loop_count(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_manifest(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_manifest_string(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_markers(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_pause(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_play(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_render(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_request_frame(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_resize(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_seek(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_set_config(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_set_frame(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_stop(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_subscribe(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_total_frames(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_dotlottieplayer_unsubscribe(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_observer_on_complete(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_observer_on_frame(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_observer_on_load(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_observer_on_load_error(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_observer_on_loop(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_observer_on_pause(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_observer_on_play(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_observer_on_render(void
    
);
uint16_t uniffi_dotlottie_player_checksum_method_observer_on_stop(void
    
);
uint16_t uniffi_dotlottie_player_checksum_constructor_dotlottieplayer_new(void
    
);
uint32_t ffi_dotlottie_player_uniffi_contract_version(void
    
);

