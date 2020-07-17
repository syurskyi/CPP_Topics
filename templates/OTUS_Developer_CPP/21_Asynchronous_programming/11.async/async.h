#pragma once

? <cstddef>

n... async {

using handle_t = v.. *;

handle_t connect(std::size_t bulk);
v.. receive(handle_t handle, const char *data, std::size_t size);
v.. disconnect(handle_t handle);

}
