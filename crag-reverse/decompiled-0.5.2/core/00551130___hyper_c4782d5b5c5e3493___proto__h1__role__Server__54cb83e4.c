// 00551130 <hyper[c4782d5b5c5e3493]::proto::h1::role::Server>

/* WARNING: Switch with 1 destination removed at 0x00551219 */
/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::try_keep_alive::<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>
    */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::try_keep_alive::
<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x90) == 3) {
    if (*(longlong *)(param_1 + 0xf8) == -0x7ffffffffffffffc) {
      if (*(char *)(param_1 + 0x187) != '\x01')
      goto <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>_close;
      if (((*(byte *)(param_1 + 0x128) != 0xff) && (10 < *(byte *)(param_1 + 0x128))) &&
         (*(longlong *)(param_1 + 0x138) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(0x8000000000000004,1);
      }
      *(undefined1 *)(param_1 + 0x128) = 0xff;
      *(undefined1 *)(param_1 + 0x187) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0x8000000000000002;
      if (*(int *)(param_1 + 0x120) != -1) {
        *(undefined1 *)(param_1 + 0x185) = 1;
        return;
      }
    }
    else if (*(longlong *)(param_1 + 0xf8) == -0x7ffffffffffffffb) {
<hyper[c4782d5b5c5e3493]::proto::h1::conn::State>_close:
      if (((*(longlong *)(param_1 + 0x90) == 1) || ((int)*(longlong *)(param_1 + 0x90) == 2)) &&
         ((*(uint *)(param_1 + 0x98) < 2 && (*(longlong *)(param_1 + 200) != 0)))) {
        (*(code *)PTR_drop_007994e8)();
      }
      *(undefined8 *)(param_1 + 0x90) = 4;
      lVar1 = *(longlong *)(param_1 + 0xf8);
      if (((3 < lVar1 + 0x7ffffffffffffffeU || lVar1 + 0x7ffffffffffffffeU == 1) &&
          (-0x7fffffffffffffff < lVar1)) && (lVar1 != -1)) {
        if (*(longlong *)(param_1 + 0x108) != 0) {
          lVar1 = *(longlong *)(param_1 + 0x100) + 0x38;
          lVar2 = 1 - *(longlong *)(param_1 + 0x108);
          do {
            if (*(longlong *)(lVar1 + -0x38) != 0) {
              (**(code **)(*(longlong *)(lVar1 + -0x38) + 0x20))();
            }
            lVar1 = lVar1 + 0x20;
            lVar2 = lVar2 + 1;
          } while (lVar2 != 1);
          lVar1 = *(longlong *)(param_1 + 0xf8);
        }
        if (lVar1 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      *(undefined8 *)(param_1 + 0xf8) = 0x8000000000000005;
      *(undefined1 *)(param_1 + 0x187) = 2;
      return;
    }
  }
  else if (((int)*(longlong *)(param_1 + 0x90) == 4) &&
          (*(longlong *)(param_1 + 0xf8) == -0x7ffffffffffffffc))
  goto <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>_close;
  return;
}


