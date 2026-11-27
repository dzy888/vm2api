// 0016d410 hex

/* craggemini[b21da2d71f2da7a3]::license::hex */

void __rustcall
craggemini[b21da2d71f2da7a3]::license::hex(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  
  lVar4 = param_3 * 2;
  if (-1 < lVar4) goto LAB_0016d435;
  param_1 = (longlong *)0x0;
  while( true ) {
    (*(code *)PTR_handle_error_00219c78)();
    param_2 = lVar4;
LAB_0016d435:
    local_58 = lVar4;
    local_40 = param_1;
    if (param_3 == 0) break;
    local_38 = param_3;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    param_1 = (longlong *)0x1;
    local_50 = (*(code *)PTR___rust_alloc_00219c88)();
    if (local_50 != 0) {
      local_48 = 0;
      lVar4 = 0;
      do {
        lVar3 = local_48;
        bVar1 = *(byte *)(param_2 + lVar4);
        uVar2 = anon_c9247e0b0208fc9c8c019285c3882aec_112_llvm_5798562142159169407[bVar1 >> 4];
        if (local_48 == local_58) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_58,local_48,1,1,1);
        }
        *(undefined1 *)(local_50 + lVar3) = uVar2;
        local_48 = lVar3 + 1;
        uVar2 = anon_c9247e0b0208fc9c8c019285c3882aec_112_llvm_5798562142159169407[bVar1 & 0xf];
        if (local_48 == local_58) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_58,local_48,1,1,1);
        }
        *(undefined1 *)(local_50 + 1 + lVar3) = uVar2;
        local_48 = lVar3 + 2;
        lVar4 = lVar4 + 1;
      } while (local_38 != lVar4);
LAB_0016d53d:
      local_40[2] = local_48;
      *local_40 = local_58;
      local_40[1] = local_50;
      return;
    }
  }
  local_50 = 1;
  local_48 = 0;
  goto LAB_0016d53d;
}


