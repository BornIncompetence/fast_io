set(current_dir 0044.sha)

set(CMAKE_FOLDER "${CMAKE_FOLDER}/${current_dir}")

example_target(${current_dir} hello_hmac_sha256)
example_target(${current_dir} hmac_sha1)
example_target(${current_dir} hmac_sha256)
example_target(${current_dir} hmac_sha512)
example_target(${current_dir} sha1)
example_target(${current_dir} sha256)
example_target(${current_dir} sha512)
