// 00031fd0 <agy_bridge[64a9e9deac6c45ce]::Runtime>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::Runtime> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::Runtime>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  if ((param_1[6] != -1) && (param_1[6] != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  (*(code *)PTR_close_000c3ab8)();
  <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::Turn>>(param_1 + 0xc);
  <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::PendingControl>>
            (param_1 + 0x84);
  if ((param_1[0x95] != -1) && (param_1[0x95] != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x72);
  if (param_1[0x72] != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,8);
  }
  <agy_bridge[64a9e9deac6c45ce]::PromptArena>(param_1 + 0x76);
  return;
}


