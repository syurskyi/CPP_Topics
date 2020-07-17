#pragma once

? <cstddef>

n... async {

using handle_t = v.. *;

handle_t connect(st. size_t bulk);
v.. receive(handle_t handle, co.. ch.. *data, st. size_t size);
v.. disconnect(handle_t handle);

}
